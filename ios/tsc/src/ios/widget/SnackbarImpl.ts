// start - imports

	
import CommandAttr from '../../widget/CommandAttr';
import IWidget from '../../widget/IWidget';
import ILayoutParam from '../../widget/ILayoutParam';
import {plainToClass, Type, Exclude, Expose, Transform} from "class-transformer";
import 'babel-polyfill';
import {Gravity} from '../../widget/TypeConstants';
import {ITranform, TransformerFactory} from '../../widget/TransformerFactory';
import {Event} from '../../app/Event';
import {MotionEvent} from '../../app/MotionEvent';
import {DragEvent} from '../../app/DragEvent';
import {KeyEvent} from '../../app/KeyEvent';
import { ScopedObject } from '../../app/ScopedObject';












// end - imports
import {ViewImpl} from './ViewImpl';
export abstract class SnackbarImpl<T> extends ViewImpl<T>{
	//start - body
	static initialize() {
    }	
	@Type(() => CommandAttr)
	@Expose({ name: "duration" })
	duration!:CommandAttr<number>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "text" })
	text!:CommandAttr<string>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "show" })
	show_!:CommandAttr<boolean>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "actionText" })
	actionText!:CommandAttr<string>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "actionTextColor" })
	actionTextColor!:CommandAttr<string>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "maxInlineActionWidth" })
	maxInlineActionWidth!:CommandAttr<string>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "textColor" })
	textColor!:CommandAttr<string>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "onClick" })
	onClick!:CommandAttr<string>| undefined;
	@Type(() => CommandAttr)
	@Expose({ name: "background" })
	background!:CommandAttr<string>| undefined;

	@Exclude()
	protected thisPointer: T;	
	protected abstract getThisPointer(): T;
	reset() : T {	
		super.reset();
		this.duration = undefined;
		this.text = undefined;
		this.show_ = undefined;
		this.actionText = undefined;
		this.actionTextColor = undefined;
		this.maxInlineActionWidth = undefined;
		this.textColor = undefined;
		this.onClick = undefined;
		this.background = undefined;
		return this.thisPointer;
	}
	constructor(id: string, path: string[], event:  string) {
		super(id, path, event);
		this.thisPointer = this.getThisPointer();
	}
	

	public setDuration(value : number) : T {
		this.resetIfRequired();
		if (this.duration == null || this.duration == undefined) {
			this.duration = new CommandAttr<number>();
		}
		
		this.duration.setSetter(true);
		this.duration.setValue(value);
		this.orderSet++;
		this.duration.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setText(value : string) : T {
		this.resetIfRequired();
		if (this.text == null || this.text == undefined) {
			this.text = new CommandAttr<string>();
		}
		
		this.text.setSetter(true);
		this.text.setValue(value);
		this.orderSet++;
		this.text.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public show(value : boolean) : T {
		this.resetIfRequired();
		if (this.show_ == null || this.show_ == undefined) {
			this.show_ = new CommandAttr<boolean>();
		}
		
		this.show_.setSetter(true);
		this.show_.setValue(value);
		this.orderSet++;
		this.show_.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setActionText(value : string) : T {
		this.resetIfRequired();
		if (this.actionText == null || this.actionText == undefined) {
			this.actionText = new CommandAttr<string>();
		}
		
		this.actionText.setSetter(true);
		this.actionText.setValue(value);
		this.orderSet++;
		this.actionText.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setActionTextColor(value : string) : T {
		this.resetIfRequired();
		if (this.actionTextColor == null || this.actionTextColor == undefined) {
			this.actionTextColor = new CommandAttr<string>();
		}
		
		this.actionTextColor.setSetter(true);
		this.actionTextColor.setValue(value);
		this.orderSet++;
		this.actionTextColor.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setMaxInlineActionWidth(value : string) : T {
		this.resetIfRequired();
		if (this.maxInlineActionWidth == null || this.maxInlineActionWidth == undefined) {
			this.maxInlineActionWidth = new CommandAttr<string>();
		}
		
		this.maxInlineActionWidth.setSetter(true);
		this.maxInlineActionWidth.setValue(value);
		this.orderSet++;
		this.maxInlineActionWidth.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setTextColor(value : string) : T {
		this.resetIfRequired();
		if (this.textColor == null || this.textColor == undefined) {
			this.textColor = new CommandAttr<string>();
		}
		
		this.textColor.setSetter(true);
		this.textColor.setValue(value);
		this.orderSet++;
		this.textColor.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setOnClick(value : string) : T {
		this.resetIfRequired();
		if (this.onClick == null || this.onClick == undefined) {
			this.onClick = new CommandAttr<string>();
		}
		
		this.onClick.setSetter(true);
		this.onClick.setValue(value);
		this.orderSet++;
		this.onClick.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		

	public setBackground(value : string) : T {
		this.resetIfRequired();
		if (this.background == null || this.background == undefined) {
			this.background = new CommandAttr<string>();
		}
		
		this.background.setSetter(true);
		this.background.setValue(value);
		this.orderSet++;
		this.background.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
		
	//end - body

}
	
//start - staticinit

export class Snackbar extends SnackbarImpl<Snackbar> implements IWidget{
    getThisPointer(): Snackbar {
        return this;
    }
    
   	public getClass() {
		return Snackbar;
	}
	
   	constructor(id: string, path: string[], event: string) {
		super(id, path, event);	
	}
}

SnackbarImpl.initialize();

//end - staticinit
