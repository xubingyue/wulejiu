
var weixinCss='';weixinCss+='<style type="text/css">';weixinCss+='#wx_fix{ position:fixed;right:0;bottom:0; width:185px; height:364px;z-index:9999;_position:absolute;_bottom:auto;_top:expression(eval(document.documentElement.scrollTop+document.documentElement.clientHeight-this.offsetHeight-(parseInt(this.currentStyle.marginTop,10)||0)-(parseInt(this.currentStyle.marginBottom,10)||0)-10));}';weixinCss+='.wx_fla{ background:url(http://hnlogin/www/images/bg.gif) repeat; position:absolute; left:0; top:0; width:185px; height:364px;  z-index:2;}';weixinCss+='#wx_fix object{ position:absolute; left:0; top:0;  z-index:1;}';weixinCss+='#wx_menu{ position:fixed;right:-186px;bottom:40px;z-index:9999;_position:absolute;_bottom:auto;_top:expression(eval(document.documentElement.scrollTop+document.documentElement.clientHeight-this.offsetHeight-(parseInt(this.currentStyle.marginTop,10)||0)-(parseInt(this.currentStyle.marginBottom,10)||0)-10));}';weixinCss+='.wx_menu{ background:url(http://hnlogin/www/images/weixin65/weixin2.png) center top no-repeat; width:185px; height:364px;}';weixinCss+='.colsewx_menu{ position:absolute; top:51px; right:10px; width:21px; height:21px;  background:url(http://hnlogin/www/images/weixin65/wx_close.png) -3px -2px no-repeat;}';weixinCss+='.colsewx_menu:hover{ background-position:-3px -32px;}';weixinCss+='.w_gotop{ position:absolute; bottom:15px; right:3px; width:53px; height:23px; background:url(http://hnlogin/www/images/weixin65/wx_close.png) -47px 0 no-repeat;}';weixinCss+='.w_gotop:hover{background-position:-47px -29px;}';weixinCss+='.wx_menu ul{ position:absolute; top:233px; left:57px;}';weixinCss+='.wx_menu ul li a{ display:block; height:25px; width:90px; line-height:25px; color:#fff; font-weight:bold; background:url(http://hnlogin/www/images/weixin65/wx_menu.png) no-repeat; text-indent:-99999em;}';weixinCss+='.wx_menu ul li a.wx_yxlb{background-position:0 0;}';weixinCss+='.wx_menu ul li a.wx_yxlb:hover{background-position:-94px 0;}';weixinCss+='.wx_menu ul li a.wx_zxhd{background-position:0 -26px;}';weixinCss+='.wx_menu ul li a.wx_zxhd:hover{background-position:-94px -26px;}';weixinCss+='.wx_menu ul li a.wx_zxzx{background-position:0 -52px;}';weixinCss+='.wx_menu ul li a.wx_zxzx:hover{background-position:-94px -52px;}';weixinCss+='</style>';var weixinHtml='<div id="wx_menu" class="wx_menu ie6"><a class="colsewx_menu" href="javascript:" onClick="showwx();"></a><ul><li><a class="wx_yxlb" href="http://weixin.65.com/" target="_blank">游戏礼包</a></li><li><a class="wx_zxhd" href="http://huodong.65.com/" target="_blank">最新活动</a></li><li><a class="wx_zxzx" href="http://news.65.com/" target="_blank">最新资讯</a></li></ul><a class="w_gotop" href="javascript:" onClick="gotop();"></a></div>';var weixinHtml2='<div id="wx_fix"><a class="wx_fla" href="javascript:"></a><object classid="clsid:D27CDB6E-AE6D-11cf-96B8-444553540000" codebase="http://download.macromedia.com/pub/shockwave/cabs/flash/swflash.cab#version=9,0,28,0" width="185" height="364"><param name="movie" value="http://hnlogin/www/images/weixin65/fix2.swf"><param name="quality" value="high"><embed src="http://hnlogin/www/images/weixin65/fix2.swf" wmode="transparent" quality="high" pluginspage="http://www.adobe.com/shockwave/download/download.cgi?P1_Prod_Version=ShockwaveFlash" type="application/x-shockwave-flash" width="185" height="364"><param name="wmode" value="transparent"></object></div>';document.write(weixinCss);document.write(weixinHtml2);$(function(){$(".wx_fla").live('click',function(){renwu();})})
function gotop(){$("body,html").animate({scrollTop:0},300);};function renwu(){$("#wx_fix").remove();$("body").append(weixinHtml);$("#wx_menu").animate({right:0},450);};function showwx(){$("#wx_menu").animate({right:'-186px'},450,function(){$("#wx_menu").remove();$("body").append(weixinHtml2);});};