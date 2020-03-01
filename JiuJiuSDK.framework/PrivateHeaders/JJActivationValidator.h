#import <Foundation/Foundation.h>

@interface JJActivationValidator : NSObject

+ (NSError *)validateActivationWithAppId:(NSString *)appId;

@end
