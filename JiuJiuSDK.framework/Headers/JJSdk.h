#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol JJObserver;
@class JJPayParam;

@interface JJSdk : NSObject

/** Shared instance of JJSdk. */
@property (class, strong, readonly) JJSdk *shared;

/** Retrieve the current iOS SDK version. */
@property (class, copy, readonly) NSString *sdkVersion;

@property (nonatomic, strong) NSString *appScheme;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

- (BOOL)activateWithAppId:(NSString *)appId error:(NSError *__autoreleasing *)error;

- (BOOL)processUserActivity:(NSUserActivity *)userActivity NS_AVAILABLE_IOS(8_0);

- (BOOL)handleOpenURL:(NSURL *)url sourceApplication:(nullable NSString *)sourceApplication;

- (BOOL)isUrlRelatedToSdk:(NSURL *)url;

- (void)addObserver:(id<JJObserver>)observer NS_SWIFT_NAME(add(observer:));

- (void)removeObserver:(id<JJObserver>)observer NS_SWIFT_NAME(remove(observer:));

- (void)authorize;

- (void)authorizeWithUid:(long long)uid login:(nullable NSString *)login;

- (void)payWithParam:(JJPayParam *)payParam;

/** Clears all saved data. */
- (void)logout;

@end

NS_ASSUME_NONNULL_END
