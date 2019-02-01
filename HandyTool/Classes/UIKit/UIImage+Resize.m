//
//  UIImage+Resize.m
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/2/1.
//

#import "UIImage+Resize.h"

@implementation UIImage (Resize)

- (UIImage *)resizeToRect:(CGRect)rect {
    CGFloat scale = self.scale;
    CGRect cropRect = (CGRect){CGRectGetMinX(rect) * scale,
        CGRectGetMinY(rect) * scale,
        CGRectGetWidth(rect) * scale,
        CGRectGetHeight(rect) * scale};
    
    CGImageRef imageRef = CGImageCreateWithImageInRect([self CGImage], cropRect);
    UIImage *cropped = [UIImage imageWithCGImage:imageRef scale:self.scale orientation:self.imageOrientation];
    CGImageRelease(imageRef);
    return cropped;
}

@end
