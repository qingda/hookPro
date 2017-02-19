//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLConnection.h"

@class NSError, NSHTTPURLResponse, NSMutableData, NSTimer, NSURLRequest;

@interface wax_http_connection : NSURLConnection
{
    struct lua_State *L;
    NSMutableData *_data;
    NSHTTPURLResponse *_response;
    NSURLRequest *_request;
    NSTimer *_timeoutTimer;
    NSError *_error;
    double _timeout;
    int _format;
    _Bool _finished;
    _Bool _canceled;
}

@property(nonatomic) int format; // @synthesize format=_format;
@property(retain, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
- (void)callLuaCallback;
- (void)callLuaProgressCallback;
- (_Bool)callLuaAuthCallback:(id)arg1;
- (void)callRedirectCallback:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)cancel;
- (void)start;
- (void)timeoutHack;
- (id)initWithRequest:(id)arg1 timeout:(double)arg2 luaState:(struct lua_State *)arg3;
- (void)dealloc;

@end
