#import "JJLoginResult.h"

__attribute__((objc_subclassing_restricted))
@interface JJLoginResultModel : NSObject <JJLoginResult>

@property (nonatomic, copy, readonly) NSString *token;
@property (nonatomic, copy, readonly) NSString *type;
@property (nonatomic, copy, readonly) NSString *tokenHeader;
@property (nonatomic, copy, readonly) NSNumber *expireIn;
@property (nonatomic, copy, readonly) NSDictionary *dictionaryRepresentation;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithToken:(NSString *)token type:(NSString *)type expireIn:(NSNumber *)expireIn;
+ (instancetype)modelWithDictionaryRepresentation:(NSDictionary *)dictionary;

@end
