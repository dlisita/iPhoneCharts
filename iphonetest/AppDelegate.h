//
//  AppDelegate.h
//  iphonetest
//
//  Created by Dmitry Lisita on 1/17/12.
//  Copyright (c) 2012 Mobiblocks. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITabBarControllerDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UITabBarController *tabBarController;

@end
