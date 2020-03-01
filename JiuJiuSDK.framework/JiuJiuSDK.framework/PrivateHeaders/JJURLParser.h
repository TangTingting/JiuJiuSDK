#import <Foundation/Foundation.h>

@class JJAuthParameters;
@class JJPayParam;

@interface JJURLParser : NSObject

@property (class, copy, readonly) NSString *openURLScheme;
@property (class, copy, readonly) NSString *openURLSchemeUniversalLink;

+ (NSString *)redirectURLSchemeWithAppId:(NSString *)appId;

+ (NSURL *)payURLWithParameters:(JJPayParam *)payParam;
+ (NSURL *)authorizationURLWithParameters:(JJAuthParameters *)parameters;
+ (NSURL *)openURLWithParameters:(JJAuthParameters *)parameters;
+ (NSURL *)openURLUniversalLinkWithParameters:(JJAuthParameters *)parameters;

+ (NSError *)errorFromURL:(NSURL *)url;
+ (NSString *)codeFromURL:(NSURL *)url;
+ (NSString *)stateFromURL:(NSURL *)url;

+ (NSError *)errorFromUniversalLinkURL:(NSURL *)url;
+ (NSString *)tokenFromUniversalLinkURL:(NSURL *)url;
+ (NSString *)typeFromUniversalLinkURL:(NSURL *)url;
+ (NSString *)stateFromUniversalLinkURL:(NSURL *)url;
+ (NSString *)expireInFromUniversalLinkURL:(NSURL *)url;

+ (BOOL)isOpenURL:(NSURL *)url appId:(NSString *)appId;

@end
