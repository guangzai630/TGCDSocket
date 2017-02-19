//
//  HHAppContext.h
//  HeiHuaBaiHua
//
//  Created by HeiHuaBaiHua on 16/5/31.
//  Copyright © 2016年 HeiHuaBaiHua. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Reachability.h"
@interface HHAppContext : NSObject

+ (instancetype)sharedInstance;

- (BOOL)isReachable;
- (void)startMonitoring;
@end
