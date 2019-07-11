//
//  ViewController.h
//  MergeConflitGithub
//
//  Created by LAP12852 on 7/11/19.
//  Copyright © 2019 LAP12852. All rights reserved.
//

#import <UIKit/UIKit.h>

#define ENABLE_SWITCH_ACCOUNT 1

@interface ViewController : UIViewController

@property (nonatomic) int numberUsers;

@property (nonatomic) NSString *x;

@property (nonatomic) NSString *currentUserId;



@property NSNumber *displayName;
@property NSNumber *fullName;
@property NSNumber *guestUser;

- (void)fetchProfileOfUser:(NSString *)userId
                  userName:(NSString *)userName
               displayName:(NSString *)displayName
#if ENABLE_SWITCH_ACCOUNT
               isSendParam:(BOOL)isSendParam
#endif
        isDeleteAllAccount:(BOOL)isDeleteAllAccount
;

@end

