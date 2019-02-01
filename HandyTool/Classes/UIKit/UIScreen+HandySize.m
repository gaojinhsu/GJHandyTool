//
//  UIScreen+HandySize.m
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/2/1.
//

#import "UIScreen+HandySize.h"

@implementation UIScreen (HandySize)
- (CGFloat)width {
    return [UIScreen mainScreen].bounds.size.width;
}

- (CGFloat)height {
    return [UIScreen mainScreen].bounds.size.height;
}

@end
