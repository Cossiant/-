#ifndef _COSSIANTMAIN_H
#define _COSSIANTMAIN_H

#ifdef __cplusplus
extern "C"
{
#endif
//这里添加CPP函数，因为CPP无法正确被C调用，因此要进行转换
void CossiantMain();
void CossiantMainWhile();
#ifdef __cplusplus
}
#endif

#endif