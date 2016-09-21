// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8WebGLCompressedTextureETC1_h
#define V8WebGLCompressedTextureETC1_h

#include "bindings/v8/V8Binding.h"
#include "bindings/v8/V8DOMWrapper.h"
#include "bindings/v8/WrapperTypeInfo.h"
#include "core/html/canvas/WebGLCompressedTextureETC1.h"
#include "platform/heap/Handle.h"

namespace WebCore {

class V8WebGLCompressedTextureETC1 {
public:
    static bool hasInstance(v8::Handle<v8::Value>, v8::Isolate*);
    static v8::Handle<v8::Object> findInstanceInPrototypeChain(v8::Handle<v8::Value>, v8::Isolate*);
    static v8::Handle<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static WebGLCompressedTextureETC1* toNative(v8::Handle<v8::Object> object)
    {
        return fromInternalPointer(object->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex));
    }
    static WebGLCompressedTextureETC1* toNativeWithTypeCheck(v8::Isolate*, v8::Handle<v8::Value>);
    static const WrapperTypeInfo wrapperTypeInfo;
    static void derefObject(void*);
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static inline void* toInternalPointer(WebGLCompressedTextureETC1* impl)
    {
        return impl;
    }

    static inline WebGLCompressedTextureETC1* fromInternalPointer(void* object)
    {
        return static_cast<WebGLCompressedTextureETC1*>(object);
    }
    static void installPerContextEnabledProperties(v8::Handle<v8::Object>, WebGLCompressedTextureETC1*, v8::Isolate*) { }
    static void installPerContextEnabledMethods(v8::Handle<v8::Object>, v8::Isolate*) { }

private:
    friend v8::Handle<v8::Object> wrap(WebGLCompressedTextureETC1*, v8::Handle<v8::Object> creationContext, v8::Isolate*);
    static v8::Handle<v8::Object> createWrapper(PassRefPtr<WebGLCompressedTextureETC1>, v8::Handle<v8::Object> creationContext, v8::Isolate*);
};

v8::Handle<v8::Object> wrap(WebGLCompressedTextureETC1* impl, v8::Handle<v8::Object> creationContext, v8::Isolate*);

inline v8::Handle<v8::Value> toV8(WebGLCompressedTextureETC1* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (UNLIKELY(!impl))
        return v8::Null(isolate);
    v8::Handle<v8::Value> wrapper = DOMDataStore::getWrapper<V8WebGLCompressedTextureETC1>(impl, isolate);
    if (!wrapper.IsEmpty())
        return wrapper;
    return wrap(impl, creationContext, isolate);
}

template<typename CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, WebGLCompressedTextureETC1* impl)
{
    if (UNLIKELY(!impl)) {
        v8SetReturnValueNull(callbackInfo);
        return;
    }
    if (DOMDataStore::setReturnValueFromWrapper<V8WebGLCompressedTextureETC1>(callbackInfo.GetReturnValue(), impl))
        return;
    v8::Handle<v8::Object> wrapper = wrap(impl, callbackInfo.Holder(), callbackInfo.GetIsolate());
    v8SetReturnValue(callbackInfo, wrapper);
}

template<typename CallbackInfo>
inline void v8SetReturnValueForMainWorld(const CallbackInfo& callbackInfo, WebGLCompressedTextureETC1* impl)
{
    ASSERT(DOMWrapperWorld::current(callbackInfo.GetIsolate()).isMainWorld());
    if (UNLIKELY(!impl)) {
        v8SetReturnValueNull(callbackInfo);
        return;
    }
    if (DOMDataStore::setReturnValueFromWrapperForMainWorld<V8WebGLCompressedTextureETC1>(callbackInfo.GetReturnValue(), impl))
        return;
    v8::Handle<v8::Value> wrapper = wrap(impl, callbackInfo.Holder(), callbackInfo.GetIsolate());
    v8SetReturnValue(callbackInfo, wrapper);
}

template<class CallbackInfo, class Wrappable>
inline void v8SetReturnValueFast(const CallbackInfo& callbackInfo, WebGLCompressedTextureETC1* impl, Wrappable* wrappable)
{
    if (UNLIKELY(!impl)) {
        v8SetReturnValueNull(callbackInfo);
        return;
    }
    if (DOMDataStore::setReturnValueFromWrapperFast<V8WebGLCompressedTextureETC1>(callbackInfo.GetReturnValue(), impl, callbackInfo.Holder(), wrappable))
        return;
    v8::Handle<v8::Object> wrapper = wrap(impl, callbackInfo.Holder(), callbackInfo.GetIsolate());
    v8SetReturnValue(callbackInfo, wrapper);
}

inline v8::Handle<v8::Value> toV8(PassRefPtr<WebGLCompressedTextureETC1> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl.get(), creationContext, isolate);
}

template<class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, PassRefPtr<WebGLCompressedTextureETC1> impl)
{
    v8SetReturnValue(callbackInfo, impl.get());
}

template<class CallbackInfo>
inline void v8SetReturnValueForMainWorld(const CallbackInfo& callbackInfo, PassRefPtr<WebGLCompressedTextureETC1> impl)
{
    v8SetReturnValueForMainWorld(callbackInfo, impl.get());
}

template<class CallbackInfo, class Wrappable>
inline void v8SetReturnValueFast(const CallbackInfo& callbackInfo, PassRefPtr<WebGLCompressedTextureETC1> impl, Wrappable* wrappable)
{
    v8SetReturnValueFast(callbackInfo, impl.get(), wrappable);
}

}
#endif // V8WebGLCompressedTextureETC1_h
