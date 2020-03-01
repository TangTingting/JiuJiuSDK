#import <Foundation/Foundation.h>

@protocol JJLoginResult;
@protocol JJObserver;

@interface JJObserversController : NSObject

- (void)addObserver:(id<JJObserver>)observer;
- (void)removeObserver:(id<JJObserver>)observer;

- (void)notifyLoginDidFinishWithResult:(id<JJLoginResult>)result;
- (void)notifyLoginDidFinishWithError:(NSError *)error;

@end
