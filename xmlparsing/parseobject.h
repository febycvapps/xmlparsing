//
//  parseobject.h
//  xmlparsing
//
//  Created by Feby Varghese on 7/17/12.
//  Copyright (c) 2012 febycv. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "tweetobject.h"

@interface parseobject : NSObject <NSXMLParserDelegate>

@property (strong, readonly) NSMutableArray *tweets;

-(id) loadXMLByURL:(NSString *)urlString;

@end
