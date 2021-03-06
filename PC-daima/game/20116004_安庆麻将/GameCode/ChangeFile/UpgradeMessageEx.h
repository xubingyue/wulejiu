/****************************************************************************
Copyright (c) 2014-2016 Beijing TianRuiDiAn Network Technology Co.,Ltd.
Copyright (c) 2014-2016 ShenZhen Redbird Network Polytron Technologies Inc.
 
http://www.hotniao.com

All of the content of the software, including code, pictures, 
resources, are original. For unauthorized users, the company 
reserves the right to pursue its legal liability.
****************************************************************************/
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               #pragma once
#include "../GameMessage/UpgradeMessage.h"
#pragma pack(1)



enum	BUTTON_TYPE			// 出牌类型
{
	BUTTON_HE = 0,
	BUTTON_GANG,
	BUTTON_PENG,
	BUTTON_KAN,//坎牌
	BUTTON_SAOHU,//扫虎
	BUTTON_CHI,
	BUTTON_CHU,
	BUTTON_GUO,
	BUTTON_TING,
	BUTTON_BUPAI,			// 补牌
	BUTTON_YANPAI             
};

char strBaoType[][64] = 
{
	{"吃三顺包"},
	{"吃四顺包"},
	{"碰三顺包"},
	{"碰四顺包"},
	{"吃三反包"},
	{"吃四反包"},
	{"碰三反包"},
	{"碰四反包"}
};

//承包类型
enum em_BAO_TYPE
{
	e_BAO_TYPE_BEGIN = 0,
	e_SHUN_CHI_3 = 0,	//吃三口顺包
	e_SHUN_CHI_4,		//吃四口顺包
	e_SHUN_PENG_3,		//碰三口顺包
	e_SHUN_PENG_4,		//碰四口顺包
	e_FAN_CHI_3,		//吃三口反包
	e_FAN_CHI_4,		//吃四口反包
	e_FAN_PENG_3,		//碰三口反包
	e_FAN_PENG_4,		//碰四口反包
	e_BAO_TYPE_END,
};



enum HUPAI_TYPE_EX//LU胡牌类型枚举结构
{	
	HUPAI_HU_PAI				= 150,		//能胡（素番）1番 1分
	HUPAI_PENG_PENG_HU			,		//大对子（碰碰糊）2番 2分	//sdmj
	HUPAI_AN_QI_DUI				,		//暗七对（即七对子）3番 4分	//sdmj
	HUPAI_QUAN_BUKAO			,		//13烂
	HUPAI_QIXING_BUKAO			,		//七星十三烂
	HUPAI_KAI_PAI				,		//卡牌
	HUPAI_BIAN_PAI				,		//边牌
	HUPAI_LIANG_DUI				,		//胡两对
	HUPAI_MEN_QIAN_QING			,		//门前清
	HUPAI_DA_DIAOCHE			,		//打吊车
	HUPAI_THREE_NAN				,		//三张南风
	HUPAI_THREE_XI				,		//三张北
	HUPAI_THREE_BEI				,
	HUPAI_DIAN_DIAO				,		//单调将
	HUPAI_TYPE_GANG_KAI			,		// 杠开 			//sdmj
	HUPAI_TYPE_TIAN_HU			,		// 天胡 			//sdmj
	HUPAI_TYPE_DI_HU			,		// 地胡 			//sdmj
	HUPAI_TYPE_QIANG_GANG		,		// 抢杠 			//sdmj	
	HUPAI_ZI_MO					,		//自摸	//sdmj
	HUPAI_NO_HUA				,
	HUPAI_QIANG_GANG_HU			,		//抢杠胡
};

