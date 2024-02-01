//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: D:\Java\git\core-javafx-widget\AndroidJSnackbar\src\main\java\com\google\android\material\snackbar\SnackbarContentLayout.java
//

#include "BaseTransientBottomBar.h"
#include "Button.h"
#include "IOSPrimitiveArray.h"
#include "J2ObjC_source.h"
#include "LinearLayout.h"
#include "ObjectAnimator.h"
#include "PluginInvoker.h"
#include "SnackbarContentLayout.h"
#include "TextView.h"
#include "TimeInterpolator.h"
#include "View.h"
#include "ViewCompat.h"


@interface ADXSnackbarContentLayout () {
 @public
  id<ADTimeInterpolator> contentInterpolator_;
  jint maxInlineActionWidth_;
}

- (jboolean)updateViewsWithinLayoutWithInt:(jint)orientation
                                   withInt:(jint)messagePadTop
                                   withInt:(jint)messagePadBottom;

+ (void)updateTopBottomPaddingWithADView:(ADView *)view
                                 withInt:(jint)topPadding
                                 withInt:(jint)bottomPadding;

- (jint)getNoOfLines;

@end

J2OBJC_FIELD_SETTER(ADXSnackbarContentLayout, contentInterpolator_, id<ADTimeInterpolator>)

__attribute__((unused)) static jboolean ADXSnackbarContentLayout_updateViewsWithinLayoutWithInt_withInt_withInt_(ADXSnackbarContentLayout *self, jint orientation, jint messagePadTop, jint messagePadBottom);

__attribute__((unused)) static void ADXSnackbarContentLayout_updateTopBottomPaddingWithADView_withInt_withInt_(ADView *view, jint topPadding, jint bottomPadding);

__attribute__((unused)) static jint ADXSnackbarContentLayout_getNoOfLines(ADXSnackbarContentLayout *self);

@implementation ADXSnackbarContentLayout

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ADXSnackbarContentLayout_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)onMeasureWithInt:(jint)widthMeasureSpec
                 withInt:(jint)heightMeasureSpec {
  [super onMeasureWithInt:widthMeasureSpec withInt:heightMeasureSpec];
  if ([self getOrientation] == ADLinearLayout_VERTICAL) {
    return;
  }
  jint multiLineVPadding = JreFpToInt(ASPluginInvoker_convertDpToPixelWithNSString_(@"24dp"));
  jint singleLineVPadding = JreFpToInt(ASPluginInvoker_convertDpToPixelWithNSString_(@"14dp"));
  jboolean isMultiLine = ADXSnackbarContentLayout_getNoOfLines(self) > 1;
  jboolean remeasure = false;
  if (isMultiLine && maxInlineActionWidth_ > 0 && [((ADButton *) nil_chk([self getActionView])) getMeasuredWidth] > maxInlineActionWidth_) {
    if (ADXSnackbarContentLayout_updateViewsWithinLayoutWithInt_withInt_withInt_(self, ADLinearLayout_VERTICAL, multiLineVPadding, multiLineVPadding - singleLineVPadding)) {
      remeasure = true;
    }
  }
  else {
    jint messagePadding = isMultiLine ? multiLineVPadding : singleLineVPadding;
    if (ADXSnackbarContentLayout_updateViewsWithinLayoutWithInt_withInt_withInt_(self, ADLinearLayout_HORIZONTAL, messagePadding, messagePadding)) {
      remeasure = true;
    }
  }
  if (remeasure) {
    [super onMeasureWithInt:widthMeasureSpec withInt:heightMeasureSpec];
  }
}

- (jboolean)updateViewsWithinLayoutWithInt:(jint)orientation
                                   withInt:(jint)messagePadTop
                                   withInt:(jint)messagePadBottom {
  return ADXSnackbarContentLayout_updateViewsWithinLayoutWithInt_withInt_withInt_(self, orientation, messagePadTop, messagePadBottom);
}

+ (void)updateTopBottomPaddingWithADView:(ADView *)view
                                 withInt:(jint)topPadding
                                 withInt:(jint)bottomPadding {
  ADXSnackbarContentLayout_updateTopBottomPaddingWithADView_withInt_withInt_(view, topPadding, bottomPadding);
}

