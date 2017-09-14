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
//sdk域名，默认域名为@""
@property (nonatomic, strong) NSString *baseUrl;

@end
