package com.ashera.snackbar;
// start - imports
import java.util.*;

import r.android.annotation.SuppressLint;
import r.android.content.Context;
import r.android.os.Build;
import r.android.view.*;
import r.android.widget.*;
import r.android.view.View.*;

import com.ashera.widget.BaseHasWidgets;

import r.android.annotation.SuppressLint;

import com.ashera.core.IFragment;
import com.ashera.widget.bus.*;
import com.ashera.converter.*;
import com.ashera.widget.bus.Event.*;
import com.ashera.widget.*;
import com.ashera.widget.IWidgetLifeCycleListener.*;
import com.ashera.layout.*;

/*-[
#include <UIKit/UIKit.h>
#include "ASUIView.h"
#include "HasLifeCycleDecorators.h"
]-*/
import com.google.j2objc.annotations.Property;
import androidx.core.view.*;

import static com.ashera.widget.IWidget.*;
//end - imports

public class SnackbarLayoutImpl extends BaseHasWidgets {
	//start - body
	private @Property Object uiView;
	public final static String LOCAL_NAME = "com.google.android.material.snackbar.Snackbar.SnackbarLayout"; 
	public final static String GROUP_NAME = "com.google.android.material.snackbar.Snackbar.SnackbarLayout";
	private com.google.android.material.snackbar.Snackbar.SnackbarLayout snackbarLayout;
	

	
	@Override
	public void loadAttributes(String localName) {
		ViewGroupImpl.register(localName);

	
		WidgetFactory.registerAttribute(localName, new WidgetAttribute.Builder().withName("layout_gravity").withType("gravity").forChild());
	}
	
	public SnackbarLayoutImpl() {
		super(GROUP_NAME, LOCAL_NAME);
	}
	public  SnackbarLayoutImpl(String localname) {
		super(GROUP_NAME, localname);
	}
	public  SnackbarLayoutImpl(String groupName, String localname) {
		super(groupName, localname);
	}

	@Override
	public IWidget newInstance() {
		return new SnackbarLayoutImpl(groupName, localName);
	}
	
	@SuppressLint("NewApi")
	@Override
	public void create(IFragment fragment, Map<String, Object> params) {
		super.create(fragment, params);
		snackbarLayout = new SnackbarLayoutExt();
		
		nativeCreate(params);
		
		
		ViewGroupImpl.registerCommandConveter(this);
		setWidgetOnNativeClass();
	}
	private native void setWidgetOnNativeClass() /*-[
		((ASUIView*) [self asNativeWidget]).widget = self;
	]-*/;

	@Override
	public Object asWidget() {
		return snackbarLayout;
	}

	@Override
	public boolean remove(IWidget w) {		
		boolean remove = super.remove(w);
		snackbarLayout.removeView((View) w.asWidget());
         ViewGroupImpl.nativeRemoveView(w);            
		return remove;
	}
	
	@Override
    public boolean remove(int index) {
		IWidget widget = widgets.get(index);
        boolean remove = super.remove(index);

        if (index + 1 <= snackbarLayout.getChildCount()) {
            snackbarLayout.removeViewAt(index);
            ViewGroupImpl.nativeRemoveView(widget);            
        }    
        return remove;
    }
	
	@Override
	public void add(IWidget w, int index) {
		if (index != -2) {
			View view = (View) w.asWidget();
			createLayoutParams(view);
			    if (index == -1) {
			        snackbarLayout.addView(view);
			    } else {
			        snackbarLayout.addView(view, index);
			    }
		}
		
		ViewGroupImpl.nativeAddView(asNativeWidget(), w.asNativeWidget());
		super.add(w, index);
	}
	
	private void createLayoutParams(View view) {
		com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams layoutParams = (com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams) view.getLayoutParams();
		
		layoutParams = (com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams) view.getLayoutParams();
		if (layoutParams == null) {
			layoutParams = new com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams(-2, -2);
			view.setLayoutParams(layoutParams);
		}  else {
			layoutParams.height = -2;
			layoutParams.width = -2;
		}
	}
	
	private com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams getLayoutParams(View view) {
		return (com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams) view.getLayoutParams();		
	}
	
