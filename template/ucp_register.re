<!-- INCLUDE overall_header.html -->

<script type="text/javascript">
// <![CDATA[
	/**
	* Change language
	*/
	function change_language(lang_iso)
	{
		document.forms['register'].change_lang.value = lang_iso;
		document.forms['register'].submit.click();
	}

// ]]>
</script>

<form method="post" action="{S_UCP_ACTION}" id="register">

<div class="panel">
	<div class="inner"><span class="corners-top"><span></span></span>

	<h2>{SITENAME} - {L_REGISTRATION}</h2>

	<fieldset class="fields2">
	<!-- IF ERROR --><dl><dd class="error">{ERROR}</dd></dl><!-- ENDIF -->
	<!-- IF L_REG_COND -->
		<dl><dd><strong>{L_REG_COND}</strong></dd></dl>
	<!-- ENDIF -->
	<!-- IF .profile_fields -->
		<dl><dd><strong>{L_ITEMS_REQUIRED}</strong></dd></dl>
	<!-- ENDIF -->

	<dl>
		<dt><label for="username">{L_USERNAME}:</label><br /><span>{L_USERNAME_EXPLAIN}</span></dt>
		<dd><input type="text" tabindex="1" name="username" id="username" size="25" value="{USERNAME}" class="inputbox autowidth" title="{L_USERNAME}" /></dd>
	</dl>
	<dl>
		<dt><label for="email">{L_EMAIL_ADDRESS}:</label></dt>
		<dd><input type="text" tabindex="2" name="email" id="email" size="25" maxlength="100" value="{EMAIL}" class="inputbox autowidth" title="{L_EMAIL_ADDRESS}" /></dd>
	</dl>
	<dl>
		<dt><label for="email_confirm">{L_CONFIRM_EMAIL}:</label></dt>
		<dd><input type="text" tabindex="3" name="email_confirm" id="email_confirm" size="25" maxlength="100" value="{EMAIL_CONFIRM}" class="inputbox autowidth" title="{L_CONFIRM_EMAIL}" /></dd>
	</dl>
	<dl>
		<dt><label for="new_password">{L_PASSWORD}:</label><br /><span>{L_PASSWORD_EXPLAIN}</span></dt>
		<dd><input type="password" tabindex="4" name="new_password" id="new_password" size="25" value="{PASSWORD}" class="inputbox autowidth" title="{L_NEW_PASSWORD}" /></dd>
	</dl>
	<dl>
		<dt><label for="password_confirm">{L_CONFIRM_PASSWORD}:</label></dt>
		<dd><input type="password" tabindex="5" name="password_confirm" id="password_confirm" size="25" value="{PASSWORD_CONFIRM}" class="inputbox autowidth" title="{L_CONFIRM_PASSWORD}" /></dd>
	</dl>

	<hr />

	<dl>
		<dt><label for="lang">{L_LANGUAGE}:</label></dt>
		<dd><select name="lang" id="lang" onchange="change_language(this.value); return false;" title="{L_LANGUAGE}">{S_LANG_OPTIONS}</select></dd>
	</dl>
	<dl>
		<dt><label for="tz">{L_TIMEZONE}:</label></dt>
		<dd><select name="tz" id="tz" class="autowidth">{S_TZ_OPTIONS}</select></dd>
	</dl>

	<!-- BEGIN profile_fields -->
		<dl>
			<dt><label<!-- IF profile_fields.FIELD_ID --> for="{profile_fields.FIELD_ID}"<!-- ENDIF -->>{profile_fields.LANG_NAME}:<!-- IF profile_fields.S_REQUIRED --> *<!-- ENDIF --></label>
			<!-- IF profile_fields.LANG_EXPLAIN --><br /><span>{profile_fields.LANG_EXPLAIN}</span><!-- ENDIF -->
			<!-- IF profile_fields.ERROR --><br /><span class="error">{profile_fields.ERROR}</span><!-- ENDIF --></dt>
			<dd>{profile_fields.FIELD}</dd>
		</dl>
	<!-- END profile_fields -->
	</fieldset>

<!-- IF S_CONFIRM_CODE -->
	<span class="corners-bottom"><span></span></span></div>
</div>

<div class="panel">
	<div class="inner"><span class="corners-top"><span></span></span>

	<h3>{L_CONFIRMATION}</h3>
	<p>{L_CONFIRM_EXPLAIN}</p>

	<fieldset class="fields2">
	<dl>
		<dt><label for="confirm_code">{L_CONFIRM_CODE}:</label></dt>
		<dd>{CONFIRM_IMG}</dd>
		<!--Commented for recaptcha
		<dd><input type="text" name="confirm_code" id="confirm_code" size="8" maxlength="8" class="inputbox narrow" title="{L_CONFIRM_CODE}" /></dd>
		<dd>{L_CONFIRM_CODE_EXPLAIN}</dd>
		-->
	</dl>
	</fieldset>
<!-- ENDIF -->

<!-- IF S_COPPA -->
	<span class="corners-bottom"><span></span></span></div>
</div>

<div class="panel">
	<div class="inner"><span class="corners-top"><span></span></span>

	<h4>{L_COPPA_COMPLIANCE}</h4>

	<p>{L_COPPA_EXPLAIN}</p>
<!-- ENDIF -->

	<span class="corners-bottom"><span></span></span></div>
</div>

<div class="panel">
	<div class="inner"><span class="corners-top"><span></span></span>

	<fieldset class="submit-buttons">
		{S_HIDDEN_FIELDS}
		<input type="reset" value="{L_RESET}" name="reset" class="button2" />&nbsp;
		<input type="submit" name="submit" id ="submit" value="{L_SUBMIT}" class="button1" />
		{S_FORM_TOKEN}
	</fieldset>

	<span class="corners-bottom"><span></span></span></div>
</div>
</form>

<!-- INCLUDE overall_footer.html -->
