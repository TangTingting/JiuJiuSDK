#import <Foundation/Foundation.h>

@protocol JJStorage;

@interface JJStorageFactory : NSObject

@property (class, strong, readonly) id<JJStorage> loginResultStorage;
@property (class, strong, readonly) id<JJStorage> pkceStorage;
@property (class, strong, readonly) id<JJStorage> statesStorage;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end
