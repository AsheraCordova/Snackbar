//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: D:\Java\git\core-ios-widgets\IOSSnackbarPlugin\src\main\java\com\ashera\snackbar\SnackbarLayoutImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_SnackbarLayoutImpl")
#ifdef RESTRICT_SnackbarLayoutImpl
#define INCLUDE_ALL_SnackbarLayoutImpl 0
#else
#define INCLUDE_ALL_SnackbarLayoutImpl 1
#endif
#undef RESTRICT_SnackbarLayoutImpl

#if !defined (ASSnackbarLayoutImpl_) && (INCLUDE_ALL_SnackbarLayoutImpl || defined(INCLUDE_ASSnackbarLayoutImpl))
#define ASSnackbarLayoutImpl_

#define RESTRICT_BaseHasWidgets 1
#define INCLUDE_ASBaseHasWidgets 1
#include "BaseHasWidgets.h"

@class ASSnackbarLayoutImpl_SnackbarLayoutBean;
@class ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder;
@class ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder;
@class ASSnackbarLayoutImpl_SnackbarLayoutParamsBean;
@class ASWidgetAttribute;
@class IOSClass;
@protocol ASIFragment;
@protocol ASILifeCycleDecorator;
@protocol ASIWidget;
@protocol JavaUtilMap;

@interface ASSnackbarLayoutImpl : ASBaseHasWidgets
@property id uiView;

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)localname;

- (instancetype)initWithNSString:(NSString *)groupName
                    withNSString:(NSString *)localname;

- (void)addWithASIWidget:(id<ASIWidget>)w
                 withInt:(jint)index;

- (id)asNativeWidget;

- (id)asWidget;

- (jboolean)checkIosVersionWithNSString:(NSString *)v;

- (void)createWithASIFragment:(id<ASIFragment>)fragment
              withJavaUtilMap:(id<JavaUtilMap>)params;

- (id)getAttributeWithASWidgetAttribute:(ASWidgetAttribute *)key
              withASILifeCycleDecorator:(id<ASILifeCycleDecorator>)decorator;

- (ASSnackbarLayoutImpl_SnackbarLayoutBean *)getBean;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)getBuilder;

- (id)getChildAttributeWithASIWidget:(id<ASIWidget>)w
               withASWidgetAttribute:(ASWidgetAttribute *)key;

- (ASSnackbarLayoutImpl_SnackbarLayoutParamsBean *)getParamsBean;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)getParamsBuilder;

- (id)getPluginWithNSString:(NSString *)plugin;

- (IOSClass *)getViewClass;

- (void)invalidate;

- (void)loadAttributesWithNSString:(NSString *)localName;

- (void)nativeCreateWithJavaUtilMap:(id<JavaUtilMap>)params;

- (id<ASIWidget>)newInstance OBJC_METHOD_FAMILY_NONE;

- (jboolean)removeWithInt:(jint)index;

- (jboolean)removeWithASIWidget:(id<ASIWidget>)w;

- (void)requestLayout;

- (void)setAttributeWithASWidgetAttribute:(ASWidgetAttribute *)key
                             withNSString:(NSString *)strValue
                                   withId:(id)objValue
                withASILifeCycleDecorator:(id<ASILifeCycleDecorator>)decorator;

- (void)setChildAttributeWithASIWidget:(id<ASIWidget>)w
                 withASWidgetAttribute:(ASWidgetAttribute *)key
                          withNSString:(NSString *)strValue
                                withId:(id)objValue;

- (void)setIdWithNSString:(NSString *)id_;

- (void)setVisibleWithBoolean:(jboolean)b;

@end

J2OBJC_EMPTY_STATIC_INIT(ASSnackbarLayoutImpl)

inline NSString *ASSnackbarLayoutImpl_get_LOCAL_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASSnackbarLayoutImpl_LOCAL_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASSnackbarLayoutImpl, LOCAL_NAME, NSString *)

