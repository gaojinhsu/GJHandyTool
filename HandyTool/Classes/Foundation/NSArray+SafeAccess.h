//
//  NSArray+SafeAccess.h
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/1/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSArray (SafeAccess)

- (nullable id)safe_objectAtIndex:(NSUInteger)index;

@end

NS_ASSUME_NONNULL_END
