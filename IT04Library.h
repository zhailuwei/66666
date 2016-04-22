//
//  IT04Library.h
//  IT04Library
//
//  Created by Mac on 16/4/20.
//  Copyright © 2016年 zlw. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IT04Library : NSObject

@property (nonatomic,strong) NSString *name;

+ (void)loginDesc;

- (void)eat:(NSString *)something;

- (NSInteger)sum:(NSInteger)a :(NSInteger)b;

@end
