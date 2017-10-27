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

/**
 *
 *根据CourseId获取单个课程
 */
- (void)getCourseInfoById:(NSUInteger)objId
                onSuccess:(ABObjectSuccessBlock)successBlock
                onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *获取课程的所有课件
 */
- (void)getCoursewaresByCourseId:(NSInteger)courseId
                       onSuccess:(ABArraySuccessBlock)successBlock
                       onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *搜索课程
 *
 */
- (void)getCoursesByParam:(NSDictionary *)param
                     page:(NSInteger)page
                 pageSize:(NSInteger)pageSize
                onSuccess:(ABArraySuccessBlock)successBlock
                onFailure:(ABFailureBlock)failureBlock;
/**
 *
 *推荐课程
 *
 */
- (void)getRecommendCourses:(NSInteger)page
                   pageSize:(NSInteger)pageSize
                  onSuccess:(ABArraySuccessBlock)successBlock
                  onFailure:(ABFailureBlock)failureBlock;
/**
 *
 *收藏课程
 *
 */
- (void)getMyFavoriteCourses:(NSInteger)page
                    pageSize:(NSInteger)pageSize
                   onSuccess:(ABArraySuccessBlock)successBlock
                   onFailure:(ABFailureBlock)failureBlock;
/**
 *
 *我的课程
 *
 */
- (void)getMyCourses:(NSInteger)page
            pageSize:(NSInteger)pageSize
           onSuccess:(ABArraySuccessBlock)successBlock
           onFailure:(ABFailureBlock)failureBlock;
/**
 *
 *添加收藏课程
 *
 */
- (void)addFavoriteCourse:(NSInteger)courseId
                onSuccess:(ABSuccessBlock)successBlock
                onFailure:(ABFailureBlock)failureBlock;

/**
 *
 *取消收藏课程
 *
 */
- (void)cancelFavoriteCourse:(NSInteger)courseId
                   onSuccess:(ABSuccessBlock)successBlock
                   onFailure:(ABFailureBlock)failureBlock;

@end