inline NSString *ASSnackbarLayoutImpl_get_GROUP_NAME(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *ASSnackbarLayoutImpl_GROUP_NAME;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ASSnackbarLayoutImpl, GROUP_NAME, NSString *)

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_init(ASSnackbarLayoutImpl *self);

FOUNDATION_EXPORT ASSnackbarLayoutImpl *new_ASSnackbarLayoutImpl_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl *create_ASSnackbarLayoutImpl_init(void);

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_initWithNSString_(ASSnackbarLayoutImpl *self, NSString *localname);

FOUNDATION_EXPORT ASSnackbarLayoutImpl *new_ASSnackbarLayoutImpl_initWithNSString_(NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl *create_ASSnackbarLayoutImpl_initWithNSString_(NSString *localname);

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_initWithNSString_withNSString_(ASSnackbarLayoutImpl *self, NSString *groupName, NSString *localname);

FOUNDATION_EXPORT ASSnackbarLayoutImpl *new_ASSnackbarLayoutImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl *create_ASSnackbarLayoutImpl_initWithNSString_withNSString_(NSString *groupName, NSString *localname);

J2OBJC_TYPE_LITERAL_HEADER(ASSnackbarLayoutImpl)

@compatibility_alias ComAsheraSnackbarSnackbarLayoutImpl ASSnackbarLayoutImpl;

#endif

#if !defined (ASSnackbarLayoutImpl_SnackbarLayoutExt_) && (INCLUDE_ALL_SnackbarLayoutImpl || defined(INCLUDE_ASSnackbarLayoutImpl_SnackbarLayoutExt))
#define ASSnackbarLayoutImpl_SnackbarLayoutExt_

#define RESTRICT_Snackbar 1
#define INCLUDE_ADXSnackbar_SnackbarLayout 1
#include "Snackbar.h"

#define RESTRICT_ILifeCycleDecorator 1
#define INCLUDE_ASILifeCycleDecorator 1
#include "ILifeCycleDecorator.h"

#define RESTRICT_IMaxDimension 1
#define INCLUDE_ASIMaxDimension 1
#include "IMaxDimension.h"

@class ADRect;
@class ADView;
@class ASSnackbarLayoutImpl;
@class ASWidgetAttribute;
@class IOSIntArray;
@class IOSObjectArray;
@protocol ASIWidget;
@protocol JavaUtilList;

@interface ASSnackbarLayoutImpl_SnackbarLayoutExt : ADXSnackbar_SnackbarLayout < ASILifeCycleDecorator, ASIMaxDimension >

#pragma mark Public

- (instancetype)initWithASSnackbarLayoutImpl:(ASSnackbarLayoutImpl *)outer$;

- (void)drawableStateChanged;

- (void)executeWithNSString:(NSString *)method
          withNSObjectArray:(IOSObjectArray *)canvas;

- (id)getAttributeWithASWidgetAttribute:(ASWidgetAttribute *)widgetAttribute;

- (void)getLocationOnScreenWithIntArray:(IOSIntArray *)appScreenLocation;

- (jint)getMaxHeight;

- (jint)getMaxWidth;

- (id<JavaUtilList>)getMethods;

- (id<ASIWidget>)getWidget;

- (void)getWindowVisibleDisplayFrameWithADRect:(ADRect *)displayFrame;

- (ADView *)inflateViewWithNSString:(NSString *)layout;

- (void)initialized OBJC_METHOD_FAMILY_NONE;

- (id<ASILifeCycleDecorator>)newInstanceWithASIWidget:(id<ASIWidget>)widget OBJC_METHOD_FAMILY_NONE;

- (void)offsetLeftAndRightWithInt:(jint)offset;

- (void)offsetTopAndBottomWithInt:(jint)offset;

- (void)onMeasureWithInt:(jint)widthMeasureSpec
                 withInt:(jint)heightMeasureSpec;

- (void)remeasure;

- (void)removeFromParent;

- (void)setAttributeWithASWidgetAttribute:(ASWidgetAttribute *)widgetAttribute
                             withNSString:(NSString *)strValue
                                   withId:(id)objValue;

- (void)setMaxHeightWithInt:(jint)height;

- (void)setMaxWidthWithInt:(jint)width;

- (void)setMyAttributeWithNSString:(NSString *)name
                            withId:(id)value;

- (void)setState0WithId:(id)value;

- (void)setState1WithId:(id)value;

- (void)setState2WithId:(id)value;

- (void)setState3WithId:(id)value;

- (void)setState4WithId:(id)value;

- (void)setVisibilityWithInt:(jint)visibility;

- (void)state0;

- (void)state1;

- (void)state2;

- (void)state3;

- (void)state4;

- (void)stateNo;

- (void)stateYes;

- (void)updateMeasuredDimensionWithInt:(jint)width
                               withInt:(jint)height;

#pragma mark Protected

- (void)onLayoutWithBoolean:(jboolean)changed
                    withInt:(jint)l
                    withInt:(jint)t
                    withInt:(jint)r
                    withInt:(jint)b;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASSnackbarLayoutImpl_SnackbarLayoutExt)

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_SnackbarLayoutExt_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl_SnackbarLayoutExt *self, ASSnackbarLayoutImpl *outer$);

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutExt *new_ASSnackbarLayoutImpl_SnackbarLayoutExt_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutExt *create_ASSnackbarLayoutImpl_SnackbarLayoutExt_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASSnackbarLayoutImpl_SnackbarLayoutExt)

