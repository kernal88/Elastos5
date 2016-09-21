// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef BASE_ANDROID_JNI_ARRAY_H_
#define BASE_ANDROID_JNI_ARRAY_H_

//#include <jni.h>
#include <string>
#include <vector>

#include "ElAndroid.h"
#include "elastos.h"
//#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/strings/string16.h"

namespace base {
namespace android {

// Returns a new Java byte array converted from the given bytes array.
BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Byte> > ToJavaByteArray(
    const uint8* bytes, size_t len);

// Returns a new Java int array converted from the given int array.
BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Int32> > ToJavaIntArray(
    const int* ints, size_t len);

BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Int32> > ToJavaIntArray(
    const std::vector<int>& ints);

// Returns a new Java long array converted from the given int64 array.
BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Int64> > ToJavaLongArray(
    const int64* longs, size_t len);

BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Int64> > ToJavaLongArray(
    const std::vector<Elastos::Int64>& longs);

// Returns a array of Java byte array converted from |v|.
BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Byte> > > > ToJavaArrayOfByteArray(
    const std::vector<std::string>& v);

BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::String> > ToJavaArrayOfStrings(
    const std::vector<std::string>& v);

BASE_EXPORT Elastos::AutoPtr<Elastos::ArrayOf<Elastos::String> > ToJavaArrayOfStrings(
    const std::vector<string16>& v);

// Converts a Java string array to a native array.
BASE_EXPORT void AppendJavaStringArrayToStringVector(
    Elastos::ArrayOf<Elastos::String>*  array,
    std::vector<string16>* out);

BASE_EXPORT void AppendJavaStringArrayToStringVector(
    Elastos::ArrayOf<Elastos::String>* array,
    std::vector<std::string>* out);

// Appends the Java bytes in |bytes_array| onto the end of |out|.
BASE_EXPORT void AppendJavaByteArrayToByteVector(
    Elastos::ArrayOf<Elastos::Byte>* byte_array,
    std::vector<uint8>* out);

// Replaces the content of |out| with the Java bytes in |bytes_array|.
BASE_EXPORT void JavaByteArrayToByteVector(
    Elastos::ArrayOf<Elastos::Byte>* byte_array,
    std::vector<uint8>* out);

// Replaces the content of |out| with the Java ints in |int_array|.
BASE_EXPORT void JavaIntArrayToIntVector(
    Elastos::ArrayOf<Elastos::Int32>* int_array,
    std::vector<int>* out);

// Replaces the content of |out| with the Java longs in |long_array|.
BASE_EXPORT void JavaLongArrayToLongVector(
    Elastos::ArrayOf<Elastos::Int64>* long_array,
    std::vector<long>* out);

// Replaces the content of |out| with the Java floats in |float_array|.
BASE_EXPORT void JavaFloatArrayToFloatVector(
    Elastos::ArrayOf<Elastos::Float>* float_array,
    std::vector<float>* out);

// Assuming |array| is an byte[][] (array of byte arrays), replaces the
// content of |out| with the corresponding vector of strings. No UTF-8
// conversion is performed.
BASE_EXPORT void JavaArrayOfByteArrayToStringVector(
    Elastos::ArrayOf<Elastos::AutoPtr<Elastos::ArrayOf<Elastos::Byte> > > * array,
    std::vector<std::string>* out);

}  // namespace android
}  // namespace base

#endif  // BASE_ANDROID_JNI_ARRAY_H_
