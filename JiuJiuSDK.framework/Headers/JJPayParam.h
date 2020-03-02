//
//  JJPayParam.h
//  Pods
//
//  Created by HE JIN on 2020/2/16.
//

#import <Foundation/Foundation.h>

static NSString *alipayScheme;

@interface JJPayParam : NSObject

@property (nonatomic, copy, readonly) NSString *appId;
@property (nonatomic, copy, readonly) NSString *appKey;
@property (nonatomic, copy, readonly) NSString *tokenHeader;
@property (nonatomic, copy, readonly) NSString *productId;
@property (nonatomic, assign, readonly) double amount;

@property (nonatomic, assign) signed int count;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *gameZoneId;
@property (nonatomic, copy) NSString *gameRoleId;
@property (nonatomic, copy) NSString *gameRoleName;
@property (nonatomic, copy) NSString *uid;



+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithAppId:(NSString *)appId
                        appKey:(NSString *)appKey
                         tokenHeader:(NSString *)tokenHeader
                          amount:(double)amount
                        productId:(NSString *)productId;

@end