#endif

#if !defined (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder_) && (INCLUDE_ALL_SnackbarLayoutImpl || defined(INCLUDE_ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder))
#define ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandBuilder 1
#include "ViewGroupImpl.h"

@class ASSnackbarLayoutImpl;

@interface ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder : ASViewGroupImpl_ViewGroupCommandBuilder

#pragma mark Public

- (instancetype)initWithASSnackbarLayoutImpl:(ASSnackbarLayoutImpl *)outer$;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)addAllModelWithId:(id)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)addModelByIndexWithId:(id)arg0
                                                                      withId:(id)arg1;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)addModelWithId:(id)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)animatorXmlWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)endAnimator;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)executeWithBoolean:(jboolean)setter;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)invalidate;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)notifyDataSetChangedWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)refreshUiFromModelWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)removeModelAtIndexWithInt:(jint)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)removeModelByIdWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)requestLayout;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)reset;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setAddStatesFromChildrenWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setAlphaWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setAsDragSourceWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setAttributeUnderTestWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setBackgroundRepeatWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setBackgroundTintModeWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setBackgroundTintWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setBackgroundWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setChildXmlWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setClickableWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setClipChildrenWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setClipToPaddingWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setContentDescriptionWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setCustomErrorMessageKeysWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setCustomErrorMessageValuesWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setDuplicateParentStateWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setElevationWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setEnabledWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setErrorStyleWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setFocusableWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setForegroundGravityWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setForegroundRepeatWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setForegroundTintModeWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setForegroundTintWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setForegroundWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIdWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setInvalidateOnFrameChangeWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAccessibilityHintWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAccessibilityIgnoresInvertColorsWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAccessibilityLabelWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAccessibilityTraitsWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAccessibilityValueWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAlphaWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosAutoresizesSubviewsWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosBackgroundColorWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosClearsContextBeforeDrawingWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosClipsToBoundsWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosContentScaleFactorWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosInsetsLayoutMarginsFromSafeAreaWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosIsAccessibilityElementWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosIsExclusiveTouchWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosIsHiddenWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosIsMultipleTouchEnabledWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosIsOpaqueWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosIsUserInteractionEnabledWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosLargeContentImageWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosLargeContentTitleWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosLayerBorderColorWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosLayerBorderWidthWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosLayerCornerRadiusWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosLayerMasksToBoundsWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosPreservesSuperviewLayoutMarginsWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosRestorationIdentifierWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosScalesLargeContentImageWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosShowsLargeContentViewerWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosTagWithInt:(jint)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosTintColorWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setIosTranslatesAutoresizingMaskIntoConstraintsWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setKeepScreenOnWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setLayoutDirectionWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setLayoutModeWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setListitemWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setLongClickableWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setMaxHeightWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setMaxWidthWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setMinHeightWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setMinWidthWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelDescPathWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelForWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelIdPathWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelParamWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelPojoToUiParamsWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelPojoToUiWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelSyncEventsWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelUiToPojoEventIdsWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setModelUiToPojoWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnAnimationCancelWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnAnimationEndWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnAnimationRepeatWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnAnimationStartWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnChildViewAddedWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnChildViewRemovedWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnClickWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnDragWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnKeyWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnLongClickWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnSwipedWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOnTouchWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setOutsideTouchableWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingBottomWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingEndWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingHorizontalWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingLeftWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingRightWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingStartWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingTopWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingVerticalWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setPaddingWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setRotationWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setRotationXWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setRotationYWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setScaleXWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setScaleYWithFloat:(jfloat)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setSelectedWithBoolean:(jboolean)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setStyleWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTextAlignmentWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTextDirectionWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTransformPivotXWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTransformPivotYWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTranslationXWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTranslationYWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setTranslationZWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_maxlengthWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_maxWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_minlengthWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_minWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_patternWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_requiredWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setV_typeWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setValidationErrorDisplayTypeWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setValidationWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setVisibilityWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)setZIndexWithInt:(jint)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)startAnimator;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetAddStatesFromChildren;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetAlpha;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetBackground;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetBackgroundTint;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetBackgroundTintMode;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetClickable;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetClipChildren;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetClipToPadding;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetContentDescription;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetDuplicateParentState;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetEnabled;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetFocusable;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetForeground;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetForegroundGravity;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetForegroundTint;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetForegroundTintMode;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetId;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAccessibilityHint;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAccessibilityIgnoresInvertColors;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAccessibilityLabel;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAccessibilityTraits;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAccessibilityValue;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAlpha;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosAutoresizesSubviews;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosBackgroundColor;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosClearsContextBeforeDrawing;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosClipsToBounds;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosContentScaleFactor;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosInsetsLayoutMarginsFromSafeArea;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsAccessibilityElement;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsExclusiveTouch;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsFocused;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsHidden;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsMultipleTouchEnabled;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsOpaque;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosIsUserInteractionEnabled;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosLargeContentImage;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosLargeContentTitle;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosPreservesSuperviewLayoutMargins;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosRestorationIdentifier;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosScalesLargeContentImage;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosShowsLargeContentViewer;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosTag;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosTintColor;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetIosTranslatesAutoresizingMaskIntoConstraints;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetKeepScreenOn;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetLayoutDirection;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetLayoutMode;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetLongClickable;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetMaxHeight;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetMaxWidth;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetMinHeight;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetMinWidth;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetModelDescPath;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetModelIdPath;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetModelParam;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetModelPojoToUi;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetModelSyncEvents;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetModelUiToPojo;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetPaddingBottom;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetPaddingEnd;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetPaddingLeft;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetPaddingRight;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetPaddingStart;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetPaddingTop;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetRotation;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetRotationX;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetRotationY;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetScaleX;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetScaleY;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetSelected;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTextAlignment;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTextDirection;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTransformPivotX;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTransformPivotY;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTranslationX;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTranslationY;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetTranslationZ;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetValidateForm;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)tryGetVisibility;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)updateModelDataWithNSString:(NSString *)arg0
                                                                            withId:(id)arg1;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *)validateFormWithNSString:(NSString *)arg0;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder)

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *self, ASSnackbarLayoutImpl *outer$);

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *new_ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder *create_ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASSnackbarLayoutImpl_SnackbarLayoutCommandBuilder)

