//
//  UIColor+HexString.h
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/1/31.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (HexString)


/**
 通过HEX字符 "#00FF00" (#RRGGBB)得到颜色

 @param hexString 格式类似于 "#00FF00"的HEX字符串
 @return UIColor 实例
 */
+ (UIColor *)colorWithHexString:(NSString *)hexString;


/**
 返回一个颜色的HEX字符

 @return 格式类似于 "#00FF00"的HEX字符串
 */
- (NSString *)HexString;

@end

NS_ASSUME_NONNULL_END