///冒泡排序(从大到小排序)
static void MaoPaoSort(int a[], int count,bool big)
{
	if(a == NULL)
        return ;
	for (int i =0; i < count - 1; i++ )
	{
	    for(int j = 0; j < count - i -1; j++)
		{
			if(big)
			{
				if(a[j] < a[j+1])
				{
					int iTempBig = a[j];
					a[j] = a[j+1];
					a[j+1] = iTempBig;		
				}
			}
			else
			{
				if(a[j] > a[j+1])
				{
					int iTempBig = a[j];
					a[j] = a[j+1];
					a[j+1] = iTempBig;		
				}
			}
		}	
	}
}

///冒泡排序(从大到小排序)
static void MaoPaoSort(BYTE a[], int count,bool big)
{
	if(a == NULL)
        return ;
	for (int i =0; i < count - 1; ++i )
	{
	    for(int j = i+1; j < count; ++j)
		{
			if(big)
			{
				if(a[j] > a[i])
				{
					BYTE iTempBig = a[j];
					a[j] = a[i];
					a[i] = iTempBig;		
				}
			}
			else
			{
				if(a[j] < a[i])
				{
					BYTE iTempBig = a[j];
					a[j] = a[i];
					a[i] = iTempBig;		
				}
			}
		}	
	}
}

//冒泡排序(从大到小)
static void MaoPaoSort(PaiStruct a[], int count)
{
	if(a == NULL)
        return ;
	PaiStruct iTempBig ;
	for (int i =0; i < count - 1; i++ )
	{
	    for(int j = i; j < count; j++)
		{
			if(a[i].count < a[j].count)
			{
				iTempBig.count= a[i].count;
				iTempBig.pai= a[i].pai;

				a[i].count = a[j].count;
				a[i].pai = a[j].pai;

				a[j].count = iTempBig.count;	
				a[j].pai = iTempBig.pai;	
			}
		}	
	}
}

///吃碰杠牌数据结构
struct GCPStructEx:GCPStruct
{
	BYTE  byBigGang[4][2]; //特殊杠牌数据（长春麻将）
	bool  bIsBigGang;      //是否大杠
	GCPStructEx()
	{
		Init();
	}
	void Init()
	{
		GCPStruct::Init();
		bIsBigGang = false;
		memset(byBigGang,255,sizeof(byBigGang));
	};
};


/*--------------------------------------------------------------*/
///事件数据包,重载得来，可以添加自己的特殊数据
///游戏开始事件	DWJ
struct tagBeginEx:tagBegin
{
	void Clear()
	{
		tagBegin::Clear();
	}
};
/*--------------------------------------------------------------*/
///以东为庄事件	DWJ
struct tagDongNtEx:tagDongNt
{
	void Clear()
	{
		tagDongNt::Clear();
	}
};
/*----------------------------------------------------------------*/
///掷2颗色子确定起牌位置事件
struct tagTwoSeziDirEx:tagTwoSeziDir
{
	void Clear()
	{
		tagTwoSeziDir::Clear();
	}
};
/*----------------------------------------------------------------*/
///掷2颗色子确定起牌位置（点数和）和起牌点（最小点）事件
struct tagTwoSeziDirAndGetPaiEx:tagTwoSeziDirAndGetPai
{
	void Clear()
	{
		tagTwoSeziDirAndGetPai::Clear();
	}
};
/*----------------------------------------------------------------*/
///发牌事件	DWJ
struct tagSendPaiEx:tagSendPai
{
	void Clear()
	{
		tagSendPai::Clear();
	}
};
/*----------------------------------------------------------------*/
///所有玩家补花事件
struct tagAllBuHuaEx:tagAllBuHua
{
	void Clear()
	{
		tagAllBuHua::Clear();
	}
};
/*----------------------------------------------------------------*/
///开始出牌通知事件
struct	tagBeginOutPaiEx:tagBeginOutPai
{
	void Clear()
	{
		tagBeginOutPai::Clear();
	}
};
/*----------------------------------------------------------------*/
///吃碰杠糊通知事件事件
struct	tagCPGNotifyEx:tagCPGNotify
{
	void Clear()
	{
		tagCPGNotify::Clear();
	}
};
/*----------------------------------------------------------------*/
///出牌事件
struct	tagOutPaiEx:tagOutPai
{
	void Clear()
	{
		tagOutPai::Clear();
	}
};
/*----------------------------------------------------------------*/
///抓牌牌事件
struct	tagZhuaPaiEx:tagZhuaPai
{
	void Clear()
	{
		tagZhuaPai::Clear();
	}
};
/*----------------------------------------------------------------*/
///单个玩家补花事件
struct tagOneBuHuaEx:tagOneBuHua
{
	void Clear()
	{
		tagOneBuHua::Clear();
	}
};
/*----------------------------------------------------------------*/
///吃牌牌事件
struct tagChiPaiEx:tagChiPai
{
	GCPStructEx m_UserGCPData[PLAY_COUNT][5];     //吃碰杠杠牌
	void Clear()
	{
		tagChiPai::Clear();
		memset(m_UserGCPData, 255, sizeof(m_UserGCPData));//吃碰杠杠牌
	}
};
/*----------------------------------------------------------------*/
///碰牌牌事件
struct tagPengPaiEx:tagPengPai
{
	GCPStructEx m_UserGCPData[PLAY_COUNT][5];     //吃碰杠杠牌
	void Clear()
	{
		tagPengPai::Clear();
		memset(m_UserGCPData, 255, sizeof(m_UserGCPData));//吃碰杠杠牌
	}
};

