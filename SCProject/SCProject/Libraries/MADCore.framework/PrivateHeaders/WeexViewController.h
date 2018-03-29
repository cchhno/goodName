//
//  WeexViewController.h
//  MADCore
//
//  Created by JustinLu on 9/18/17.
//  Copyright © 2017 Chengming Lu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Worker/Worker.h>
#import "MADContext.h"

@interface WeexViewController : UIViewController {
    MADContext *ctx;
}

@property (nonatomic, strong) MADContext *ctx;
//@property (nonatomic, strong) NSString *script;
@property (nonatomic, strong) NSURL *url;

//@property (nonatomic, strong) NSString *source;

@end
