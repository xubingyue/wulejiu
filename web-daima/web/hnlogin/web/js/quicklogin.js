// JavaScript Document
var logincss='';
logincss += '<style type="text/css">';
logincss += '.gray{position:absolute; z-index:999; top: 0px; left: 0px; height:100%; width: 100%; opacity: 0.3;filter:alpha(opacity=30); background:#000;}';
logincss += '.s-login-wrap{ width:393px; overflow:hidden;  position:absolute; background:#ffffff; z-index:99999999; border-radius:2px 2px 2px 2px; font-size:14px; font-family:"Microsoft YaHei"; color:#525151; display:none;}';
logincss += '.s-login-header{ height:62px; background:url(http://hnlogin/web/images/login-k-bj.jpg) no-repeat; position:relative;}';
logincss += '.w-close-loginwrap a{ display:block; width:12px; height:14px; background:url(http://hnlogin/web/images/login-k-bj.jpg) -43px -101px no-repeat; position:absolute; right:5px; top:5px;}';
logincss += '.w-close-loginwrap a:hover{ background-position:-58px -101px;}';
logincss += '.s-login-header ul{ position:absolute; right:3px; bottom:-1px;}';
logincss += '.s-login-header ul li{ float:left; display:inline;}';
logincss += '.s-login-header ul li a{ display:block; width:80px; height:31px; line-height:31px; text-align:center; border:1px solid #cfcece; background:#eaeaea; color:#4a4a4a; margin-right:5px;}';
logincss += '.s-login-header ul li a.current{ background:#ffffff; color:#fb5f01; border-bottom:1px solid #ffffff;}';
logincss += '.w_keep_password{ display:inline-block; float:left; width:18px; height:17px; background:url(http://hnlogin/web/images/w_keep_pawbtn.jpg) no-repeat; cursor:pointer;}';
logincss += '.w_keep_pasw_check{ background-position:0 -18px; }';
logincss += '.s-login-content{ overflow:hidden; padding-bottom:20px; border:1px solid #cfcece;}';
logincss += '.w-pwd-wrap2{ margin:0 0 0 -14px;}';
logincss += '.s-login-content .w-login-error{ display:inline-block;  width:16px; height:20px; background:url(http://hnlogin/web/images/w-error.jpg) left center no-repeat; margin:0 0 0 10px;}';
logincss += '.s-login-content .w-login-success{ display:inline-block; width:16px; height:20px; background:url(http://hnlogin/web/images/hz_success.jpg) left center no-repeat; margin:0 0 0 10px;}';
logincss += '.s-login-content .w-auto-login .w-login-success{ margin:0;}';
logincss += '.s-login-content .w-auto-login .w-login-error{ margin:0;}';
logincss += '.s-login-content .w-login-code{ display:inline-block; width:90px; height:30px; margin-left:10px; border:1px solid #f3f3f3;}';
logincss += '.s-user-login{}';
logincss += '.s-user-login p.s-login-tip{ height:20px; line-height:25px;  color:#ff0000; text-align:center; margin-top:5px; padding:0 10px; overflow:hidden; font-size:12px;}';
logincss += '.s-user-login .w-star{ display:inline-block; height:28px; line-height:28px; margin-left:37px; _ margin-left:15px; margin-right:5px; padding-left:13px; text-align:right; background:url(http://hnlogin/web/images/must-enter.jpg) left center no-repeat;}';
logincss += '.s-user-login p{ margin-top:10px; overflow:hidden; clear:both;}';
logincss += '.s-user-login p input.s-login-input{ width:206px; height:28px; border:1px solid #cfcece;  padding: 0 5px;}';
logincss += '.s-user-login p input.s-login-code{ width:80px;}';
logincss += '.s-user-login p.w-pwd-wrap2 img{ cursor:pointer;}';
logincss += '.s-user-login p input:focus{border-color: #fcdcbc;border-radius: 2px;box-shadow: 0 0 6px #fcdcbc;}';
logincss += '.s-user-login p.w-auto-login{ padding-left:100px; height:25px; padding-top:5px; font-size:12px; }';
logincss += '.s-user-login p.w-auto-login label{ cursor:pointer; float:left; line-height:16px; margin-left:5px;}';
logincss += '.s-user-login p.w-auto-login a{ color:#525151; margin-left:65px; width:80px; height:20px; line-height:16px; float:left;}';
logincss += '.s-user-login p.w-auto-login a:hover{ text-decoration:underline;}';
logincss += '.s-user-login p.w-lj-login{ clear:both; margin-top:8px;}';
logincss += '.s-user-login p.w-lj-login a{ display:block; width:150px; height:36px;  background:url(http://hnlogin/web/images/login-k-bj.jpg) -1px -63px no-repeat; text-indent:-99999em; margin:0 auto;}';
logincss += '.s-user-login p.w-lj-login a:hover{ background-position:-1px -118px;}';
logincss += '.s-user-register p.s-login-tip{ height:20px; line-height:25px;  color:#ff0000; text-align:center; margin-top:5px; padding:0 10px; overflow:hidden; font-size:12px;}';
logincss += '.s-user-register p.reg_tip{ height:18px; line-height:15px; margin-top:0; color:#5e5e5e; padding-left:105px; overflow:hidden; font-size:12px;}';
logincss += '.s-user-register p.err_reg_tip{ color:#ff0000;}';
logincss += '.s-user-register .w-star{ display:inline-block; height:28px; line-height:28px; float:left;  margin-left:42px; margin-right:5px; padding-left:13px; background:url(http://hnlogin/web/images/must-enter.jpg) left center no-repeat;}';
logincss += '.s-user-register .w-star2{ display:block; height:28px; line-height:28px; float:left; margin-left:14px; _margin-left:7px; margin-right:5px; padding-left:13px; background:url(http://hnlogin/web/images/must-enter.jpg) left center no-repeat;}';
logincss += '.s-user-register p{ margin-top:3px; clear:both; overflow:hidden;}';
logincss += '.s-user-register p input.s-login-input{ width:206px; height:28px; border:1px solid #cfcece; float:left; padding: 0 5px;}';
logincss += '.s-user-register p input:focus{border-color: #fcdcbc;border-radius: 2px;box-shadow: 0 0 6px #fcdcbc;}';
logincss += '.s-user-register p.w-auto-login{ padding-left:100px; height:20px;  font-size:12px; }';
logincss += '.s-user-register p.w-auto-login label{ cursor:pointer; float:left; line-height:16px; margin-left:5px; width:210px;}';
logincss += '.s-user-register p.w-auto-login a{ color:#525151;  line-height:16px; }';
logincss += '.s-user-register p.w-auto-login a:hover{ text-decoration:underline;}';
logincss += '.s-user-register p.w-lj-register{ clear:both;}';
logincss += '.s-user-register p.w-lj-register input{ display:block; width:150px; height:36px;  background:url(http://hnlogin/web/images/login-k-bj.jpg) -152px -63px no-repeat; text-indent:-99999em; margin:0 auto; cursor:pointer;}';
logincss += '.s-user-register p.w-lj-register input:hover{ background-position:-152px -118px;}';
logincss += '.logo_65{width:267px; height:90px; display:block; text-indent:-9999px;}';
logincss += '</style>';


