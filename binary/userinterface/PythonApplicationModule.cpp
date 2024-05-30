// 1) Search: search at the end 

}

// 2) before its end make a new line and paste:

#ifdef ENABLE_HYPERLINK_MSG
	PyModule_AddIntConstant(poModule, "ENABLE_HYPERLINK_MSG", true);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_HYPERLINK_MSG", false);
#endif


// Example:

#ifdef ENABLE_HYPERLINK_MSG
	PyModule_AddIntConstant(poModule, "ENABLE_HYPERLINK_MSG", true);
#else
	PyModule_AddIntConstant(poModule, "ENABLE_HYPERLINK_MSG", false);
#endif

}