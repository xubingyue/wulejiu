﻿<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="Leaderboard.aspx.cs" Inherits="Bzw.Web.Leaderboard" %>

<%@ Register Src="Public/NewMenu.ascx" TagName="NewMenu" TagPrefix="uc1" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<title>
    <%=ConfigurationManager.AppSettings["sitename"].ToString()%>网络游戏世界___最专业的棋牌游戏平台
</title>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<meta http-equiv="X-UA-Compatible" content="IE=EmulateIE7" />
<meta name="Description" content="<%=ConfigurationManager.AppSettings["sitename"].ToString()%>游戏平台是中国最专业的网络棋牌游戏中心之一，是<%=ConfigurationManager.AppSettings["sitename"].ToString()%>网络旗下最主要的棋牌游戏平台，拥有各类棋牌游戏累计达100多种，包括人们熟知的斗地主、升级、麻将、围棋、四国军棋等。" />
<meta name="Keywords" content="棋牌游戏,<%=ConfigurationManager.AppSettings["sitename"].ToString()%>游戏,<%=ConfigurationManager.AppSettings["sitename"].ToString()%>,棋牌,双扣,麻将,斗地主,牛牛,三扣一,连连看,四国军旗,象棋,棋牌比赛,休闲游戏,小游戏" />
<link href="../../../hn_css/css/www/hn_pub_15.css" rel="stylesheet" type="text/css" />
<link href="../../../hn_css/css/www/hn_prize_20150504.css" rel="stylesheet"
    type="text/css" />
<link href="/css/reset.css" rel="stylesheet" type="text/css" />
<link href="/css/base.css" rel="stylesheet" type="text/css" />
<style type="text/css">
    html
    {
        overflow-x: hidden;
        overflow-y: auto;
    }
    .plus
    {
        margin-left: 220px;
        margin-top: -140px;
        width: 415px;
        _margin-left: 110px;
        _margin-top: -215px;
    }
    .plus a
    {
        display: inline-block;
        text-align: center;
        width: 95px;
        color: #0073cc;
        font-size: 11px;
        -webkit-text-size-adjust: none;
    }
    .plus a:hover
    {
        color: #000000;
    }
</style>
<body>
    <div id="min_max_width">
        <uc1:NewMenu ID="NewMenu2" runat="server" />
        <div class="min_max_adap">
            <form id="form1" runat="server">
            <div class="wrap">
                <div class="totalContent">
                    <div class="totalHd png" style="background-image: none; background-color: #bedff6;
                        overflow: hidden; height: 62px;">
                        <i class="ico_67 i1 newsNotice png"></i>
                        <div id='noticetime' class="time">
                            <span></span>
                        </div>
                        <div class="text" style="">
                            <a href="/Leaderboard.aspx" style="color: #fff;">在线时长排行 </a>&nbsp;| &nbsp; <a href="/MatchListTop.aspx">
                                淘汰赛排行</a> &nbsp;| &nbsp; <a href="/RankGameTimeTop.aspx">游戏时间排行 </a>
                        </div>
                    </div>
                    <div class="totalBd">
                        <table border="0" cellpadding="0" cellspacing="0" class="tableList">
                            <thead>
                                <tr>
                                    <th width="30%">
                                        排名
                                    </th>
                                    <th width="40%">
                                        昵称
                                    </th>
                                    <th width="40%">
                                        总时长
                                    </th>
                                </tr>
                            </thead>
                            <asp:Repeater ID="rpList" runat="server">
                                <ItemTemplate>
                                    <tr>
                                        <td>
                                            <%# Container.ItemIndex + 1 %>
                                        </td>
                                        <td>
                                            <%#Eval("NickName") %>
                                        </td>
                                        <td>
                                            <%#member.ConverTimeToDHMS(Eval("OnLineTimeCount").ToString())%>
                                        </td>
                                    </tr>
                                </ItemTemplate>
                            </asp:Repeater>
                        </table>
                    </div>
                </div>
            </div>
            <div class="mask" style="display: none;" id="mask">
            </div>
            <script src="/js/jquery-1.7.2.min.js" type="text/javascript"></script>
            <script src="/js/scroll.js" type="text/javascript"></script>
            <!--[if IE 6]>
    <script src="/js/DD_belatedPNG.js"></script>
    <script>
        fixPng();
        function fixPng()
        {
            DD_belatedPNG.fix('.png');
	        $(function(){
		        $('a.for56ie6 img,a.for68ie6 img,a.for32ie6 img').each(function(){
			        var $i = $('<i>');
			        $(this).replaceWith($i);
			        $i.attr('style', 'cursor:pointer;filter:progid:DXImageTransform.Microsoft.AlphaImageLoader(sizingMethod="scale",src="'+ $(this).attr('src') +'");background-image:none;');
		        });
	        });
        }
    </script>
    <![endif]-->
            </form>
        </div>
    </div>
</body>
</html>