var loginhtml='';
loginhtml+='<input name="" type="text" id="game_server_id" val="" data-gid="" style="display:none;" >';
loginhtml+='<div id="s-login-wrap" class="s-login-wrap"><div class="s-login-header" id="s-login-header"><p class="w-close-loginwrap"><a href="javascript:;" title="关闭" id="close-ql"></a></p><ul><li><a href="javascript:;" class="current" id="s-user-login">用户登录</a></li><li><a class="" href="javascript:;" id="s-user-register">用户注册</a></li></ul></div>';
loginhtml+='<div class="s-login-content" id="s-login-content">';
loginhtml+='<div class="s-user-login" id="s-user-login2" style="display: block;"><p class="s-login-tip" id="show-login_msg"></p><p><label><span class="w-star">帐号：</span><input type="text" id="u_name" status="y" class="s-login-input" onkeypress="javascript:if(event.keyCode==13) show_login();"></label><span class=""></span></p><p class="w-pwd-wrap"><label><span class="w-star">密码：</span><input type="password" id="p_word" status="y" class="s-login-input" onkeypress="javascript:if(event.keyCode==13) show_login();"></label><span class=""></span></p><p class="w-pwd-wrap2" style="display:none;"><label><span class="w-star fl">验证码：</span><input type="text" id="u_code" class="fl s-login-input s-login-code" name="" onkeypress="javascript:if(event.keyCode==13) show_login();"></label><span class="fl w-login-code"><img width="90px" height="30px" onclick="getyzd(this);" alt="验证码" src="http://api.65.com/65user/code_gg.php" class="login-code-img" title="点击换一张"></span><span class=""></span></p><p class="w-auto-login"><span class="w_keep_password w_keep_pasw_check" id="q_rem"></span><label class="q_rem">记住用户名</label><a class="s-for-pwd" title="找回密码" target="_blank" href="http://my.65.com/forgetpwd/bind_Mobile.html">忘记密码？</a></p><p class="w-lj-login"><a href="javascript:" onclick="show_login();return false;" title="马上登录">马上登录</a></p></div>';  
loginhtml+='<div style="display:none;" id="s-user-register2" class="s-user-register"><p id="regist_msg" class="s-login-tip"></p><p><span class="w-star">帐号：</span><input class="s-login-input" name="uname" onblur="check_uname_show(this);" onkeypress="javascript:if(event.keyCode==13) checkFrom_show();"  id="zc_name"><span class="stg"></span></p><p class="reg_tip"></p>';

