//
//  AppDelegate.h
//  xmlparsing
//
//  Created by Feby Varghese on 7/17/12.
//  Copyright (c) 2012 febycv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"

@class ViewController;

@interface AppDelegate : UIResponder <UIApplicationDelegate>
{
    UINavigationController *navigation;
}

@property (nonatomic, retain)UINavigationController *navigation;

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) ViewController *viewController;

@end
