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
import { Mixin, decorate } from 'ts-mixer';



import {ViewGroupImpl_LayoutParams} from './ViewGroupImpl';

// end - imports
import {ViewGroupImpl} from './ViewGroupImpl';
export abstract class SnackbarContentLayoutImpl<T> extends ViewGroupImpl<T>{
	//start - body
	static initialize() {
    }	

	@decorate(Exclude())
	protected thisPointer: T;	
	protected abstract getThisPointer(): T;
	reset() : T {	
		super.reset();
		return this.thisPointer;
	}
	constructor(id: string, path: string[], event:  string) {
		super(id, path, event);
		this.thisPointer = this.getThisPointer();
	}
	
	//end - body

}
	
//start - staticinit
export abstract class SnackbarContentLayoutImpl_LayoutParams<T> extends ViewGroupImpl_LayoutParams<T> {
	@decorate(Type(() => CommandAttr))
	@decorate(Expose({ name: "layout_gravity" }))
	layout_gravity!:CommandAttr<Gravity[]>| undefined;
	@decorate(Type(() => CommandAttr))
	@decorate(Expose({ name: "layout_weight" }))
	layout_weight!:CommandAttr<number>| undefined;
	@decorate(Exclude())
	protected thisPointer: T;	
	protected abstract getThisPointer(): T;
	reset() : T {	
		super.reset();
		this.layout_gravity = undefined;
		this.layout_weight = undefined;
		return this.thisPointer;
	}
	constructor() {
		super();
		this.thisPointer = this.getThisPointer();
	}
	
	public tryGetLayoutGravity() : T {
		if (this.layout_gravity == null || this.layout_gravity == undefined) {
			this.layout_gravity = new CommandAttr<Gravity[]>()
		}
		
		this.layout_gravity.setGetter(true);
		this.orderGet++;
		this.layout_gravity.setOrderGet(this.orderGet);
		return this.thisPointer;
	}
	
	public getLayoutGravity() : Gravity[] {
		if (this.layout_gravity == null || this.layout_gravity == undefined) {
			this.layout_gravity = new CommandAttr<Gravity[]>();
		}
this.layout_gravity.setTransformer('gravity');		return this.layout_gravity.getCommandReturnValue();
	}
	public setLayoutGravity(...value : Gravity[]) : T {
		if (this.layout_gravity == null || this.layout_gravity == undefined) {
			this.layout_gravity = new CommandAttr<Gravity[]>();
		}
		this.layout_gravity.setSetter(true);
		this.layout_gravity.setValue(value);
		this.orderSet++;
		this.layout_gravity.setOrderSet(this.orderSet);
this.layout_gravity.setTransformer('gravity');		return this.thisPointer;
	}
	public tryGetLayoutWeight() : T {
		if (this.layout_weight == null || this.layout_weight == undefined) {
			this.layout_weight = new CommandAttr<number>()
		}
		
		this.layout_weight.setGetter(true);
		this.orderGet++;
		this.layout_weight.setOrderGet(this.orderGet);
		return this.thisPointer;
	}
	
	public getLayoutWeight() : number {
		if (this.layout_weight == null || this.layout_weight == undefined) {
			this.layout_weight = new CommandAttr<number>();
		}
		return this.layout_weight.getCommandReturnValue();
	}
	public setLayoutWeight(value : number) : T {
		if (this.layout_weight == null || this.layout_weight == undefined) {
			this.layout_weight = new CommandAttr<number>();
		}
		this.layout_weight.setSetter(true);
		this.layout_weight.setValue(value);
		this.orderSet++;
		this.layout_weight.setOrderSet(this.orderSet);
		return this.thisPointer;
	}
}

export class SnackbarContentLayout_LayoutParams extends SnackbarContentLayoutImpl_LayoutParams<SnackbarContentLayout_LayoutParams> implements ILayoutParam {
    getThisPointer(): SnackbarContentLayout_LayoutParams {
        return this;
    }

   	constructor() {
		super();	
	}
}

export class SnackbarContentLayout extends SnackbarContentLayoutImpl<SnackbarContentLayout> implements IWidget{
    getThisPointer(): SnackbarContentLayout {
        return this;
    }
    
   	public getClass() {
		return SnackbarContentLayout;
	}
	
   	constructor(id: string, path: string[], event: string) {
		super(id, path, event);	
	}
}

SnackbarContentLayoutImpl.initialize();

//end - staticinit