loginhtml+='<p class="w-pwd-wrap"><label><span class="w-star">密码：</span><input type="password" class="s-login-input" name="upwd" onblur="check_pwd_show(this);" onkeypress="javascript:if(event.keyCode==13) checkFrom_show();" id="upwd_show"></label><span class="stg"></span></p><p class="reg_tip"></p>';

loginhtml+='<p class="w-pwd-wrap"><label><span class="w-star2">确认密码：</span><input type="password" class="s-login-input" onblur="check_rpwd_show(this);" onkeypress="javascript:if(event.keyCode==13) checkFrom_show();" name="rpwd" id="upwd_show2"></label><span class="stg"></span></p><p class="reg_tip"></p>';

loginhtml+='<p class="w-auto-login"><span id="r_rem" class="w_keep_password w_keep_pasw_check"></span><label>我已阅读并同意《<a href="http://www.65.com/info/zjjh/agreement.html" target="_blank" class="">65游戏通行证协议</a>》</label><span class="stg"></span></p><p class="reg_tip"></p>';

loginhtml+='<p class="w-lj-register"><input type="submit" onclick="checkFrom_show();" title="完成注册"></p></div>';       
loginhtml+='</div></div>'; 

      
document.write(logincss);
document.write(loginhtml);
$(function(){
	$("#zc_name").focus(function(){
		  tips_show(0,'focus','长度6~22个字符,数字或字母组成');
		});
	$("#upwd_show").focus(function(){
		  tips_show(1,'focus','6~22个字符,只允许数字,字母,下划线');
		});
	$("#upwd_show2").focus(function(){
		  tips_show(2,'focus','6~22个字符,只允许数字,字母,下划线');
		});
})

