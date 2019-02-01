//
//  NSMutableArray+SafeAccess.h
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/1/31.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSMutableArray (SafeAccess)

- (nullable id)safe_objectAtIndex:(NSUInteger)index;

- (void)safe_addObject:(_Nonnull id)obj;

- (void)safe_insertObject:(_Nonnull id)anObj atIndex:(NSUInteger)index;

- (void)safe_removeObjectAtIndex:(NSUInteger)index;

- (void)safe_replaceObjectAtIndex:(NSUInteger)index withObject:anObj;

@end

NS_ASSUME_NONNULL_END
