#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JJLoginResult <NSObject>

@property (nonatomic, copy, readonly) NSString *token;

@property (nonatomic, copy, readonly) NSString *type;

@property (nonatomic, copy, readonly) NSString *tokenHeader;

@property (nonatomic, copy, readonly) NSNumber *expireIn;

@end

NS_ASSUME_NONNULL_END
