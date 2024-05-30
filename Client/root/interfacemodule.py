#search:

	def MakeHyperlinkTooltip(self, hyperlink):
		
# search within def MakeHyperlinkTooltip(self, hyperlink):
		
	def MakeHyperlinkTooltip(self, hyperlink):
		tokens = hyperlink.split(":")
		if tokens and len(tokens):
			type = tokens[0]
			if "item" == type:
				self.hyperlinkItemTooltip.SetHyperlinkItem(tokens)

#add

			elif app.ENABLE_HYPERLINK_MSG and "msg" == type:
				self.OpenWhisperDialog(str(tokens[1]))

#example:

	def MakeHyperlinkTooltip(self, hyperlink):
		tokens = hyperlink.split(":")
		if tokens and len(tokens):
			type = tokens[0]
			if "item" == type:
				self.hyperlinkItemTooltip.SetHyperlinkItem(tokens)
			elif app.ENABLE_HYPERLINK_MSG and "msg" == type:
				self.OpenWhisperDialog(str(tokens[1]))
