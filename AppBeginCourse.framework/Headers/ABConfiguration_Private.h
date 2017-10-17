//
//  ABConfiguration_Private.h
//  ABCourse-SDK-iOS
//
//  Created by Jackie Qin on 2017/9/4.
//  Copyright © 2017年 Appbegin. All rights reserved.
//

@interface ABConfiguration ()

@property (nonatomic, copy, readwrite) NSString *applicationId;
@property (nonatomic, copy, readwrite) NSString *applicationKey;
@property (nonatomic, copy, readwrite) NSString *baseUrl;

@property (nonatomic, copy, readwrite) NSString *accessToken;
@property (nonatomic, copy, readwrite) NSString *tokenType;
@end
