/**
 * Copyright (c) 2015-present, Facebook, Inc.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <UIKit/UIKit.h>

//test stg pro
//static NSString *ENV = @"stg";

//极光推送KEY
#import <RCTJPushModule.h>
#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

static NSString *jpushAppKey = @"3735a69fa1e4f9071646a2ba";       //填写appkey
static NSString *channel = nil;                                   //填写channel   一般为nil
static BOOL isProduction = false;                                 //填写isProdurion  平时测试时为false ，生产时填写true

//百度KEY
static NSString *baiduKey = @"h1rCt0jEOeqvecUztczK7XYa6FF7dlG6";
static NSString *baiduKeyPro = @"ELdcqcd2sG39LwKX2Msuamx2l0mR5yww";

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;

@end
