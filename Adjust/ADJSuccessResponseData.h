//
//  ADJSuccessResponseData.h
//  adjust
//
//  Created by Pedro Filipe on 05/01/16.
//  Copyright © 2016 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADJActivityKind.h"

@interface ADJSuccessResponseData : NSObject <NSCopying>

// activity type of the tracked package. For now only "event" is tracked.
@property (nonatomic, copy) NSString * activityKindString;

// message from the server.
@property (nonatomic, copy) NSString * message;

// timeStamp from the server.
@property (nonatomic, copy) NSString * timeStamp;

// adid of the device.
@property (nonatomic, copy) NSString * adid;

// event token of the tracked event.
@property (nonatomic, copy) NSString * eventToken;

// the server response in json format
@property (nonatomic, retain) NSDictionary *jsonResponse;

+ (ADJSuccessResponseData *)successResponseData;
- (id)init;

@end
