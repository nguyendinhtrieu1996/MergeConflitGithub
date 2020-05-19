//
//  ViewController.m
//  MergeConflitGithub
//
//  Created by LAP12852 on 7/11/19.
//  Copyright © 2019 LAP12852. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    NSLog(@"Trieund2");
    
    NSLog(@"Trieund2 >> 1");
    
}

- (void)fetchProfileOfUser:(NSString *)userId
                  userName:(NSString *)userName
               displayName:(NSString *)displayName
#if ENABLE_SWITCH_ACCOUNT
               isSendParam:(BOOL)isSendParam
#endif
{
    
}

@end
