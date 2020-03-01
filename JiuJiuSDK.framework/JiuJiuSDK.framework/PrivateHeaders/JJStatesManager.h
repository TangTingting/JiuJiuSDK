#import <Foundation/Foundation.h>

@protocol JJStorage;

@interface JJStatesManager : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithStorage:(id<JJStorage>)storage;

- (NSString *)generateNewState;
- (BOOL)isValidState:(NSString *)state;
- (void)deleteState:(NSString *)state;
- (void)deleteAllStates;

@end
