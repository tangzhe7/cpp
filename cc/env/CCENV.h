#ifndef CCENV_H
#define CCENV_H
    #ifdef __GUNC__
        //gunc
        #define GUNC
        #define CC_NULL nullptr	
        #define CC_INT32 int
		#define U_CC_INT32 unsigned int
    #elif __clang__
        //Clang
        #define  CLANG
        #define CC_NULL nullptr
		#define CC_INT32 int
		#define U_CC_INT32 unsigned int
    #else 
        #define  UNKONW
        #define CC_NULL nullptr
        #define CC_INT32 int
		#define U_CC_INT32 unsigned int
    #endif
#endif

/**
 * 检测编译
 * 
 * 
 * 
 */