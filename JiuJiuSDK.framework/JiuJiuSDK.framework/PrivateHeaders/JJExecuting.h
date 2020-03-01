#import <Foundation/Foundation.h>

@protocol JJExecuting <NSObject>

- (void)execute:(dispatch_block_t)block;

@end
