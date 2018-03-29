//
//  MADEngine.h
//  MADCore
//
//  Created by JustinLu on 9/13/17.
//  Copyright © 2017 Chengming Lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MADEngine : NSObject

typedef void (^MADEngineFunction)(NSDictionary *params);

+ (void)registerModule:(NSString *)name withController:(Class)vc;
+ (void)registerModule:(NSString *)name withFunction:(MADEngineFunction)func;
+ (void)initEnvironment;
+ (void)setNavigationController:(id)navigationcontroller;
+ (id)getNavigationController;
+ (id)getRootViewController;
+ (void)startup;
+ (void)launchStage:(NSString*)stageid;

@end
