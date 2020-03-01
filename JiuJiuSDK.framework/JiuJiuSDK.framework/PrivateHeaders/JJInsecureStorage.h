#import "JJStorage.h"

@interface JJInsecureStorage : NSObject <JJStorage>

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithKey:(NSString *)key;

@end