	@SuppressLint("NewApi")
	@Override
	public void setChildAttribute(IWidget w, WidgetAttribute key, String strValue, Object objValue) {
		View view = (View) w.asWidget();
		com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams layoutParams = getLayoutParams(view);
		ViewGroupImpl.setChildAttribute(w, key, objValue, layoutParams);		
		
		switch (key.getAttributeName()) {
		case "layout_width":
			layoutParams.width = (int) objValue;
			break;	
		case "layout_height":
			layoutParams.height = (int) objValue;
			break;
			case "layout_gravity": {
				
							layoutParams.gravity = ((int)objValue);
				
			}
			break;
		default:
			break;
		}
		
		
		view.setLayoutParams(layoutParams);		
	}
	
	@SuppressLint("NewApi")
	@Override
	public Object getChildAttribute(IWidget w, WidgetAttribute key) {
		Object attributeValue = ViewGroupImpl.getChildAttribute(w, key);		
		if (attributeValue != null) {
			return attributeValue;
		}
		View view = (View) w.asWidget();
		com.google.android.material.snackbar.Snackbar.SnackbarLayout.LayoutParams layoutParams = getLayoutParams(view);

		switch (key.getAttributeName()) {
		case "layout_width":
			return layoutParams.width;
		case "layout_height":
			return layoutParams.height;
			case "layout_gravity": {
return layoutParams.gravity;			}

		}
		
		return null;

	}
	
@com.google.j2objc.annotations.WeakOuter		
	public class SnackbarLayoutExt extends com.google.android.material.snackbar.Snackbar.SnackbarLayout implements ILifeCycleDecorator, com.ashera.widget.IMaxDimension{
		private MeasureEvent measureFinished = new MeasureEvent();
		private OnLayoutEvent onLayoutEvent = new OnLayoutEvent();
		private int mMaxWidth = -1;
		private int mMaxHeight = -1;
		@Override
		public void setMaxWidth(int width) {
			mMaxWidth = width;
		}
		@Override
		public void setMaxHeight(int height) {
			mMaxHeight = height;
		}
		@Override
		public int getMaxWidth() {
			return mMaxWidth;
		}
		@Override
		public int getMaxHeight() {
			return mMaxHeight;
		}

		public SnackbarLayoutExt() {
			super();
			
		}
		
		@Override
		public void onMeasure(int widthMeasureSpec, int heightMeasureSpec) {

			if(mMaxWidth > 0) {
	        	widthMeasureSpec = MeasureSpec.makeMeasureSpec(mMaxWidth, MeasureSpec.AT_MOST);
	        }
	        if(mMaxHeight > 0) {
	            heightMeasureSpec = MeasureSpec.makeMeasureSpec(mMaxHeight, MeasureSpec.AT_MOST);

	        }

	        super.onMeasure(widthMeasureSpec, heightMeasureSpec);
			IWidgetLifeCycleListener listener = (IWidgetLifeCycleListener) getListener();
			if (listener != null) {
			    measureFinished.setWidth(getMeasuredWidth());
			    measureFinished.setHeight(getMeasuredHeight());
				listener.eventOccurred(EventId.measureFinished, measureFinished);
			}
		}
		
		@Override
		protected void onLayout(boolean changed, int l, int t, int r, int b) {
			super.onLayout(changed, l, t, r, b);
			ViewImpl.setDrawableBounds(SnackbarLayoutImpl.this, l, t, r, b);
			ViewImpl.nativeMakeFrame(asNativeWidget(), l, t, r, b);
			replayBufferedEvents();
	        ViewImpl.redrawDrawables(SnackbarLayoutImpl.this);
			
			IWidgetLifeCycleListener listener = (IWidgetLifeCycleListener) getListener();
			if (listener != null) {
				onLayoutEvent.setB(b);
				onLayoutEvent.setL(l);
				onLayoutEvent.setR(r);
				onLayoutEvent.setT(t);
				onLayoutEvent.setChanged(changed);
				listener.eventOccurred(EventId.onLayout, onLayoutEvent);
			}
			
			if (isInvalidateOnFrameChange() && isInitialised()) {
				SnackbarLayoutImpl.this.invalidate();
			}
		}	
		
		@Override
		public void execute(String method, Object... canvas) {
			
		}

		public void updateMeasuredDimension(int width, int height) {
			setMeasuredDimension(width, height);
		}


		@Override
		public ILifeCycleDecorator newInstance(IWidget widget) {
			throw new UnsupportedOperationException();
		}

		@Override
		public void setAttribute(WidgetAttribute widgetAttribute,
				String strValue, Object objValue) {
			throw new UnsupportedOperationException();
		}		
		

		@Override
		public List<String> getMethods() {
			throw new UnsupportedOperationException();
		}
		
