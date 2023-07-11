package com.ashera.snackbar;

import com.ashera.widget.WidgetFactory;

public class SnackbarPlugin  {
    public static void initPlugin() {
    	//start - widgets
        WidgetFactory.register(new com.ashera.snackbar.SnackbarImpl());
        //end - widgets
    }
}
