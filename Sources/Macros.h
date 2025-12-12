//
//  Macros.h
//  PocketSVG
//
//  Created by João Freitas on 12/12/2025.
//

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
