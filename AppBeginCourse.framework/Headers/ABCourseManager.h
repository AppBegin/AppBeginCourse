//
//  ABCourseManager.h
//  ABCourse-SDK-iOS
//
//  Created by Jackie Qin on 2017/9/4.
//  Copyright © 2017年 Appbegin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ABConstants.h"

@interface ABCourseManager : NSObject

+ (instancetype)sharedInstance;

- (void)createCourseWithCourseId:(NSString *)courseId
                     coursetitle:(NSString *)courseTitle
               coursedescription:(NSString *)courseDesc
                       onSuccess:(ABSuccessBlock)successBlock
                       onFailure:(ABFailureBlock)failureBlock;

- (void)getCourseById:(NSUInteger)objId
            onSuccess:(ABObjectSuccessBlock)successBlock
            onFailure:(ABFailureBlock)failureBlock;


/**
 *
 *You can use the limit and skip parameters for pagination.limit defaults to 100. In the old Parse hosted backend, the maximum limit was 1,000, but Parse Server removed that constraint. Thus, to retrieve 200 objects after skipping the first 400:
 *
 */

- (void)getCourseListWithSkip:(NSInteger)skip
                   limit:(NSInteger)limit
                  onSuccess:(ABArraySuccessBlock)successBlock
                  onFailure:(ABFailureBlock)failureBlock;

- (void)testGitHub;

@end