		@Override
		public void initialized() {
			throw new UnsupportedOperationException();
		}
		
        @Override
        public Object getAttribute(WidgetAttribute widgetAttribute) {
            throw new UnsupportedOperationException();
        }
        @Override
        public void drawableStateChanged() {
        	super.drawableStateChanged();
        	ViewImpl.drawableStateChanged(SnackbarLayoutImpl.this);
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
    		IWidget widget = template.loadLazyWidgets(SnackbarLayoutImpl.this.getParent());
    		return (View) widget.asWidget();
    	}        
        
    	@Override
		public void remeasure() {
			getFragment().remeasure();
		}
    	
        @Override
		public void removeFromParent() {
        	SnackbarLayoutImpl.this.getParent().remove(SnackbarLayoutImpl.this);
		}
        @Override
        public void getLocationOnScreen(int[] appScreenLocation) {
        	appScreenLocation[0] = ViewImpl.getLocationXOnScreen(asNativeWidget());
        	appScreenLocation[1] = ViewImpl.getLocationYOnScreen(asNativeWidget());
        }
        @Override
        public void getWindowVisibleDisplayFrame(r.android.graphics.Rect displayFrame){
        	
        	displayFrame.left = ViewImpl.getLocationXOnScreen(asNativeWidget());
        	displayFrame.top = ViewImpl.getLocationYOnScreen(asNativeWidget());
        	displayFrame.right = displayFrame.left + getWidth();
        	displayFrame.bottom = displayFrame.top + getHeight();
        }
        @Override
		public void offsetTopAndBottom(int offset) {
			super.offsetTopAndBottom(offset);
			ViewImpl.nativeMakeFrame(asNativeWidget(), getLeft(), getTop(), getRight(), getBottom());
		}
		@Override
		public void offsetLeftAndRight(int offset) {
			super.offsetLeftAndRight(offset);
			ViewImpl.nativeMakeFrame(asNativeWidget(), getLeft(), getTop(), getRight(), getBottom());
		}
		@Override
		public void setMyAttribute(String name, Object value) {
			SnackbarLayoutImpl.this.setAttribute(name, value, true);
		}
        @Override
        public void setVisibility(int visibility) {
            super.setVisibility(visibility);
            ViewImpl.nativeSetVisibility(asNativeWidget(), visibility != View.VISIBLE);
            
        }
        
        	public void state0() {
        		ViewImpl.state(SnackbarLayoutImpl.this, 0);
        	}
        	public void state1() {
        		ViewImpl.state(SnackbarLayoutImpl.this, 1);
        	}
        	public void state2() {
        		ViewImpl.state(SnackbarLayoutImpl.this, 2);
        	}
        	public void state3() {
        		ViewImpl.state(SnackbarLayoutImpl.this, 3);
        	}
        	public void state4() {
        		ViewImpl.state(SnackbarLayoutImpl.this, 4);
        	}
                        
        public void stateYes() {
        	ViewImpl.stateYes(SnackbarLayoutImpl.this);
        	
        }
        
        public void stateNo() {
        	ViewImpl.stateNo(SnackbarLayoutImpl.this);
        }
	}
	@Override
	public Class getViewClass() {
		return SnackbarLayoutExt.class;
	}
	
	@SuppressLint("NewApi")
	@Override
	public void setAttribute(WidgetAttribute key, String strValue, Object objValue, ILifeCycleDecorator decorator) {
		ViewGroupImpl.setAttribute(this, key, strValue, objValue, decorator);
		Object nativeWidget = asNativeWidget();

	}
	
	@Override
	@SuppressLint("NewApi")
	public Object getAttribute(WidgetAttribute key, ILifeCycleDecorator decorator) {
		Object attributeValue = ViewGroupImpl.getAttribute(this, key, decorator);
		if (attributeValue != null) {
			return attributeValue;
		}
		Object nativeWidget = asNativeWidget();
		return null;
	}


	@Override
    public Object asNativeWidget() {
        return uiView;
    }
    public native boolean checkIosVersion(String v) /*-[
		return ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending);
	]-*/;
    public native void nativeCreate(Map<String, Object> params)/*-[
		ASUIView* uiView = [ASUIView new];
		uiView.backgroundColor = [UIColor clearColor];
		uiView_ = uiView;
	]-*/;
    
    @Override
    public void requestLayout() {
    	if (isInitialised()) {
    		ViewImpl.requestLayout(this, asNativeWidget());
    	}
    }
    
