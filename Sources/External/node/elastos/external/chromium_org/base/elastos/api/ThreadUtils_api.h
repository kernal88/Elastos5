// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     api_generator
// For
//     org/chromium/base/ThreadUtils

#ifndef ELASTOS_ORG_CHROMIUM_BASE_THREADUTILS_JNI
#define ELASTOS_ORG_CHROMIUM_BASE_THREADUTILS_JNI

//#include <jni.h>

#include "ElAndroid.h"
#include "elastos.h"
#include "base/logging.h"

//#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.

// Step 2: method stubs.

// Step 3: Callback init .
struct ElaThreadUtilsCallback
{
    void (*elastos_ThreadUtils_setThreadPriorityAudio)(Elastos::Int32 tid);
};

extern "C" {
static struct ElaThreadUtilsCallback* sElaThreadUtilsCallback;
__attribute__((visibility("default")))
void Elastos_ThreadUtils_InitCallback(Elastos::Handle32 cb)
{
    sElaThreadUtilsCallback = (struct ElaThreadUtilsCallback*)cb;
    DLOG(INFO) << "init pointer for sElaThreadUtilsCallback is:" << sElaThreadUtilsCallback;
}
}; // extern "C"

static bool RegisterNativesImpl() {

  return true;
}

#endif  // ELASTOS_ORG_CHROMIUM_BASE_THREADUTILS_JNI
