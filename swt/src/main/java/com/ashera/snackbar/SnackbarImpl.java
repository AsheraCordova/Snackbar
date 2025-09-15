package com.ashera.snackbar;


//start - imports
import java.util.*;

import r.android.content.*;
import r.android.graphics.*;
import r.android.os.Build;
import r.android.view.*;

import com.ashera.core.IFragment;
import com.ashera.converter.*;
import r.android.annotation.SuppressLint;

import com.ashera.widget.bus.*;
import com.ashera.widget.*;

import org.eclipse.swt.widgets.*;
import org.eclipse.swt.graphics.*;
import org.eclipse.swt.*;

import static com.ashera.widget.IWidget.*;
//end - imports
import com.ashera.layout.ViewImpl;
@SuppressLint("NewApi")
public class SnackbarImpl extends BaseWidget {
	//start - body
	private View viewStub;
	private Object pane;
	public final static String LOCAL_NAME = "com.ashera.snackbar.Snackbar"; 
	public final static String GROUP_NAME = "com.ashera.snackbar.Snackbar";
	
	
	@Override
	public void loadAttributes(String attributeName) {

		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("duration").withType("int"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("text").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("show").withType("boolean"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("actionText").withType("resourcestring"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("actionTextColor").withType("colorstate"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("maxInlineActionWidth").withType("dimension"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("textColor").withType("colorstate"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("onClick").withType("string"));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("background").withType("drawable").withUiFlag(UPDATE_UI_REQUEST_LAYOUT_N_INVALIDATE));
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("attributeUnderTest").withType("string"));

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
		
        viewStub = new ViewExt();
        pane = new Composite(ViewImpl.getParent(this), SWT.NONE);
        ViewImpl.nativeMakeFrame(pane, 0, 0, 0, 0);
		nativeCreate(fragment, params);	
	}
	
	public class ViewExt extends View implements com.ashera.model.IViewStub{
		@Override
		public void remeasure() {
			if (getFragment() != null) {
				getFragment().remeasure();
			}
		}
        private Map<String, IWidget> templates;
    	@Override
    	public r.android.view.View inflateView(java.lang.String layout) {
    		if (templates == null) {
    			templates = new java.util.HashMap<String, IWidget>();
    		}
    		IWidget template = templates.get(layout);
    		if (template == null) {
    			template = (IWidget) quickConvert(layout, "template");
    			templates.put(layout, template);
    		}
    		IWidget widget = template.loadLazyWidgets(SnackbarImpl.this.getParent());
    		return (View) widget.asWidget();
    	}
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
			case "onClick": {
				


		 setOnClick(objValue);



			}
			break;
			case "background": {
				


		setBackground(objValue);



			}
			break;
			case "attributeUnderTest": {
				


		 ViewImpl.setAttribute(this,  key, strValue, objValue, decorator);



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
		    if (activity != null) {
		    	activity.sendEventMessage(obj);
		    }
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
    obj.put("namespace", w.getFragment().getNamespace());
    
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

	private r.android.content.res.ColorStateList textColor;
	private void setTextColor(Object objValue) {
		textColor = (r.android.content.res.ColorStateList) objValue;
		
	}
	private int maxInlineActionWidth;
	private void setMaxInlineActionWidth(Object objValue) {
		maxInlineActionWidth = (int) objValue;
		
	}
	private r.android.content.res.ColorStateList actionTextColor;
	private void setActionTextColor(Object objValue) {
		actionTextColor = (r.android.content.res.ColorStateList) objValue;
		
	}
	private void setDuration(Object objValue) {
		duration = (int) objValue;
		
	}

	


    @Override
    public void setVisible(boolean b) {
        ((View)asWidget()).setVisibility(b ? View.VISIBLE : View.GONE);
    }
    @Override
    public Object asNativeWidget() {
        return pane;
        
    }
    @Override
	public Class getViewClass() {
		return View.class;
	}
	//end - body

    //start - viewcode
	private void nativeCreate(IFragment fragment, Map<String, Object> params) {
		addDellocHandler();
	}
	
	private final static String DELLOC_EVENT = com.ashera.widget.bus.Event.StandardEvents.dealloc.toString();
	@com.google.j2objc.annotations.WeakOuter
	class DallocHandler extends com.ashera.widget.bus.EventBusHandler {

		public DallocHandler(String type) {
			super(type);
		}

		@Override
		protected void doPerform(Object payload) {
			if (snackbar != null) {
				snackbar.dismissImmediate();
				snackbar = null;
			}		
		}
		
	}
	private void addDellocHandler() {
		fragment.getEventBus().on(DELLOC_EVENT, new DallocHandler(DELLOC_EVENT));
	}

	private r.android.graphics.drawable.Drawable background;
	private void setBackground(Object objValue) {
		background = (r.android.graphics.drawable.Drawable) objValue;
	}


	private void setBackgroundAttributes() {
		if (background != null) {
			snackbar.setBackground(background);
		}
	}
	//end - viewcode
}