function $popup(arg1, arg2) {
	var $arg1 = arg1;
	var $arg2 = arg2;
	var $pLeft = ($(window).width() - $($arg1).width()) / 2 + $(window).scrollLeft();
	var $pTop = ($(window).height() - $($arg1).height()) / 2 + $(window).scrollTop();
	$pTop = $pTop > 0 ? $pTop : 40;
	if($.browser.msie && parseInt($.browser.version) == 6) {
		$("html,body").css("overflow", "hidden");
	}
	var len=$('body').find('.gray').length;
	if (len<=0) {$("<div class='gray'></div>").appendTo($("body")).height($(document).height()).fadeTo("fast", 0.4);}
	
	$($arg1).css({
		display : 'block',
		position : 'absolute',
		left : $pLeft,
		top : $pTop,
		zIndex : 10000
	});

	$($arg2 + ',' + ".gray").click(function() {
		$($arg1).hide();
		$("#game_server_id").attr('data-gid','');
		if($.browser.msie && parseInt($.browser.version) == 6) {
			$("html,body").css("overflow", "")
		};
		$(".gray").fadeOut(500, cb);
		function cb() {
			$(this).remove();
		}

		return false;
	});
	$(window).bind('scroll resize', function(event) {
		var $pLeft = ($(window).width() - $($arg1).width()) / 2 + $(window).scrollLeft();
		var $pTop = ($(window).height() - $($arg1).height()) / 2 + $(window).scrollTop();
		$($arg1).animate({
			left : $pLeft,
			top : $pTop
		}, {
			duration : 500,
			queue : false
		})
	})
}
jQuery.fn.center = function center () {
	this.css("top", ( $(window).height() - this.height() ) / 2+$(window).scrollTop() + "px");
	this.css("left", ( $(window).width() - this.width() ) / 2+$(window).scrollLeft() + "px");
}
//login
function quicklogin(id){
	$("#show-login_msg,#regist_msg,.reg_tip").html('');
	$(".s-login-input").val('');
	var cookiename= $.cookie('user_login_text_cookie_32');
	$("#u_name").val(cookiename);	
	$("#s-login-content").find("span").removeClass("w-login-error");
	$("#s-login-content").find("span").removeClass("w-login-success");
    if(id==1){
		$(".w-pwd-wrap2").hide();
        $popup('#s-login-wrap', '#close-ql');
		$("#s-user-login").click();
    }else{
        $popup('#s-login-wrap', '#close-ql');
		$("#s-user-register").click();
    }
}

function getyzd(obj){
	$(obj).attr('src','http://api.65.com/65user/code_gg.php?rand='+Math.random());	
}

$('.w_keep_password').click(function(){
if($(this).hasClass('w_keep_pasw_check')){
	$(this).removeClass('w_keep_pasw_check');
	}
else{
	$(this).addClass('w_keep_pasw_check');
	}
 })
 
$('#s-user-login').click(function(){
	 $(this).addClass('current').parent().siblings().find('a').removeClass('current');				
	 $("#s-login-content").find("#s-user-register2").hide();
	 $("#s-login-content").find("#s-user-login2").fadeIn(300);
	 $("#s-login-wrap").center(); 
	 });
$('#s-user-register').click(function(){
	 $(this).addClass('current').parent().siblings().find('a').removeClass('current');				
	 $("#s-login-content").find("#s-user-login2").hide();
	 $("#s-login-content").find("#s-user-register2").fadeIn(300);
	 $("#s-login-wrap").center();
	 });
	