- (void)animateContentInWithInt:(jint)delay
                        withInt:(jint)duration {
  ADObjectAnimator *o = ADObjectAnimator_ofFloatWithId_withNSString_withFloatArray_([self getMessageView], @"alpha", [IOSFloatArray arrayWithFloats:(jfloat[]){ 0.0f, 1.0f } count:2]);
  [((ADObjectAnimator *) nil_chk(o)) setDurationWithLong:duration];
  [o setInterpolatorWithADTimeInterpolator:contentInterpolator_];
  [o setStartDelayWithLong:delay];
  [o start];
  if ([((ADButton *) nil_chk([self getActionView])) getVisibility] == ADView_VISIBLE) {
    ADObjectAnimator *o1 = ADObjectAnimator_ofFloatWithId_withNSString_withFloatArray_([self getActionView], @"alpha", [IOSFloatArray arrayWithFloats:(jfloat[]){ 0.0f, 1.0f } count:2]);
    [((ADObjectAnimator *) nil_chk(o1)) setDurationWithLong:duration];
    [o setInterpolatorWithADTimeInterpolator:contentInterpolator_];
    [o1 setStartDelayWithLong:delay];
    [o1 start];
  }
}

- (void)animateContentOutWithInt:(jint)delay
                         withInt:(jint)duration {
  ADObjectAnimator *o = ADObjectAnimator_ofFloatWithId_withNSString_withFloatArray_([self getMessageView], @"alpha", [IOSFloatArray arrayWithFloats:(jfloat[]){ 1.0f, 0.0f } count:2]);
  [((ADObjectAnimator *) nil_chk(o)) setDurationWithLong:duration];
  [o setInterpolatorWithADTimeInterpolator:contentInterpolator_];
  [o setStartDelayWithLong:delay];
  [o start];
  if ([((ADButton *) nil_chk([self getActionView])) getVisibility] == ADView_VISIBLE) {
    ADObjectAnimator *o1 = ADObjectAnimator_ofFloatWithId_withNSString_withFloatArray_([self getActionView], @"alpha", [IOSFloatArray arrayWithFloats:(jfloat[]){ 1.0f, 0.0f } count:2]);
    [((ADObjectAnimator *) nil_chk(o1)) setDurationWithLong:duration];
    [o setInterpolatorWithADTimeInterpolator:contentInterpolator_];
    [o1 setStartDelayWithLong:delay];
    [o1 start];
  }
}

- (void)setMaxInlineActionWidthWithInt:(jint)width {
  maxInlineActionWidth_ = width;
}

- (ADTextView *)getMessageView {
  return (ADTextView *) cast_chk([self getChildAtWithInt:0], [ADTextView class]);
}

- (ADButton *)getActionView {
  return (ADButton *) cast_chk([self getChildAtWithInt:1], [ADButton class]);
}

- (jint)getNoOfLines {
  return ADXSnackbarContentLayout_getNoOfLines(self);
}

