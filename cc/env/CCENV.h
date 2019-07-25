#ifndef CCENV_H
#define CCENV_H
    #ifdef __GUNC__
        //gunc
        #define GUNC
        #define CC_NULL nullptr	
        #define CC_INT32 int
    #elif __clang__
        //Clang
        #define  CLANG
        #define CC_NULL nullptr
#define CC_INT32 int
    #else 
        #define  UNKONW
        #define CC_NULL nullptr
        #define CC_INT32 int
    #endif
#endif

/**
 * 检测编译
 * 
 * 
 * 
 */