function show_login(){
	check_name('#u_name','用户名或密码错误',2);
	check_pwd('#p_word','用户名或密码错误',2);

	var uflg = $('#u_name').attr('status');
	var pflg = $('#p_word').attr('status');
	if(uflg!=''&&pflg!=''){
		var uname = $('#u_name').val();
		var upwd  = $('#p_word').val();
		var ucode  = $('#u_code').val();
		$("#show-login_msg").html("正在登录中...");
		$.getJSON('http://api.65.com/65user/ajax_login.php?callback=?',{u:uname,p:encryptedString(key,upwd),code:ucode},function(data){
			if(data.loginnum>=5){
					if($(".w-pwd-wrap2").is(":visible")){
						$('#show-login_msg').html(data.msg).fadeIn();
						}
					else{
						$('#show-login_msg').html("请输入验证码！");
						$('.w-pwd-wrap2').show();
						$("#u_code").val('').focus();
					    return false;
						}
					}	
			if(data.res==1){
				 $('body').append('<div style="display:none;">'+data.synlogin+'</div>');
				 if($(".w_keep_pasw_check").length > 0) $.cookie('user_login_text_cookie_32',uname,{expires:7,path:'/',domain: '65.com',secure: false,raw:false});
				 var gsid=$("#game_server_id").attr('data-gid');
				 if(gsid!=''){
					entergame(gsid); 
				  }
				 else{
					 $("#close-ql").click();
					head.init.log_status(true);  
				 }
				 
				 
				 
				}
			else{
				$('#show-login_msg').html(data.msg).fadeIn();
				}
		});
	}else{
		return false;
	}
}
function check_name(obj,msg,status){
	if(status==2){
		$(obj).parent().next('span').eq(0).removeClass();
	}
	if($.trim($(obj).val())==''||$(obj).val().length<4||$(obj).val().length>22){
		$(obj).attr('status','');
		$(obj).parent().next('span').eq(0).removeClass();
		$(obj).parent().next('span').eq(0).addClass('w-login-error');
		$('#show-login_msg').html(msg).fadeIn();
		
	}else{
		$(obj).attr('status','y');
	}
}
function check_pwd(obj,msg,status){
	if(status==2){
		$(obj).parent().next('span').eq(0).removeClass();
	}
	if($.trim($(obj).val())==''){
		$(obj).attr('status','');
		$(obj).parent().next('span').eq(0).removeClass();
		$(obj).parent().next('span').eq(0).addClass('w-login-error');
		$('#show-login_msg').html(msg).fadeIn();
			
	}else{
		$(obj).attr('status','y');
	}
}



//register
var uname_flg_ = false;
var upwd_flg_  = false;
var rpwd_flg_  = false;
var rname_flg_ = false;
var agree_flg_ = false;
var icard_flg_ = false;
var vcode_flg_ = false;

function check_uname_show(e){
    var uname = $(e).val();
    if(/^[0-9a-zA-Z_]+$/.test(uname)||uname==''){
        if(uname.length<6 ||uname.length>22){
            tips_show(0,'error','长度6~22个字符,数字或字母组成');
            uname_flg_ = false;
            return false;
        }else{
			tips_show(0,'load','');
			$.getJSON('http://api.65.com/65reg/check_info.php?callback=?',{action:'check_uname',u:uname},function(data){
				if(data.code=='1'){
					tips_show(0,'right','');
					uname_flg_ = true;
				}else{
					tips_show(0,'error',data.msg);
					uname_flg_ = false;
					return false;
				}
			});
		}
       
    }else{
        tips_show(0,'error','输入账号格式不正确');
        uname_flg_ = false;
        return false;
    }
}

function check_pwd_show(e){
    var upwd = $(e).val();

	if(/^[0-9a-zA-Z_]+$/.test(upwd)||upwd==''){
		if(upwd.length<6 ||upwd.length>22){
			tips_show(1,'error','6~22个字符,只允许数字,字母,下划线');
			upwd_flg_ = false;
			return false;
		}else{
			tips_show(1,'right','');
			upwd_flg_ = true;
		}
	}else{
		tips_show(1,'error','输入密码格式不正确');
		upwd_flg_ = false;
		return false;
	}
	
}
function check_rpwd_show(e){
    var upwd = $('#upwd_show').val();
    var rpwd = $(e).val();

	if(/^[0-9a-zA-Z_]+$/.test(rpwd)){
		if(upwd!=rpwd){
			tips_show(2,'error','两次密码输入不一致');
			rpwd_flg_ = false;
			return false;
		}else{
			tips_show(2,'right','');
			rpwd_flg_ = true;
		}
	}else{
		tips_show(2,'error','6~22个字符,只允许数字,字母,下划线');
		rpwd_flg_ = false;
		return false;
	}
	
}
function check_agrre_show(e){
    if($(e).hasClass("w_keep_pasw_check")){
		  tips_show(3,'right','');
		  agree_flg_ = true;  
		}
	else{
		tips_show(3,'error','请阅读用户协议并勾选同意');
		agree_flg_ = false; 
		return false;
		}	
	
}



