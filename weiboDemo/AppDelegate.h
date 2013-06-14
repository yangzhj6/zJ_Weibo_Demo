//
//  AppDelegate.h
//  weiboDemo
//
//  Created by 智健 杨 on 13-6-6.
//  Copyright (c) 2013年 sysu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;
@class SinaWeibo;
@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,retain) SinaWeibo *sinaweibo;
@property (nonatomic,retain) MainViewController *mainController;

@end
