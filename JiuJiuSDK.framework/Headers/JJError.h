#import <Foundation/Foundation.h>

/** Possible codes for error with domain kJJErrorDomain.
 - .notActivated: JJSdk is not activated.
 - .cancelled: Authorization controller closed by user.
 - .denied: User denied access in permissions page.
 - .invalidClient: AppId authentication failed.
 - .invalidScope: The requested scope is invalid, unknown, or malformed.
 - .other: Other error (error string is in NSLocalizedFailureReasonErrorKey of error user info).
 - .requestError: internal HTTP request error.
 - .requestConnectionError: HTTP internet connection error.
 - .requestSSLError: HTTP SSL error.
 - .requestNetworkError: other HTTP error.
 - .requestResponseError: bad response for HTTP request (not NSHTTPURLResponse or status code not in 200..299).
 - .requestEmptyDataError: empty data returns on some HTTP request.
 - .requestTokenError: bad answer for token request.
 - .requestJwtError: bad answer for jwt request.
 - .requestJwtInternalError: jwt request internal error.
 - .invalidState: Invalid state parameter.
 - .invalidCode: Invalid authorization code.
 */
typedef NS_ENUM(NSInteger, JJErrorCode) {
    JJErrorCodeNotActivated,
    JJErrorCodeCancelled,
    JJErrorCodeDenied,
    JJErrorCodeInvalidClient,
    JJErrorCodeInvalidScope,
    JJErrorCodeOther,
    JJErrorCodeRequestError,
    JJErrorCodeRequestConnectionError,
    JJErrorCodeRequestSSLError,
    JJErrorCodeRequestNetworkError,
    JJErrorCodeRequestResponseError,
    JJErrorCodeRequestEmptyDataError,
    JJErrorCodeRequestTokenError,
    JJErrorCodeRequestJwtError,
    JJErrorCodeRequestJwtInternalError,
    JJErrorCodeInvalidState,
    JJErrorCodeInvalidCode,
};

/** Possible codes for error with domain kJJActivationErrorDomain.
 - .noAppId: appId is nil
 - .noQuerySchemeInInfoPList: No scheme in LSApplicationQueriesSchemes in Info.plist
 - .noSchemeInInfoPList: No scheme in CFBundleURLTypes in Info.plist
 */
typedef NS_ENUM(NSInteger, JJActivationErrorCode) {
    JJActivationErrorCodeNoAppId,
    JJActivationErrorCodeNoQuerySchemeInInfoPList,
    JJActivationErrorCodeNoSchemeInInfoPList,
};

/** Domain for JJSdk errors */
extern NSString *const kJJErrorDomain;
/** Domain for errors returned by [JJSdk activateWithAppId:] */
extern NSString *const kJJActivationErrorDomain;
