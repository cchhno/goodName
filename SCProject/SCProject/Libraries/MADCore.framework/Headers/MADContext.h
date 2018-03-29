//
//  MADContext.h
//  MADCore
//
//  Created by JustinLu on 9/14/17.
//  Copyright © 2017 Chengming Lu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MADContext : NSObject {
    id rawContext;
}

@property (nonatomic, strong) id rawContext;

- (id)initWithWorkerContext:(id)ctx;
- (void)next;
- (void)finish;
- (NSString*)getParam:(NSString*)key;
- (void)launchStage:(NSString*)stageid;
- (void)replaceStage:(NSString*)stageid;
- (NSString*)secureGetString:(NSString*)key;
- (void)secureSetString:(NSString*)key value:(NSString*)value;
- (NSString*)sessionGetString:(NSString*)key;
- (void)sessionSetString:(NSString*)key value:(NSString*)value;
- (int)setToken:(NSString*)token;
- (void)clearToken;
- (int)checkToken;
- (NSString*)getTokenClaimString:(NSString*)key;
- (NSString*)getTimestamp;
- (void)setTimestamp:(NSString*)timestr;
- (NSString*)envGet:(NSString*)key;
- (int)handleQRCode:(NSString*)url;
- (NSString*)hashSHA256:(NSString*)plaintext;
- (NSString*)getMappedFileUrl:(NSString*)file;

@end
