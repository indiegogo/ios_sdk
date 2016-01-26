//
//  ADJFailureResponseData.h
//  adjust
//
//  Created by Pedro Filipe on 05/01/16.
//  Copyright © 2016 adjust GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADJActivityKind.h"

@interface ADJFailureResponseData : NSObject <NSCopying>

// activity type of the tracked package. For now only "event" is tracked.
@property (nonatomic, copy) NSString * activityKindString;

// error message from the server or the sdk.
@property (nonatomic, copy) NSString * message;

// timeStamp from the server.
@property (nonatomic, copy) NSString * timeStamp;

// adid of the device.
@property (nonatomic, copy) NSString * adid;

// event token of the tracked event.
@property (nonatomic, copy) NSString * eventToken;

// indicates if the package will be retried to be send later
@property (nonatomic, assign) BOOL willRetry;

// the server response in json format
@property (nonatomic, retain) NSDictionary *jsonResponse;

+ (ADJFailureResponseData *)failureResponseData;
- (id)init;

@end