struct tagCanTing
{
	BYTE byDeskStation;
	tagCanTing()
	{
		byDeskStation = 255;
	}
};
/*----------------------------------------------------------------*/
///杠牌牌事件
struct tagGangPaiEx:tagGangPai
{
	GCPStructEx m_UserGCPData[PLAY_COUNT][5];     //吃碰杠杠牌
	bool		bIsBigGang;				//是否大杠
	int			iGangFen[PLAY_COUNT];	//本次杠牌的得分情况
	void Clear()
	{
		tagGangPai::Clear();
		memset(m_UserGCPData, 255, sizeof(m_UserGCPData));//吃碰杠杠牌
		memset(iGangFen, 0, sizeof(iGangFen));//本次杠牌的得分情况
		bIsBigGang = false;				//是否大杠
	}
};
/*----------------------------------------------------------------*/
///听牌牌事件
struct tagTingPaiEx:tagTingPai
{
	//BYTE    byAnGangCard;		//暗杠后听牌要亮暗杠的一张牌
	void Clear()
	{
		tagTingPai::Clear();
		//byAnGangCard = 255;
	}
};
/*----------------------------------------------------------------*/
///糊牌牌事件
struct tagHuPaiEx:tagHuPai
{
//	GCPStructEx m_UserGCPData[4][5];//吃碰杠杠牌
	int		iZongFen[8];	//各个玩家的总分
	int		iHuShu[4];		//各个玩家的糊数
	int		iMoney[8];		//各个玩家的总分
	int 	iHuFen[4];		//各个玩家的糊牌分
	int 	iGangFen[4];	//各个玩家的杠分
	BYTE    byGengCount;

