//
//  ViewController.h
//  xmlparsing
//
//  Created by Feby Varghese on 7/17/12.
//  Copyright (c) 2012 febycv. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"
#import "tweetobject.h"
#import "parseobject.h"

@interface ViewController : UIViewController 

@property (nonatomic,retain) UIImageView *image;

@property (nonatomic,retain) UITableView *twitterview;

-(NSString *)stringFromStatus:(NetworkStatus) status;

@end