#endif

#if !defined (ASSnackbarLayoutImpl_SnackbarLayoutBean_) && (INCLUDE_ALL_SnackbarLayoutImpl || defined(INCLUDE_ASSnackbarLayoutImpl_SnackbarLayoutBean))
#define ASSnackbarLayoutImpl_SnackbarLayoutBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupBean 1
#include "ViewGroupImpl.h"

@class ASSnackbarLayoutImpl;
@protocol ASIWidget;

@interface ASSnackbarLayoutImpl_SnackbarLayoutBean : ASViewGroupImpl_ViewGroupBean

#pragma mark Public

- (instancetype)initWithASSnackbarLayoutImpl:(ASSnackbarLayoutImpl *)outer$;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithASIWidget:(id<ASIWidget>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASSnackbarLayoutImpl_SnackbarLayoutBean)

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_SnackbarLayoutBean_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl_SnackbarLayoutBean *self, ASSnackbarLayoutImpl *outer$);

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutBean *new_ASSnackbarLayoutImpl_SnackbarLayoutBean_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutBean *create_ASSnackbarLayoutImpl_SnackbarLayoutBean_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASSnackbarLayoutImpl_SnackbarLayoutBean)

#endif

#if !defined (ASSnackbarLayoutImpl_SnackbarLayoutParamsBean_) && (INCLUDE_ALL_SnackbarLayoutImpl || defined(INCLUDE_ASSnackbarLayoutImpl_SnackbarLayoutParamsBean))
#define ASSnackbarLayoutImpl_SnackbarLayoutParamsBean_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupParamsBean 1
#include "ViewGroupImpl.h"