	BYTE    m_byDianPao[PLAY_COUNT];//点炮玩家位置
	bool    m_bIsZiMo[PLAY_COUNT];//是否自摸胡牌
	int		m_iZongFan[PLAY_COUNT];//胡牌总番数
	int		m_iGengCount[PLAY_COUNT];//每个胡牌玩家的根数
	void Clear()
	{
		tagHuPai::Clear();
		memset(iZongFen,0,sizeof(iZongFen));

		memset(iMoney,0,sizeof(iMoney));
		memset(iHuFen,0,sizeof(iHuFen));
		byGengCount = 0;

		memset(iGangFen, 0, sizeof(iGangFen));//各个玩家的杠分



		memset(m_byDianPao, 0, sizeof(m_byDianPao));	//点炮玩家位置
		memset(m_bIsZiMo, 0, sizeof(m_bIsZiMo));	//是否自摸胡牌

		memset(m_iZongFan, 0, sizeof(m_iZongFan));	//胡牌总番数
		memset(m_iGengCount, 0, sizeof(m_iGengCount));	//每个胡牌玩家的根数
	}
};
struct tagHuDetails
{
	BYTE byHua[PLAY_COUNT];
	BYTE byNoHua[PLAY_COUNT];
	BYTE byThreeNan[PLAY_COUNT];
	BYTE byThreeXi[PLAY_COUNT];
	BYTE byThreeBei[PLAY_COUNT];
	BYTE byKaPai[PLAY_COUNT];
	BYTE byBianPai[PLAY_COUNT];
	BYTE byDianDiao[PLAY_COUNT];
	BYTE byLiangDui[PLAY_COUNT];
	BYTE byGangHua[PLAY_COUNT];
	BYTE byMenQing[PLAY_COUNT];
	BYTE byMingGang[PLAY_COUNT];
	BYTE byAnGang[PLAY_COUNT];
	BYTE byNanGang[PLAY_COUNT];
	BYTE byXiGang[PLAY_COUNT];
	BYTE byBeiGang[PLAY_COUNT];
	BYTE byQiangGang[PLAY_COUNT];
	BYTE byNanGang_an[PLAY_COUNT];
	BYTE byXiGang_an[PLAY_COUNT];
	BYTE byBeiGang_an[PLAY_COUNT];

	BYTE byFourDong[PLAY_COUNT];
	BYTE byFourZhong[PLAY_COUNT];
	BYTE byFourFa[PLAY_COUNT];
	BYTE byFourBai[PLAY_COUNT];
	BYTE byShiSanLan[PLAY_COUNT];
	BYTE byQiXing[PLAY_COUNT];
	BYTE byQiDui[PLAY_COUNT];
	BYTE byPengPengHu[PLAY_COUNT];
	BYTE byDiaoChe[PLAY_COUNT];
	BYTE byTianHu[PLAY_COUNT];
	BYTE byDiHu[PLAY_COUNT];
	BYTE byShunBao[PLAY_COUNT];
	BYTE byFanBao[PLAY_COUNT];

	tagHuDetails()
	{
		init();
	}

	void init()
	{
		memset(this,0,sizeof(tagHuDetails));
		for (int i = 0;i < PLAY_COUNT;i++)
		{
			byFanBao[i] = 255;
			byShunBao[i] = 255;
			byFanBao[i] = 255;
		}
	}
};
/*----------------------------------------------------------------*/
///算分事件
struct tagCountFenEx:tagCountFen
{
	int		iBase;						//底分
	int		iFanBase;					//番底
	int 	iHuaCount[PLAY_COUNT];		//各个花数
	int		iFanCount[PLAY_COUNT];		//各玩家番数
	int		iZongFen[PLAY_COUNT];		//各玩家总分
	bool	bMingPai[PLAY_COUNT];		//是否明楼
	bool    m_bIsHu[PLAY_COUNT];		//哪些玩家胡牌了
	BYTE    byHuType[PLAY_COUNT][MAX_HUPAI_TYPE];//各个玩家的糊牌类型
	int		iShunBaoFen[PLAY_COUNT];		//各玩家顺包分
	int		iFanBaoFen[PLAY_COUNT];			//各玩家反包分
	BYTE	byShunBaoType[PLAY_COUNT];		//各玩家顺包类型
	BYTE	byFanBaoType[PLAY_COUNT];		//各玩家反包类型

	//GCPStructEx m_UserGCPData[4][5];//吃碰杠杠牌
//------------------用于展示结算详细信息 傻逼客户
	tagHuDetails huDetail;

