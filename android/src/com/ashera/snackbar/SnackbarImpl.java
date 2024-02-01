package com.ashera.snackbar;


//start - imports
import java.util.*;

import android.content.*;
import android.graphics.*;
import android.os.Build;
import android.view.*;

import com.ashera.core.IFragment;
import com.ashera.converter.*;
import android.annotation.SuppressLint;

import com.ashera.widget.bus.*;
import com.ashera.widget.*;


import static com.ashera.widget.IWidget.*;
//end - imports
import com.ashera.layout.ViewImpl;
@SuppressLint("NewApi")
public class SnackbarImpl extends BaseWidget {
	//start - body
	private View viewStub;
	public final static String LOCAL_NAME = "com.ashera.snackbar.Snackbar"; 
	public final static String GROUP_NAME = "com.ashera.snackbar.Snackbar";
	
		@SuppressLint("NewApi")
		final static class BackgroundTintMode  extends AbstractStringToEnumConverter{
		private Map<String, Object> mapping = new HashMap<>();
				{
		if (Build.VERSION.SDK_INT >= 11) {
				mapping.put("add", android.graphics.PorterDuff.Mode.ADD);
		}
		
				mapping.put("multiply", android.graphics.PorterDuff.Mode.MULTIPLY);
		
		
				mapping.put("screen", android.graphics.PorterDuff.Mode.SCREEN);
		
		
				mapping.put("src_atop", android.graphics.PorterDuff.Mode.SRC_ATOP);
		
		
				mapping.put("src_in", android.graphics.PorterDuff.Mode.SRC_IN);
		
		
				mapping.put("src_over", android.graphics.PorterDuff.Mode.SRC_OVER);
		
				}
		@Override
		public Map<String, Object> getMapping() {
				return mapping;
				}

		@Override
		public Object getDefault() {
				return null;
				}
				}
	
