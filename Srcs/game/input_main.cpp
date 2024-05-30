// Search:
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);

// change:

#ifdef ENABLE_HYPERLINK_MSG
	int len;
	if (pinfo->type == CHAT_TYPE_SHOUT) {
		len = snprintf(chatbuf, sizeof(chatbuf), "|Hmsg:%s|h%s|h|r : %s", ch->GetName(), ch->GetName(), buf);
	} else 
		len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);
#else
	int len = snprintf(chatbuf, sizeof(chatbuf), "%s : %s", ch->GetName(), buf);
#endif
