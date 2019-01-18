#ifndef CCENV_H
#define CCENV_H
    #ifdef __GUNC__
        //gunc
        #define GUNC
    #elif __clang__
        //Clang
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