	@Override
	public void loadAttributes(String attributeName) {

		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("duration").withType("int"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("text").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("show").withType("boolean"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("actionText").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onClick").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("actionTextColor").withType("colorstate"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("maxInlineActionWidth").withType("dimension"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("textColor").withType("colorstate"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("background").withType("colorstate"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("backgroundTint").withType("colorstate"));
		ConverterFactory.register("com.ashera.snackbar.Snackbar.backgroundTintMode", new BackgroundTintMode());
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("backgroundTintMode").withType("com.ashera.snackbar.Snackbar.backgroundTintMode"));

	}
	
	public SnackbarImpl() {
		super(LOCAL_NAME, LOCAL_NAME);
	}	

	@Override
	public IWidget newInstance() {
		return new SnackbarImpl();
	}
	
	@SuppressLint("NewApi")
	@Override
	public void create(IFragment fragment, Map<String, Object> params) {
		super.create(fragment, params);
		
        viewStub = new ViewStub((Context) fragment.getRootActivity());
		nativeCreate(fragment, params);	
	}
	

    

	@Override
	@SuppressLint("NewApi")
	public void setAttribute(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {		
		Object nativeWidget = asNativeWidget();

		switch (key.getAttributeName()) {
			case "duration": {
				


		setDuration(objValue);



			}
			break;
			case "text": {
				


		setText(objValue);



			}
			break;
			case "show": {
				


		show(objValue);



			}
			break;
			case "actionText": {
				


		setActionText(objValue);



			}
			break;
			case "onClick": {
				


		 setOnClick(objValue);



			}
			break;
			case "actionTextColor": {
				


		setActionTextColor(objValue);



			}
			break;
			case "maxInlineActionWidth": {
				


		setMaxInlineActionWidth(objValue);



			}
			break;
			case "textColor": {
				


		setTextColor(objValue);



			}
			break;
			case "background": {
				


		setTextColor(objValue);



			}
			break;
			case "backgroundTint": {
				


		setBackgroundTint(objValue);



			}
			break;
			case "backgroundTintMode": {
				


		setBackgroundTintMode(objValue);



			}
			break;
		default:
			break;
		}
	}
	@Override
	public Object asWidget() {
		return viewStub;
	}
	
	@Override
	@SuppressLint("NewApi")
	public Object getAttribute(WidgetAttribute key, ILifeCycleDecorator decorator) {
		Object nativeWidget = asNativeWidget();
		switch (key.getAttributeName()) {
		}
		
		return null;
	}
	@SuppressLint("NewApi")
private static class OnClickListener implements View.OnClickListener, com.ashera.widget.IListener{
private IWidget w; private View view; private String strValue; private String action;
public String getAction() {return action;}
public OnClickListener(IWidget w, String strValue)  {
this.w = w; this.strValue = strValue;
}
public OnClickListener(IWidget w, String strValue, String action)  {
this.w = w; this.strValue = strValue;this.action=action;
}
public void onClick (View v){
    
	if (action == null || action.equals("onClick")) {
		// populate the data from ui to pojo
		w.syncModelFromUiToPojo("onClick");
	    java.util.Map<String, Object> obj = getOnClickEventObj(v);
	    String commandName =  (String) obj.get(EventExpressionParser.KEY_COMMAND_NAME);
	    
	    // execute command based on command type
	    String commandType = (String)obj.get(EventExpressionParser.KEY_COMMAND_TYPE);
		switch (commandType) {
		case "+":
		    if (EventCommandFactory.hasCommand(commandName)) {
		    	 EventCommandFactory.getCommand(commandName).executeCommand(w, obj, v);
		    }

			break;
		default:
			break;
		}
		
		if (obj.containsKey("refreshUiFromModel")) {
			Object widgets = obj.remove("refreshUiFromModel");
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, widgets, true);
		}
		if (w.getModelUiToPojoEventIds() != null) {
			com.ashera.layout.ViewImpl.refreshUiFromModel(w, w.getModelUiToPojoEventIds(), true);
		}
		if (strValue != null && !strValue.isEmpty() && !strValue.trim().startsWith("+")) {
		    com.ashera.core.IActivity activity = (com.ashera.core.IActivity)w.getFragment().getRootActivity();
		    activity.sendEventMessage(obj);
		}
	}
    return;
}//#####

public java.util.Map<String, Object> getOnClickEventObj(View v) {
	java.util.Map<String, Object> obj = com.ashera.widget.PluginInvoker.getJSONCompatMap();
    obj.put("action", "action");
    obj.put("eventType", "click");
    obj.put("fragmentId", w.getFragment().getFragmentId());
    obj.put("actionUrl", w.getFragment().getActionUrl());
    
    if (w.getComponentId() != null) {
    	obj.put("componentId", w.getComponentId());
    }
    
    PluginInvoker.putJSONSafeObjectIntoMap(obj, "id", w.getId());
     
    
    // parse event info into the map
    EventExpressionParser.parseEventExpression(strValue, obj);
    
    // update model data into map
    w.updateModelToEventMap(obj, "onClick", (String)obj.get(EventExpressionParser.KEY_EVENT_ARGS));
    return obj;
}
}

	
	

    @Override
	public Class getViewClass() {
		return View.class;
	}
	//end - body
	
	private void nativeCreate(IFragment fragment, Map<String, Object> params) {
	}

	@Override
	public Object asNativeWidget() {
		return viewStub;
	}
	//start - viewcode
	private int duration = com.google.android.material.snackbar.Snackbar.LENGTH_INDEFINITE;
	private com.google.android.material.snackbar.Snackbar snackbar;
	private void show(Object objValue) {
		if ((boolean) objValue) {
			if (snackbar != null) {
				snackbar.dismiss();
				snackbar = null;
			}
			snackbar = com.google.android.material.snackbar.Snackbar.make(viewStub, text, duration);
			
			if (actionText != null) {
				if (onClickAction == null) {
					onClickAction = "";
				}
				snackbar.setAction(actionText, new OnClickListener(this, onClickAction));
			}
			
			if (actionTextColor != null) {
				snackbar.setActionTextColor(actionTextColor);
			}
			
			if (textColor != null) {
				snackbar.setTextColor(textColor);
			}

			if (maxInlineActionWidth != 0) {
				snackbar.setMaxInlineActionWidth(maxInlineActionWidth);
			}
			
			setBackgroundAttributes();
			
			snackbar.dismiss();
			snackbar.show();
		} else {
			if (snackbar != null) {
				snackbar.dismiss();
				snackbar = null;
			}
		}
	}

	private String text;
	private void setText(Object objValue) {
		this.text = (String) objValue;
	}

	private String onClickAction;
	private void setOnClick(Object objValue) {
		onClickAction = (String) objValue;
	}
	private String actionText;
	private void setActionText(Object objValue) {
		actionText = (String) objValue;
	}

	private android.content.res.ColorStateList textColor;
	private void setTextColor(Object objValue) {
		textColor = (android.content.res.ColorStateList) objValue;
		
	}
	private int maxInlineActionWidth;
	private void setMaxInlineActionWidth(Object objValue) {
		maxInlineActionWidth = (int) objValue;
		
	}
	private android.content.res.ColorStateList actionTextColor;
	private void setActionTextColor(Object objValue) {
		actionTextColor = (android.content.res.ColorStateList) objValue;
		
	}
	private void setDuration(Object objValue) {
		duration = (int) objValue;
		
	}

	//end - viewcode

	private PorterDuff.Mode backgroundTintMode;
	private void setBackgroundTintMode(Object objValue) {
		backgroundTintMode = (PorterDuff.Mode) objValue;
	}

	private android.content.res.ColorStateList backgroundTint;
	private void setBackgroundTint(Object objValue) {
		backgroundTint = (android.content.res.ColorStateList) objValue;
	}
	public void setBackgroundAttributes() {
		if (backgroundTint != null) {
			snackbar.setBackgroundTintList(backgroundTint);
		}
		
		if (backgroundTintMode != null) {
			snackbar.setBackgroundTintMode(backgroundTintMode);
		}
	}

}
