package com.ashera.snackbar;

import com.ashera.widget.WidgetFactory;

public class SnackbarPlugin  {
    public static void initPlugin() {
    	//start - widgets
        WidgetFactory.register(new com.ashera.snackbar.SnackbarImpl());
        WidgetFactory.register(new com.ashera.snackbar.SnackbarContentLayoutImpl());
        WidgetFactory.register(new com.ashera.snackbar.SnackbarLayoutImpl());
        //end - widgets
    }
}
