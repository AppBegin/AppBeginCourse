//
//  ABConstants.h
//  ABCourse-SDK-iOS
//
//  Created by Jackie Qin on 2017/9/4.
//  Copyright © 2017年 Appbegin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^ABFailureBlock)(NSError *error);
typedef void (^ABSuccessBlock)();
//typedef void (^ABFailureWithMsgBlock)(NSString *errorMsg);
typedef void (^ABArraySuccessBlock)(NSArray *objectArray);
typedef void (^ABObjectSuccessBlock)(NSDictionary *object);
