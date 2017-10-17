//
//  ABCourse.h
//  ABCourse-SDK-iOS
//
//  Created by Jackie Qin on 2017/9/4.
//  Copyright © 2017年 Appbegin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABCourse : NSObject

/*!
 Sets the applicationId and clientKey of your application.
 @param applicationId The applicaiton id for your LeanCloud application.
 @param clientKey The client key for your YGCourse application.
 */
+ (void)setApplicationId:(NSString *)applicationId clientKey:(NSString *)clientKey;

+ (void)setAccessToken:(NSString *)accessToken tokenType:(NSString *)tokenType;

/**
 *  get Application Id
 *
 *  @return Application Id
 */
+ (NSString *)getApplicationId;

/**
 *  get Client Key
 *
 *  @return Client Key
 */
+ (NSString *)getClientKey;

/**
 *  get Client Key
 *
 *
 */
+ (void)setBaseURL:(NSString *)url;

/**
 *  get  Key
 *
 *  @return Client Key
 */
+ (NSString *)baseUrl;

@end
