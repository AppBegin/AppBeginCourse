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

/**
 *根据CourseId获取课程图片
 */
- (NSString *)courseImageUrl:(NSInteger)courseId;

/**
 *根据coursewareId获取课件访问地址
 */
- (NSString *)coursewareUrl:(NSInteger)coursewareId;

///**
// *
// *创建课程
// */
//- (void)createCourseWithCourseId:(NSString *)courseId
//                     coursetitle:(NSString *)courseTitle
//               coursedescription:(NSString *)courseDesc
//                       onSuccess:(ABSuccessBlock)successBlock
//                       onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *根据CourseId获取单个课程
 */
- (void)getCourseInfoById:(NSUInteger)objId
                onSuccess:(ABObjectSuccessBlock)successBlock
                onFailure:(ABFailureBlock)failureBlock;

///**
// *
// *获取全部课程
// */
//- (void)getCourseAllListOnSuccess:(ABArraySuccessBlock)successBlock
//                        onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *搜索课程
 *param类型
 */
- (void)searchCourseByParam:(NSDictionary *)param
                  OnSuccess:(ABArraySuccessBlock)successBlock
                  onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *获取课程的所有课件
 */
- (void)getCoursewareByCourseId:(NSInteger)courseId
                      onSuccess:(ABArraySuccessBlock)successBlock
                      onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *搜索课程
 *
 */
- (void)getCourseListByParam:(NSDictionary *)param
                        page:(NSInteger)page
                    pageSize:(NSInteger)pageSize
                   onSuccess:(ABArraySuccessBlock)successBlock
                   onFailure:(ABFailureBlock)failureBlock;

@end
