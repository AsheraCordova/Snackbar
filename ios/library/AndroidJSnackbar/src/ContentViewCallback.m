//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: D:\Java\git\core-javafx-widget\AndroidJSnackbar\src\main\java\com\google\android\material\snackbar\ContentViewCallback.java
//

#include "ContentViewCallback.h"
#include "J2ObjC_source.h"


@interface ADXContentViewCallback : NSObject

@end

@implementation ADXContentViewCallback

+ (const J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { NULL, "V", 0x401, 0, 1, -1, -1, -1, -1 },
    { NULL, "V", 0x401, 2, 1, -1, -1, -1, -1 },
  };
  #pragma clang diagnostic push
  #pragma clang diagnostic ignored "-Wobjc-multiple-method-names"
  #pragma clang diagnostic ignored "-Wundeclared-selector"
  methods[0].selector = @selector(animateContentInWithInt:withInt:);
  methods[1].selector = @selector(animateContentOutWithInt:withInt:);
  #pragma clang diagnostic pop
  static const void *ptrTable[] = { "animateContentIn", "II", "animateContentOut" };
  static const J2ObjcClassInfo _ADXContentViewCallback = { "ContentViewCallback", "com.google.android.material.snackbar", ptrTable, methods, NULL, 7, 0x609, 2, 0, -1, -1, -1, -1, -1 };
  return &_ADXContentViewCallback;
}

@end

J2OBJC_INTERFACE_TYPE_LITERAL_SOURCE(ADXContentViewCallback)
