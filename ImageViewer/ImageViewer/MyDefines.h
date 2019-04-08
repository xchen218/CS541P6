//
//  MyDefines.h
//  auto-jd
//
//  Created by Xiang on 2019/4/5.
//  Copyright © 2019年 xchen218. All rights reserved.
//
#import "AppDelegate.h"

#define SCREEN_WIDTH [[UIScreen mainScreen] bounds].size.width
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define SCREEN_BOUNDS [[UIScreen mainScreen] bounds]


#define kInitKeyword @"SearchWordDefult"

#define appDelegate  ((AppDelegate *)[[UIApplication sharedApplication] delegate])


#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

#define UIColorFromRGBA(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF000000) >> 24))/255.0 green:((float)((rgbValue & 0xFF0000) >> 16))/255.0 blue:((float)((rgbValue & 0xFF00)>> 8))/255.0 alpha:((float)(rgbValue & 0xFF))/255.0]
#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:A]

#define Nav_Color RGBA_COLOR(71.0,141.0,244.0,1)
#define viewBGColor RGBA_COLOR(238,241,245,1)

#define  btnCornerRadius 5.0f

#define MENU_HEIGHT 40

#define GGBlueLight UIColorFromRGBA(0xffcfdced)
//iPhone

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define IS_RETINA ([[UIScreen mainScreen] scale] >= 2.0)

#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4S_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)
#define IS_IOS10 ([[[UIDevice currentDevice]systemVersion]floatValue] >= 10.0)

#define timesOf320  (MAX(1, (SCREEN_WIDTH/320)*1))

#define GetMainQueue(condition)  \
if (![[NSThread currentThread] isMainThread]) {    \
dispatch_sync(dispatch_get_main_queue(), ^{    \
condition   \
});         \
}               \
else            \
{               \
condition   \
}               \

#define CFRUNLOOP_SEM_WAIT() \
CFRunLoopSourceContext context = {0, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL};\
CFRunLoopSourceRef source = CFRunLoopSourceCreate(kCFAllocatorDefault, 0, &context);\
CFRunLoopAddSource(CFRunLoopGetCurrent(), source, kCFRunLoopDefaultMode);\
CFRunLoopRun(); \
CFRunLoopRemoveSource(CFRunLoopGetCurrent(), source, kCFRunLoopDefaultMode);\
CFRelease(source);\

#define CFRUNLOOP_SEM_SIGNAL() \
if(_currentLoop){CFRunLoopStop(_currentLoop);}\

#define DisPatchGetMainQueueBegin()\
dispatch_async(dispatch_get_main_queue(), ^{    \

#define DisPatchGetMainQueueEnd() \
})\

#define DisPatchGetGlobalQueueBegin()\
dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0ul);\
dispatch_async(queue, ^{\

#define DisPatchGetGlobalQueueEnd()\
})\

#define DisPatchGetGlobalQueue(condition)\
dispatch_queue_t queue = dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0ul);\
dispatch_async(queue, ^{\
condition\
})\

#define configureRunloopFun(condition)\
SEL sel = NSSelectorFromString(@"init");\
IMP imp = [object methodForSelector:sel];\
void (*func)(id, SEL) = (void *)imp;\
func(*condition, sel);\
Ivar ivar = class_getInstanceVariable([self class], "_currentLoop");\
object_setIvar(*condition, ivar, (id)CFRunLoopGetCurrent() );\


#define dispatchDelay(second,block) dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(second * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{block});

#define TextDarkColor UIColorFromRGB(0x494949)
#define TextLightColor UIColorFromRGB(0x9ca7b0)
#define JDRedColor UIColorFromRGB(0xe73c31)
#define JDLightOrange UIColorFromRGB(0xffe9cc)
#define JDDarkOrange UIColorFromRGB(0xff9000)



//keywindow
#define KeyWindow [UIApplication sharedApplication].keyWindow

#define IS_CH_SYMBOL(chr) ((int)(chr)>127)  //判断一个字符是不是中文


#define isNSNull(value) [value isKindOfClass:[NSNull class]]


#define UrlForJPG(url) [url stringByReplacingOccurrencesOfString:@".gif" withString:@".jpg"]