	int		iTax;//服务费（收税）
	int     iBasePoint;//倍率
	bool    bIsShowTax;//是否显示服务费
	BYTE    byCloseFlag;//结束方式：正常结束还是强退
	void Clear()
	{
		tagCountFen::Clear();
		iBase = 0;
		//iHuangZhuangBase = 1;
		memset(iHuaCount,0,sizeof(iHuaCount));
		memset(iFanCount,0,sizeof(iFanCount));
		memset(iZongFen,0,sizeof(iZongFen));
		memset(bMingPai,0,sizeof(bMingPai));
		memset(byHuType, 255, sizeof(byHuType));
		memset(iShunBaoFen,0,sizeof(iShunBaoFen));
		memset(iFanBaoFen,0,sizeof(iFanBaoFen));
		memset(byShunBaoType, 255, sizeof(byShunBaoType));
		memset(byFanBaoType, 255, sizeof(byFanBaoType));
		//memset(m_UserGCPData, 255, sizeof(m_UserGCPData));
		memset(m_bIsHu, 0, sizeof(m_bIsHu));	//哪些玩家胡牌了
		huDetail.init();
		iTax = 0;//服务费（收税）
		iBasePoint = 1;//倍率
		bIsShowTax = 1;//是否显示服务费
		byCloseFlag = GF_NORMAL;//结束方式：正常结束还是强退
	}
};

//超端换牌数据
struct tagSuperChangeCard
{
	BYTE	byStation;			//位置
	BYTE	byChangeCard;		//换的牌	
	BYTE	byNewCard;			//被换到的新牌	
	bool	bSuccese;			//是否成功

	BYTE	byArHandPai[HAND_CARD_NUM];//手牌数据
	BYTE	byArHandPaiCount;	//手牌张数

	tagSuperChangeCard()
	{
		byStation = 255;
		byChangeCard = 255;		
		byNewCard = 255;	
		bSuccese = false;	
		memset(byArHandPai,255,sizeof(byArHandPai));
		byArHandPaiCount=0;
	}
};


struct tagHaveAction
{
	BYTE byStation;
	tagHaveAction()
	{
		byStation = 255;
	}
};













///掷2颗色子的点数和为庄事件
struct tagTwoSeziNtEx:tagTwoSeziNt
{
	void Clear()
	{
		tagTwoSeziNt::Clear();
	}
};
///掷2颗色子确定庄家和起牌点位置事件
struct tagTwoSeziNtAndGetPaiEx:tagTwoSeziNtAndGetPai
{
	void Clear()
	{
		tagTwoSeziNtAndGetPai::Clear();
	}
};

///轮流掷2颗色子确定庄家
struct tagTurnSeziNtEx:tagTurnSeziNt
{
	void Clear()
	{
		tagTurnSeziNt::Clear();
	}
};



///掷2颗色子确定起牌敦数事件
struct tagTwoSeziGetPaiEx:tagTwoSeziGetPai
{
	void Clear()
	{
		tagTwoSeziGetPai::Clear();
	}
};


///跳牌事件
struct tagTiaoPaiEx:tagTiaoPai
{
	void Clear()
	{
		tagTiaoPai::Clear();
	}
};
///掷色子2颗色子定精牌事件
struct tagTwoSeziJingEx:tagTwoSeziJing
{
	JingStruct  m_StrJing;
	bool bUserTing[4];
	bool m_bLookBao[4];
	void Clear()
	{
		tagTwoSeziJing::Clear();
		m_StrJing.Init();
		memset(bUserTing,0,sizeof(bUserTing));
		memset(m_bLookBao,0,sizeof(m_bLookBao));
	}
};
///掷色子1颗色子定金牌事件
struct tagOneSeziJinEx:tagOneSeziJin
{
	JingStruct  m_StrJing;
	void Clear()
	{
		tagOneSeziJin::Clear();
		m_StrJing.Init();
	}
};










///坎牌事件
struct tagKanPaiEx:tagKanPai
{
	GCPStructEx m_UserGCPData[4][5];     //吃碰杠杠牌
	void Clear()
	{
		tagKanPai::Clear();
		memset(m_UserGCPData, 255, sizeof(m_UserGCPData));//吃碰杠杠牌	
	}
};
///扫虎事件（查虎麻将专用）
struct tagSaoHuEx:tagSaoHu
{
	void Clear()
	{
		tagSaoHu::Clear();
	}
};


