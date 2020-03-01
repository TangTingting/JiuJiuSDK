#import <Foundation/Foundation.h>

@interface JJQueryUtils : NSObject

+ (NSString *)queryStringFromParameters:(NSDictionary *)params;
+ (NSDictionary<NSString *, NSString *> *)parametersFromQueryString:(NSString *)queryString;

@end
