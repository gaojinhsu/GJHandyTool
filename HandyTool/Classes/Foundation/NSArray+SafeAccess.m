//
//  NSArray+SafeAccess.m
//  HandyTool
//
//  Created by Gaojin Hsu on 2019/1/31.
//

#import "NSArray+SafeAccess.h"

@implementation NSArray (SafeAccess)

- (nullable id)safe_objectAtIndex:(NSUInteger)index {
    if (self.count > index) {
        return [self objectAtIndex:index];
    }
    return nil;
}

@end