@class ASSnackbarLayoutImpl;
@protocol ASIWidget;

@interface ASSnackbarLayoutImpl_SnackbarLayoutParamsBean : ASViewGroupImpl_ViewGroupParamsBean

#pragma mark Public

- (instancetype)initWithASSnackbarLayoutImpl:(ASSnackbarLayoutImpl *)outer$;

- (id)getLayoutGravityWithASIWidget:(id<ASIWidget>)w;

- (void)setLayoutGravityWithASIWidget:(id<ASIWidget>)w
                         withNSString:(NSString *)value;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASSnackbarLayoutImpl_SnackbarLayoutParamsBean)

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_SnackbarLayoutParamsBean_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl_SnackbarLayoutParamsBean *self, ASSnackbarLayoutImpl *outer$);

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutParamsBean *new_ASSnackbarLayoutImpl_SnackbarLayoutParamsBean_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutParamsBean *create_ASSnackbarLayoutImpl_SnackbarLayoutParamsBean_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASSnackbarLayoutImpl_SnackbarLayoutParamsBean)

#endif

#if !defined (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder_) && (INCLUDE_ALL_SnackbarLayoutImpl || defined(INCLUDE_ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder))
#define ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder_

#define RESTRICT_ViewGroupImpl 1
#define INCLUDE_ASViewGroupImpl_ViewGroupCommandParamsBuilder 1
#include "ViewGroupImpl.h"

@class ASSnackbarLayoutImpl;

@interface ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder : ASViewGroupImpl_ViewGroupCommandParamsBuilder

#pragma mark Public

- (instancetype)initWithASSnackbarLayoutImpl:(ASSnackbarLayoutImpl *)outer$;

- (id)getLayoutGravity;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)reset;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutGravityWithNSString:(NSString *)value;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginBottomWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginEndWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginHorizontalWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginLeftWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginRightWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginStartWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginTopWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginVerticalWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)setLayoutMarginWithNSString:(NSString *)arg0;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutGravity;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutMarginBottom;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutMarginEnd;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutMarginLeft;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutMarginRight;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutMarginStart;

- (ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *)tryGetLayoutMarginTop;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder)

FOUNDATION_EXPORT void ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *self, ASSnackbarLayoutImpl *outer$);

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *new_ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder *create_ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder_initWithASSnackbarLayoutImpl_(ASSnackbarLayoutImpl *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ASSnackbarLayoutImpl_SnackbarLayoutCommandParamsBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_SnackbarLayoutImpl")
