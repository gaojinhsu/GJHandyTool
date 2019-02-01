//
//  NSMutableArray+SafeAccess.m
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/1/31.
//

#import "NSMutableArray+SafeAccess.h"

@implementation NSMutableArray (SafeAccess)

- (nullable id)safe_objectAtIndex:(NSUInteger)index {
    if (self.count > index) {
        return [self objectAtIndex:index];
    }
    return nil;
}

- (void)safe_addObject:(_Nonnull id)anObj {
    if (anObj) {
        [self addObject:anObj];
    }
}

- (void)safe_insertObject:(id)anObj atIndex:(NSUInteger)index {
    if (anObj && index < self.count) {
        [self insertObject:anObj atIndex:index];
    }
}

- (void)safe_removeObjectAtIndex:(NSUInteger)index {
    if (index < self.count) {
        [self removeObjectAtIndex:index];
    }
}

- (void)safe_replaceObjectAtIndex:(NSUInteger)index withObject:anObj {
    if (index < self.count && anObj) {
        [self replaceObjectAtIndex:index withObject:anObj];
    }
}
@end