///游戏结束处理事件
struct tagEndHandleEx:tagEndHandle
{
	void Clear()
	{
		tagEndHandle::Clear();
	}
};
///非正常结束处理事件
struct tagUnnormalEndHandleEx:tagUnnormalEndHandle
{
	void Clear()
	{
		tagUnnormalEndHandle::Clear();
	}
};
///////////////////////////////////////////////////

///定缺事件数据包
struct tagDingQueEx
{
	BYTE byUser; //定缺玩家
	BYTE byQue; //缺的牌
	BYTE byQuePai[PLAY_COUNT]; //缺的牌
	bool bNotify; // 是否服务器定缺通知
	bool bFinish[PLAY_COUNT];//是否已经完成定缺
	tagDingQueEx()
	{
		Clear();
	}
	void Clear()
	{
		byUser = 255; //定缺玩家
		byQue = 255; //缺的牌
		memset(byQuePai, 255, sizeof(byQuePai));//
		memset(bFinish, 0, sizeof(bFinish));////是否已经完成定缺
		bNotify = false; // 是否服务器定缺通知
	}
};

//////////////////新增数据包/////////
///麻将参数设置
struct MJ_Setting
{
    int                                 nSeziTime;                          ///骰子时间(ms)
    int                                 nSendcardTime;                      ///发牌时间(ms)
    BYTE                                ucDingQueTime;                      ///定缺时间(s)
    BYTE                                ucBlockTime;                        ///拦牌时间
    BYTE                                ucOutcardTime;                      ///出牌时间
    BYTE                                ucBeginTime;                        ///自动开始（离开）时间
    BYTE                                ucNextTime;                         ///下一局自动开始（离开）时间
    BYTE                                bAutoBegin;                         ///是否自动准备
    int                                 nAutoTime;							///托管的反应时间(ms)

    MJ_Setting()
    {
        nSeziTime = 10000;
        nSendcardTime = 3000;
        ucDingQueTime = 20;
        ucBlockTime = 15;
        ucOutcardTime = 20;
        ucBeginTime = 20;
        ucNextTime = 20;
        bAutoBegin = 1;
        nAutoTime = 1;
    }
};
///麻将状态
struct MJ_State
{
    MJTHINGS                thingDoing;           // 当前状态
    BYTE                    ucCurChair;           // 当前由谁操作        
    BYTE                    ucTime;               // 时间(s)
};
/*----------------------------------------------------------------------*/
///麻将时间等待：时间到了服务器代为处理
struct MJ_WaitTimeEx
{
	BYTE					byWaitThing;		  // 等待处理事件
    BYTE                    byCurChair;           // 当前由谁操作        
    BYTE                    byTime;               // 等待时间时间(s)
	bool					bEffect;			  // 等待是否有效
    MJ_WaitTimeEx()
    {
		Clear();
    }
	void Clear()
	{	
		byWaitThing = 0;		// 等待处理事件
		byCurChair = 255;       // 当前由谁操作        
		byTime = 255;           // 等待时间时间(s)
		bEffect = false;		// 等待是否有效
	}
};
/*----------------------------------------------------------------------*/
///断线重连数据包
struct GameStationDataEx:GameStationData
{
	GCPStructEx			m_UserGCPData[4][5];					//玩家吃碰杠牌
	BYTE				m_byArOutPai[PLAY_COUNT][OUT_CARD_NUM];	//出牌数据
	BYTE				m_byArHuaPai[PLAY_COUNT][HUA_CARD_NUM];
	bool				m_bTing[PLAY_COUNT];
	BYTE                m_byNowOutStation;
	BYTE                m_byNowThing;
	BYTE				m_byRemainTime;

