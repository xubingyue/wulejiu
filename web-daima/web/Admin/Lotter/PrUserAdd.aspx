﻿<%@ Page Language="C#" AutoEventWireup="true" CodeBehind="PrUserAdd.aspx.cs" Inherits="Admin_Lotter_PrUserAdd" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" >
<head runat="server">
    <title></title>
      <script type="text/javascript" src="/Public/Js/Global.js"></script>
	<script type="text/javascript" src="/Public/Js/jquery.js"></script>
	<link href="../css/inc_style.css" rel="stylesheet" type="text/css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
     <table width="100%" border="1" align="center" cellpadding="3" cellspacing="0" bordercolor="#A4B6D7" bgcolor="F2F8FF" class="admin_table2">
		<tr>
			<td class="title_03">
				<strong>设置某个玩家下次抽中奖品</strong> 
			</td>
		</tr>
	</table>
	<table width="100%" border="0" cellspacing="0" cellpadding="0">
		<tr>
			<td height="5">
			</td>
		</tr>
	</table>
	<table width="100%" border="1" align="center" cellpadding="3" cellspacing="0" bordercolor="A4B6D7" bgcolor="F2F8FF" class="admin_table">
		
		<tr>
			<td align="right">
				玩家ID：&nbsp;&nbsp;</td>
				<td align="left">
				<asp:TextBox ID="txtUserID" MaxLength="19" CssClass="put" runat="server"></asp:TextBox>
	  
					 
				</td>
		</tr> 
		<tr>
			<td align="right">奖品：&nbsp;&nbsp;</td>
			<td align="left">
	 <asp:DropDownList ID="ddlAward" runat="server"></asp:DropDownList>
					 
			</td>
		</tr>

		<tr>
			<td align="center" colspan="2">
				<asp:Button ID="Button1" runat="server" Text=" 添 加 " OnClick="Edit" class="put" />
			</td>
		</tr>
	</table>
    </div>
    </form>
</body>
</html>