function tips_show(index,type,msg){
	switch(type){
		case 'error':
			$('.stg:eq('+index+')').removeClass('w-login-success');
			$('.stg:eq('+index+')').addClass('w-login-error');
			$('.reg_tip:eq('+index+')').addClass('err_reg_tip').html(msg);
		break;
		case 'right':
			$('.stg:eq('+index+')').removeClass('w-login-error');
			$('.stg:eq('+index+')').addClass('w-login-success');
			$('.reg_tip:eq('+index+')').removeClass('err_reg_tip').html(msg);
		break;
		case 'load':
			$('.stg:eq('+index+')').removeClass('w-login-success');
			$('.stg:eq('+index+')').removeClass('w-login-error');
			$('.reg_tip:eq('+index+')').html(msg);
		break;
	    case 'focus':
			$('.stg:eq('+index+')').removeClass('w-login-success');
			$('.stg:eq('+index+')').removeClass('w-login-error');
			$('.reg_tip:eq('+index+')').removeClass('err_reg_tip').html(msg);
		break;
		
		
	}
}


//活动上一个页面媒体地址
var geturl = function(url) {
	var host = "null";
	if (typeof url == "undefined"
			|| null == url)
		url = window.location.href;
	var regex = /.*\:\/\/([^\/|:]*).*/;
	var match = url.match(regex);
	if (typeof match != "undefined"
			&& null != match) {
		host = match[1];
	}
	if (typeof host != "undefined"
			&& null != host) {
		var strAry = host.split(".");
		if (strAry.length > 1) {
			host = strAry[strAry.length - 2] + "." + strAry[strAry.length - 1];
		}
	}
	return host;
}

if(document.referrer!='' && geturl(document.referrer)!='65.com'){
	    $.cookie('user_res_media_from',document.referrer,{path:'/',domain:'cyhj.65.com',secure: false,raw:false});	
}



function checkFrom_show(){
	
	check_uname_show("#zc_name");
	check_pwd_show("#upwd_show");
	check_rpwd_show("#upwd_show2");
	check_agrre_show("#r_rem");
	if(uname_flg_&&upwd_flg_&&rpwd_flg_&&agree_flg_){
		$("#regist_msg").html("正在注册中...");
		var _uname=$("#zc_name").val();
		var _upwd=$("#upwd_show").val();
		var _rpwd=$("#upwd_show2").val();
        var _referer=($.cookie("user_res_media_from")!=null)? $.cookie('user_res_media_from'):'';
		$.ajax({
				type:"GET",
				url:"http://api.65.com/65reg/register.php?callback=?",
				dataType:"json",
				data :{action:'reg_asy',gid:gid,user_name:_uname,password:_upwd,re_pass:_rpwd,is_media:1,url_from:_referer},
				success: function(data){
					if(data.code=='1'){
						$('body').append('<div style="display:none;">'+data.synlogin+'</div>');
					    var gsid=$("#game_server_id").attr('data-gid');
						 if(gsid!=''){
							entergame(gsid); 
						  }
						 else{
							 $("#close-ql").click();
							head.init.log_status(true);  
						}
                        
					}
					else{
						$("#regist_msg").html(res.msg);
						}
				}

		});	
	}else{
		return false;
	}
}