    @Override
    public void invalidate() {
    	if (isInitialised()) {
    		ViewImpl.invalidate(this, asNativeWidget());
    	}
    }
    
	

	@Override
	public void setId(String id){
		if (id != null && !id.equals("")){
			super.setId(id);
			snackbarLayout.setId((int) quickConvert(id, "id"));
		}
	}
	
    
    @Override
    public void setVisible(boolean b) {
        ((View)asWidget()).setVisibility(b ? View.VISIBLE : View.GONE);
    }

	
private SnackbarLayoutCommandBuilder builder;
private SnackbarLayoutBean bean;
public Object getPlugin(String plugin) {
	return WidgetFactory.getAttributable(plugin).newInstance(this);
}
public SnackbarLayoutBean getBean() {
	if (bean == null) {
		bean = new SnackbarLayoutBean();
	}
	return bean;
}
public SnackbarLayoutCommandBuilder getBuilder() {
	if (builder == null) {
		builder = new SnackbarLayoutCommandBuilder();
	}
	return builder;
}


public  class SnackbarLayoutCommandBuilder extends com.ashera.layout.ViewGroupImpl.ViewGroupCommandBuilder <SnackbarLayoutCommandBuilder> {
    public SnackbarLayoutCommandBuilder() {
	}
	
	public SnackbarLayoutCommandBuilder execute(boolean setter) {
		if (setter) {
			executeCommand(command, null, IWidget.COMMAND_EXEC_SETTER_METHOD);
			getFragment().remeasure();
		}
		executeCommand(command, null, IWidget.COMMAND_EXEC_GETTER_METHOD);
return this;	}

}
public class SnackbarLayoutBean extends com.ashera.layout.ViewGroupImpl.ViewGroupBean{
		public SnackbarLayoutBean() {
			super(SnackbarLayoutImpl.this);
		}
}


private SnackbarLayoutCommandParamsBuilder paramsBuilder;
private SnackbarLayoutParamsBean paramsBean;

public SnackbarLayoutParamsBean getParamsBean() {
	if (paramsBean == null) {
		paramsBean = new SnackbarLayoutParamsBean();
	}
	return paramsBean;
}
public SnackbarLayoutCommandParamsBuilder getParamsBuilder() {
	if (paramsBuilder == null) {
		paramsBuilder = new SnackbarLayoutCommandParamsBuilder();
	}
	return paramsBuilder;
}



public class SnackbarLayoutParamsBean extends com.ashera.layout.ViewGroupImpl.ViewGroupParamsBean{
public Object getLayoutGravity(IWidget w) {
	java.util.Map<String, Object> layoutParams = new java.util.HashMap<String, Object>();
	java.util.Map<String, Object> command = getParamsBuilder().reset().tryGetLayoutGravity().getCommand();
	
	layoutParams.put("layoutParams", command);
	w.executeCommand(layoutParams, null, COMMAND_EXEC_GETTER_METHOD); 
	return getParamsBuilder().getLayoutGravity();
}
public void setLayoutGravity(IWidget w, String value) {
	java.util.Map<String, Object> layoutParams = new java.util.HashMap<String, Object>();
	layoutParams.put("layoutParams", getParamsBuilder().reset().setLayoutGravity(value).getCommand());
	w.executeCommand(layoutParams, null, COMMAND_EXEC_SETTER_METHOD);
	w.getFragment().remeasure();
}

}





public class SnackbarLayoutCommandParamsBuilder extends com.ashera.layout.ViewGroupImpl.ViewGroupCommandParamsBuilder<SnackbarLayoutCommandParamsBuilder>{
public SnackbarLayoutCommandParamsBuilder tryGetLayoutGravity() {
	Map<String, Object> attrs = initCommand("layout_gravity");
	attrs.put("type", "attribute");
	attrs.put("getter", true);
	attrs.put("orderGet", ++orderGet);
return this;}

public Object getLayoutGravity() {
	Map<String, Object> attrs = initCommand("layout_gravity");
	return attrs.get("commandReturnValue");
}
public SnackbarLayoutCommandParamsBuilder setLayoutGravity(String value) {
	Map<String, Object> attrs = initCommand("layout_gravity");
	attrs.put("type", "attribute");
	attrs.put("setter", true);
	attrs.put("orderSet", ++orderSet);

	attrs.put("value", value);
return this;}
}

	//end - body
}
