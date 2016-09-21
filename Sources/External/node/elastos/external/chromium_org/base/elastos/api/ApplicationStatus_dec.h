//This file is autogenerated for
//    ApplicationStatus.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_APPLICATIONSTATUS_CALLBACK_DEC_HH
#define ELASTOS_APPLICATIONSTATUS_CALLBACK_DEC_HH


#ifdef __cplusplus
extern "C"
{
#endif
    extern void Elastos_ApplicationStatus_nativeOnApplicationStateChange(Int32 newState);
#ifdef __cplusplus
}
#endif


struct ElaApplicationStatusCallback
{
    void (*elastos_ApplicationStatus_registerThreadSafeNativeApplicationStateListener)();
};


#endif //ELASTOS_APPLICATIONSTATUS_CALLBACK_DEC_HH