- (void)dealloc {
  RELEASE_(contentInterpolator_);
  [super dealloc];
}

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, NULL, 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "V", 0x4, 0, 1, -1, -1, -1, -1 },
    { NULL, "Z", 0x2, 2, 3, -1, -1, -1, -1 },
    { NULL, "V", 0xa, 4, 5, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 6, 1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 7, 1, -1, -1, -1, -1 },
    { NULL, "V", 0x1, 8, 9, -1, -1, -1, -1 },
    { NULL, "LADTextView;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "LADButton;", 0x1, -1, -1, -1, -1, -1, -1 },
    { NULL, "I", 0x2, -1, -1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(init);
  methods[1].selector = @selector(onMeasureWithInt:withInt:);
  methods[2].selector = @selector(updateViewsWithinLayoutWithInt:withInt:withInt:);
  methods[3].selector = @selector(updateTopBottomPaddingWithADView:withInt:withInt:);
  methods[4].selector = @selector(animateContentInWithInt:withInt:);
  methods[5].selector = @selector(animateContentOutWithInt:withInt:);
  methods[6].selector = @selector(setMaxInlineActionWidthWithInt:);
  methods[7].selector = @selector(getMessageView);
  methods[8].selector = @selector(getActionView);
  methods[9].selector = @selector(getNoOfLines);
  #pragma clang diagnostic pop
  static const J2ObjcFieldInfo fields[] = {
    { "contentInterpolator_", "LADTimeInterpolator;", .constantValue.asLong = 0, 0x12, -1, -1, -1, -1 },
    { "maxInlineActionWidth_", "I", .constantValue.asLong = 0, 0x2, -1, -1, -1, -1 },
  };
  static const void *ptrTable[] = { "onMeasure", "II", "updateViewsWithinLayout", "III", "updateTopBottomPadding", "LADView;II", "animateContentIn", "animateContentOut", "setMaxInlineActionWidth", "I" };
  static const J2ObjcClassInfo _ADXSnackbarContentLayout = { "SnackbarContentLayout", "com.google.android.material.snackbar", ptrTable, methods, fields, 7, 0x1, 10, 2, -1, -1, -1, -1, -1 };
  return &_ADXSnackbarContentLayout;
}

@end

void ADXSnackbarContentLayout_init(ADXSnackbarContentLayout *self) {
  ADLinearLayout_init(self);
  JreStrongAssign(&self->contentInterpolator_, JreLoadStatic(ADXBaseTransientBottomBar, FAST_OUT_SLOW_IN_INTERPOLATOR));
}

ADXSnackbarContentLayout *new_ADXSnackbarContentLayout_init() {
  J2OBJC_NEW_IMPL(ADXSnackbarContentLayout, init)
}

ADXSnackbarContentLayout *create_ADXSnackbarContentLayout_init() {
  J2OBJC_CREATE_IMPL(ADXSnackbarContentLayout, init)
}

jboolean ADXSnackbarContentLayout_updateViewsWithinLayoutWithInt_withInt_withInt_(ADXSnackbarContentLayout *self, jint orientation, jint messagePadTop, jint messagePadBottom) {
  jboolean changed = false;
  if (orientation != [self getOrientation]) {
    [self setOrientationWithInt:orientation];
    changed = true;
  }
  if ([((ADTextView *) nil_chk([self getMessageView])) getPaddingTop] != messagePadTop || [((ADTextView *) nil_chk([self getMessageView])) getPaddingBottom] != messagePadBottom) {
    ADXSnackbarContentLayout_updateTopBottomPaddingWithADView_withInt_withInt_([self getMessageView], messagePadTop, messagePadBottom);
    changed = true;
  }
  return changed;
}

void ADXSnackbarContentLayout_updateTopBottomPaddingWithADView_withInt_withInt_(ADView *view, jint topPadding, jint bottomPadding) {
  ADXSnackbarContentLayout_initialize();
  if (ADXViewCompat_isPaddingRelativeWithADView_(view)) {
    ADXViewCompat_setPaddingRelativeWithADView_withInt_withInt_withInt_withInt_(view, ADXViewCompat_getPaddingStartWithADView_(view), topPadding, ADXViewCompat_getPaddingEndWithADView_(view), bottomPadding);
  }
  else {
    [((ADView *) nil_chk(view)) setPaddingWithInt:[view getPaddingLeft] withInt:topPadding withInt:[view getPaddingRight] withInt:bottomPadding];
  }
}

jint ADXSnackbarContentLayout_getNoOfLines(ADXSnackbarContentLayout *self) {
  if ([((ADTextView *) nil_chk([self getMessageView])) getLineHeight] == 0) {
    return 0;
  }
  return JreIntDiv(([((ADTextView *) nil_chk([self getMessageView])) getMeasuredHeight] - [((ADTextView *) nil_chk([self getMessageView])) getPaddingTop] - [((ADTextView *) nil_chk([self getMessageView])) getPaddingBottom]), [((ADTextView *) nil_chk([self getMessageView])) getLineHeight]);
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ADXSnackbarContentLayout)
