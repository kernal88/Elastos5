//This file is autogenerated for
//    PathUtils.java
//put this file at the end of the include list
//so the type definition used in this file will be found
#ifndef ELASTOS_PATHUTILS_CALLBACK_DEC_HH
#define ELASTOS_PATHUTILS_CALLBACK_DEC_HH


struct ElaPathUtilsCallback
{
    Elastos::String (*elastos_PathUtils_getDataDirectory)(IInterface* appContext);
    Elastos::String (*elastos_PathUtils_getDatabaseDirectory)(IInterface* appContext);
    Elastos::String (*elastos_PathUtils_getCacheDirectory)(IInterface* appContext);
    Elastos::String (*elastos_PathUtils_getDownloadsDirectory)(IInterface* appContext);
    Elastos::String (*elastos_PathUtils_getNativeLibraryDirectory)(IInterface* appContext);
    Elastos::String (*elastos_PathUtils_getExternalStorageDirectory)();
};


#endif //ELASTOS_PATHUTILS_CALLBACK_DEC_HH
