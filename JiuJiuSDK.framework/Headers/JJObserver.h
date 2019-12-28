NS_ASSUME_NONNULL_BEGIN

@protocol JJLoginResult;

@protocol JJObserver <NSObject>

- (void)loginDidFinishWithResult:(id<JJLoginResult>)result;

- (void)loginDidFinishWithError:(NSError *)error;

@end

NS_ASSUME_NONNULL_END
