//
//  MainViewController.h
//  weiboDemo
//
//  Created by zJ on 13-6-7.
//  Copyright (c) 2013年 sysu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SinaWeibo.h"

@interface MainViewController : UITabBarController<SinaWeiboDelegate>{
    UIView *_tabBarView;
}

@end
