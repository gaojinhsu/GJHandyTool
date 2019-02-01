//
//  UIView+HandyLayout.h
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/1/31.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (HandyLayout)

- (void)setX:(CGFloat)x;
- (CGFloat)x;

- (void)setY:(CGFloat)y;
- (CGFloat)y;

- (void)setHeight:(CGFloat)height;
- (CGFloat)height;

- (void)setWidth:(CGFloat)width;
- (CGFloat)width;

- (void)setSize:(CGSize)size;
- (CGSize)size;

- (void)setOrigin:(CGPoint)origin;
- (CGPoint)origin;

- (void)setLeft:(CGFloat)left;
- (CGFloat)left;

- (void)setRight:(CGFloat)right;
- (CGFloat)right;

- (void)setTop:(CGFloat)top;
- (CGFloat)top;

- (void)setBottom:(CGFloat)bottom;
- (CGFloat)bottom;


@end

NS_ASSUME_NONNULL_END