	BYTE				lastOutStation;					//最近出牌玩家
	BYTE				lastOutCard;					//最近打出的牌值

	GameStationDataEx()
	{		
		Init();
	};
	void Init()
	{
		memset(this, 0, sizeof(GameStationDataEx));	
		memset(m_byArHandPai,255,sizeof(m_byArHandPai));
		memset(m_byArOutPai,255,sizeof(m_byArOutPai));
		memset(m_byArHuaPai,255,sizeof(m_byArHuaPai));
		memset(m_iArMenPai,255,sizeof(m_iArMenPai));
		memset(m_UserGCPData,255,sizeof(m_UserGCPData));
		m_byNowOutStation = 255;
		m_byNowThing = 255;
		lastOutCard = 255;
		lastOutStation = 255;
	}
};
///断线重连数据包
struct GangFenRecordEx
{
	int fen[5][PLAY_COUNT+1];
	int count;//数量
	GangFenRecordEx()
	{
		Init();
	};
	void Init()
	{
		memset(this,0,sizeof(GangFenRecordEx));
	}
};

struct  tagNoPeng
{
	BYTE bPai[4][2];
	tagNoPeng()
	{
		init();
	}
	void init()
	{
		memset(bPai,255,sizeof(bPai));
	}
	void add(BYTE Pai)
	{
		if (bHas(Pai))
		{
			return;
		}
		for (int i = 0;i < 4;i++)
		{
			if (bPai[i][0] == 255)
			{
				bPai[i][0] = Pai;
				bPai[i][1] = 0;
				break;
			}
		}
	}
	void set(BYTE Pai)
	{
		for (int i = 0;i < 4;i++)
		{
			if (Pai == bPai[i][0])
			{
				bPai[i][1] = 1;
				break;
			}
		}
	}

	void del(BYTE Pai)
	{
		for (int i = 0;i < 4;i++)
		{
			if (Pai == bPai[i][0])
			{
				bPai[i][0] = 255;
				bPai[i][1] = 255;
				break;
			}
		}
	}

	bool bCanPeng(BYTE Pai)
	{
		for (int i = 0;i < 4;i++)
		{
			if (Pai == bPai[i][0] && 0 == bPai[i][0])
			{
				return true;
			}
		}
		return false;
	}
 
	bool bHas(BYTE Pai)
	{
		for (int i = 0;i < 4;i++)
		{
			if (Pai == bPai[i][0])
			{
				return true;
			}
		}
		return false;
	}
	void clr()
	{
		init();
	}
};

struct  tagNoHu
{
	BYTE bPai[16][2];
	tagNoHu()
	{
		init();
	}
	void init()
	{
		memset(bPai,255,sizeof(bPai));
	}
	void add(BYTE Pai)
	{
		if (bHas(Pai))
		{
			return;
		}
		for (int i = 0;i < 16;i++)
		{
			if (bPai[i][0] == 255)
			{
				bPai[i][0] = Pai;
				bPai[i][1] = 0;
				break;
			}
		}
	}
	void set(BYTE Pai)
	{
		for (int i = 0;i < 16;i++)
		{
			if (Pai == bPai[i][0])
			{
				bPai[i][1] = 1;
				break;
			}
		}
	}

	void del(BYTE Pai)
	{
		for (int i = 0;i < 16;i++)
		{
			if (Pai == bPai[i][0])
			{
				bPai[i][0] = 255;
				bPai[i][1] = 255;
				break;
			}
		}
	}

	bool bCanHu(BYTE Pai)
	{
		for (int i = 0;i < 16;i++)
		{
			if (Pai == bPai[i][0] && 0 == bPai[i][0])
			{
				return true;
			}
		}
		return false;
	}
 
	bool bHas(BYTE Pai)
	{
		for (int i = 0;i < 16;i++)
		{
			if (Pai == bPai[i][0])
			{
				return true;
			}
		}
		return false;
	}
	void clr()
	{
		init();
	}
};

#pragma pack()
