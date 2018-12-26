#ifndef CCENV_H
#define CCENV_H
    #ifdef __GUNC__
        //gunc 编译器
        #define GUNC
    #elif __clang__
        //Clang 编译器
        #define  CLANG
    #else 
        #define  UNKONW
    #endif
#endif

/**
 * 检测编译
 * 
 * 
 * 
 */