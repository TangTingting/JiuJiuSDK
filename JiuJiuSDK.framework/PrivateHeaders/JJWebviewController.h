#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>

#import <JavaScriptCore/JavaScriptCore.h>

@interface JJWebViewController : UIViewController

@property(nonatomic,copy)NSString * httpStr;

@property(nonatomic,strong)WKWebView *webView;

@end
