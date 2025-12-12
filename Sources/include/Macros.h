//
//  Macros.h
//  PocketSVG
//
//  Created by João Freitas on 12/12/2025.
//

// Macros.h
#ifndef MACROS_H
#define MACROS_H

#undef NSCParameterAssert
#define NSCParameterAssert(condition)                                          \
    do {                                                                       \
        if (!(condition)) {                                                    \
            @throw [NSException                                                \
                exceptionWithName:NSInvalidArgumentException                   \
                           reason:[NSString                                    \
                                      stringWithFormat:@"Invalid parameter "   \
                                                       @"not satisfying: %@",  \
                                                       @ #condition]           \
                         userInfo:nil];                                        \
        }                                                                      \
    } while (0)

#undef NSCAssert
#define NSCAssert(condition, desc, ...) \
do { \
    if (!(condition)) { \
        @throw [NSException exceptionWithName:NSInternalInconsistencyException \
                                       reason:[NSString stringWithFormat:(desc), ##__VA_ARGS__] \
                                     userInfo:nil]; \
    } \
} while(0)

#undef NSParameterAssert
#define NSParameterAssert(condition) \
do { \
    if (!(condition)) { \
        @throw [NSException exceptionWithName:NSInvalidArgumentException \
                                       reason:[NSString stringWithFormat:@"Invalid parameter not satisfying: %@", @#condition] \
                                     userInfo:nil]; \
    } \
} while(0)

#undef NSAssert
#define NSAssert(condition, desc, ...) \
do { \
    if (!(condition)) { \
        @throw [NSException exceptionWithName:NSInternalInconsistencyException \
                                       reason:[NSString stringWithFormat:(desc), ##__VA_ARGS__] \
                                     userInfo:nil]; \
    } \
} while(0)

#endif


