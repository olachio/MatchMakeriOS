//
//  MedianEventsManager.h
//  GoNativeCore
//
//  Created by bld on 02.21.24.
//

#import "GNJavascriptRunner.h"

NS_ASSUME_NONNULL_BEGIN

@interface MedianEventsManager : NSObject
+ (MedianEventsManager *)shared;
- (void)handleCallback:(NSString *)callback data:(NSDictionary *)data runner:(id<GNJavascriptRunner>)runner;
- (void)subscribeCallback:(NSString *)callback runner:(id<GNJavascriptRunner>)runner;
@end

NS_ASSUME_NONNULL_END
