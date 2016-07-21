/*	NSAutoreleasePool.h
	Copyright (c) 1994-2015, Apple Inc. All rights reserved.
*/

#import <Foundation/NSObject.h>

NS_ASSUME_NONNULL_BEGIN

//自动释放池
NS_AUTOMATED_REFCOUNT_UNAVAILABLE
@interface NSAutoreleasePool : NSObject {
@private
    void	*_token;
    void	*_reserved3;
    void	*_reserved2;
    void	*_reserved;
}

+ (void)addObject:(id)anObject;

- (void)addObject:(id)anObject;

- (void)drain;

@end

NS_ASSUME_NONNULL_END
