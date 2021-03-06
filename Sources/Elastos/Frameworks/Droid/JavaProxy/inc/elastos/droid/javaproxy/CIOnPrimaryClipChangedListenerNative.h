
#ifndef __ELASTOS_DROID_JAVAPROXY_CIONPRIMARYCLIPCHANGEDLISTENERNATIVE_H__
#define __ELASTOS_DROID_JAVAPROXY_CIONPRIMARYCLIPCHANGEDLISTENERNATIVE_H__

#include "_Elastos_Droid_JavaProxy_CIOnPrimaryClipChangedListenerNative.h"
#include <elastos/core/Object.h>
#include <jni.h>

using Elastos::Droid::Content::IOnPrimaryClipChangedListener;
using Elastos::Droid::Os::IBinder;

namespace Elastos {
namespace Droid {
namespace JavaProxy {

CarClass(CIOnPrimaryClipChangedListenerNative)
    , public Object
    , public IOnPrimaryClipChangedListener
    , public IBinder
{
public:
    ~CIOnPrimaryClipChangedListenerNative();

    CAR_INTERFACE_DECL()

    CAR_OBJECT_DECL()

    CARAPI constructor(
        /* [in] */ Handle64 jVM,
        /* [in] */ Handle64 jInstance);

    CARAPI DispatchPrimaryClipChanged();

    CARAPI ToString(
        /* [out] */ String* str);

private:
    static const String TAG;

    JavaVM* mJVM;
    jobject mJInstance;
};

}
}
}

#endif // __ELASTOS_DROID_JAVAPROXY_CIONPRIMARYCLIPCHANGEDLISTENERNATIVE_H__
