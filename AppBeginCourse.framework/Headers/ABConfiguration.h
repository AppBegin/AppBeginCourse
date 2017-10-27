//
//  ABConfiguration.h
//  ABCourse-SDK-iOS
//
//  Created by Jackie Qin on 2017/9/4.
//  Copyright © 2017年 Appbegin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ABConfiguration : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, copy, readonly) NSString *applicationId;
@property (nonatomic, copy, readonly) NSString *applicationKey;
//设定服务器url(包含版本号)
@property (nonatomic, copy, readonly) NSString *baseUrl;

@property (nonatomic, copy, readonly) NSString *accessToken;
@property (nonatomic, copy, readonly) NSString *tokenType;
@property (nonatomic, assign, readonly) NSTimeInterval expired;
@end
