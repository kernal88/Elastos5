// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     api_generator
// For
//     org/chromium/base/SysUtils

#ifndef ELASTOS_ORG_CHROMIUM_BASE_SYSUTILS_JNI
#define ELASTOS_ORG_CHROMIUM_BASE_SYSUTILS_JNI

//#include <jni.h>

#include "ElAndroid.h"
#include "elastos.h"
#include "base/logging.h"

//#include "base/android/jni_int_wrapper.h"

// Step 1: forward declarations.

// Step 2: method stubs.

// Step 3: Callback init .
struct ElaSysUtilsCallback
{
    Elastos::Int32 (*elastos_SysUtils_amountOfPhysicalMemoryKB)();
    Elastos::Boolean (*elastos_SysUtils_isLowEndDevice)();
};

extern "C" {
static struct ElaSysUtilsCallback* sElaSysUtilsCallback;
__attribute__((visibility("default")))
void Elastos_SysUtils_InitCallback(Elastos::Handle32 cb)
{
    sElaSysUtilsCallback = (struct ElaSysUtilsCallback*)cb;
    DLOG(INFO) << "init pointer for sElaSysUtilsCallback is:" << sElaSysUtilsCallback;
}
}; // extern "C"

static bool RegisterNativesImpl() {

  return true;
}

#endif  // ELASTOS_ORG_CHROMIUM_BASE_SYSUTILS_JNI
