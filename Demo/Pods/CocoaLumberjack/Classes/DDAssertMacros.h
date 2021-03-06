//
//  DDAssertMacros.h
//  CocoaLumberjack
//
//  Created by Ernesto Rivera on 2014/07/07.
//

#import "DDLogMacros.h"

/**
 * NSAsset replacement that will output a log message even when assertions are disabled.
 **/

#define DDAssert(condition, frmt, ...) if (!(condition)) {                                                           \
                                           NSString * description = [NSString stringWithFormat:frmt, ##__VA_ARGS__]; \
                                           DDLogError(@"%@", description);                                           \
                                           NSAssert(NO, description); }
#define DDAssertCondition(condition) DDAssert(condition, @"Condition not satisfied: %s", #condition)

