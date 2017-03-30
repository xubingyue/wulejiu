﻿<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="FlashList.aspx.cs" Inherits="Bzw.Admin2.Admin.FlashAd.FlashList" %>


<%@ Register Assembly="Pager" Namespace="Wuqi.Webdiyer" TagPrefix="webdiyer" %>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
<head id="Head1" runat="server">
    <title>无标题页</title>
    <link href="../css/inc_style.css" rel="stylesheet" type="text/css" />
    <style type="text/css">
<!--
body {

	margin-top: 0px;
}
        .style1
        {
            height: 24px;
        }
-->
</style>
</head>
<body>
    <form id="form1" runat="server">
        <table width="100%" border="1" align="center" cellpadding="3" cellspacing="0" bordercolor="A4B6D7"
            bgcolor="F2F8FF" class="admin_table">
            <tr>
                <td class="title_03" colspan="11">
                    <strong>首页轮换图片管理</strong>
                    
                    
                    </td>
            </tr>


              <tr>
                <td class="title_03" colspan="11">
            轮换图片位置：    <asp:DropDownList runat="server" ID="dr_type" 
                        AutoPostBack="true" onselectedindexchanged="dr_type_SelectedIndexChanged">
                  <asp:ListItem Text="头部" Value="1">头部</asp:ListItem>
                   <asp:ListItem Text="左边" Value="2">左边</asp:ListItem>
                    <asp:ListItem Text="中间" Value="3">中间</asp:ListItem>
                     <asp:ListItem Text="右边" Value="4">右边</asp:ListItem>
                  </asp:DropDownList>

                  <a href="FlashAdMana.aspx">添加</a>
                    </td>
            </tr>



            <tr>
                <td>
                    序号序号</td>
                <td>
                   位置</td>
                <td>
                    标题</td>
                 <td>图片地址</td>
           <td>链接地址</td>
                <td>
                    操作</td>
            </tr>
            <asp:Repeater ID="GameTypesList" runat="server">
                <ItemTemplate>
                    <tr>
                        <td>
                           <%# Container.ItemIndex + 1%>
                        </td>
                        <td>
                           
                           <%# MyType(Eval("TypeID"))%>
                            </td>
                        <td>
                            <%# Eval("TitleName") %>
                          </td>
                            <td> 
                            
                             <%# Eval("PicUrl")%>
                            </td>
                       <td> 
                          <a target="_blank" href='<%# Eval("LinkPic")%>'><%# Eval("LinkPic")%></a>  
 
                            </td>

                        <td>
                            <a href='FlashAdMana.aspx?type=edit&id=<%# Eval("ID") %>'>修改</a>&nbsp;&nbsp; <a href='FlashAdMana.aspx?type=del&id=<%# Eval("ID") %>' onclick="return confirm('确定删除？');">
                                删除</a></td>
                    </tr>
                </ItemTemplate>
            </asp:Repeater>
        </table>
        <table width="100%" border="0" cellspacing="0" cellpadding="0">
            <tr>
                <td height="5">
                </td>
            </tr>
        </table>
        <table width="100%" border="1" align="center" cellpadding="3" cellspacing="0" bordercolor="A4B6D7"
            bgcolor="F2F8FF" class="admin_table">
            <tr>
                <td align="left">
                    <div id="page_link" class="page_link">
						<webdiyer:AspNetPager PageSize="20" ID="anpPageIndex" runat="server" AlwaysShow="True" CustomInfoHTML="第%CurrentPageIndex%页，共%PageCount%页；每页%PageSize%条，共%RecordCount%条" FirstPageText="首页" LastPageText="尾页" NextPageText="下一页" PrevPageText="上一页" ShowCustomInfoSection="Left" ShowPageIndexBox="Always" SubmitButtonText="Go" TextAfterPageIndexBox="页" TextBeforePageIndexBox="转到" UrlPaging="True">
						</webdiyer:AspNetPager>
					</div>
                </td>
            </tr>
        </table>
    </form>
</body>
</html>
