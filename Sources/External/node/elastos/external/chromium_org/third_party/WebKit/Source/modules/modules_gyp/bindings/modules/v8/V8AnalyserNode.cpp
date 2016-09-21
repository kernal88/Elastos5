// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8AnalyserNode.h"

#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "bindings/v8/custom/V8Float32ArrayCustom.h"
#include "bindings/v8/custom/V8Uint8ArrayCustom.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(AnalyserNode* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8AnalyserNode::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::AnalyserNode* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8AnalyserNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8AnalyserNode::domTemplate, V8AnalyserNode::derefObject, 0, V8AnalyserNode::toEventTarget, 0, V8AnalyserNode::installPerContextEnabledMethods, &V8AudioNode::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace AnalyserNodeV8Internal {

template <typename T> void V8_USE(T) { }

static void fftSizeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->fftSize());
}

static void fftSizeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AnalyserNodeV8Internal::fftSizeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void fftSizeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "fftSize", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    TONATIVE_VOID_EXCEPTIONSTATE(unsigned, cppValue, toUInt32(v8Value, exceptionState), exceptionState);
    impl->setFftSize(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void fftSizeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AnalyserNodeV8Internal::fftSizeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void frequencyBinCountAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->frequencyBinCount());
}

static void frequencyBinCountAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AnalyserNodeV8Internal::frequencyBinCountAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void minDecibelsAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    v8SetReturnValue(info, impl->minDecibels());
}

static void minDecibelsAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AnalyserNodeV8Internal::minDecibelsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void minDecibelsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "minDecibels", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    TONATIVE_VOID(double, cppValue, static_cast<double>(v8Value->NumberValue()));
    impl->setMinDecibels(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void minDecibelsAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AnalyserNodeV8Internal::minDecibelsAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void maxDecibelsAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    v8SetReturnValue(info, impl->maxDecibels());
}

static void maxDecibelsAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AnalyserNodeV8Internal::maxDecibelsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void maxDecibelsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "maxDecibels", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    TONATIVE_VOID(double, cppValue, static_cast<double>(v8Value->NumberValue()));
    impl->setMaxDecibels(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void maxDecibelsAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AnalyserNodeV8Internal::maxDecibelsAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void smoothingTimeConstantAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    v8SetReturnValue(info, impl->smoothingTimeConstant());
}

static void smoothingTimeConstantAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AnalyserNodeV8Internal::smoothingTimeConstantAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void smoothingTimeConstantAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "smoothingTimeConstant", "AnalyserNode", holder, info.GetIsolate());
    AnalyserNode* impl = V8AnalyserNode::toNative(holder);
    TONATIVE_VOID(double, cppValue, static_cast<double>(v8Value->NumberValue()));
    impl->setSmoothingTimeConstant(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void smoothingTimeConstantAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AnalyserNodeV8Internal::smoothingTimeConstantAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getFloatFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("getFloatFrequencyData", "AnalyserNode", 1, info.Length(), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toNative(info.Holder());
    Float32Array* array;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(array, info[0]->IsFloat32Array() ? V8Float32Array::toNative(v8::Handle<v8::Float32Array>::Cast(info[0])) : 0);
    }
    impl->getFloatFrequencyData(array);
}

static void getFloatFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    AnalyserNodeV8Internal::getFloatFrequencyDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getByteFrequencyDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("getByteFrequencyData", "AnalyserNode", 1, info.Length(), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toNative(info.Holder());
    Uint8Array* array;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(array, info[0]->IsUint8Array() ? V8Uint8Array::toNative(v8::Handle<v8::Uint8Array>::Cast(info[0])) : 0);
    }
    impl->getByteFrequencyData(array);
}

static void getByteFrequencyDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    AnalyserNodeV8Internal::getByteFrequencyDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getFloatTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("getFloatTimeDomainData", "AnalyserNode", 1, info.Length(), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toNative(info.Holder());
    Float32Array* array;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(array, info[0]->IsFloat32Array() ? V8Float32Array::toNative(v8::Handle<v8::Float32Array>::Cast(info[0])) : 0);
    }
    impl->getFloatTimeDomainData(array);
}

static void getFloatTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    AnalyserNodeV8Internal::getFloatTimeDomainDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getByteTimeDomainDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("getByteTimeDomainData", "AnalyserNode", 1, info.Length(), info.GetIsolate());
        return;
    }
    AnalyserNode* impl = V8AnalyserNode::toNative(info.Holder());
    Uint8Array* array;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(array, info[0]->IsUint8Array() ? V8Uint8Array::toNative(v8::Handle<v8::Uint8Array>::Cast(info[0])) : 0);
    }
    impl->getByteTimeDomainData(array);
}

static void getByteTimeDomainDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    AnalyserNodeV8Internal::getByteTimeDomainDataMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace AnalyserNodeV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8AnalyserNodeAttributes[] = {
    {"fftSize", AnalyserNodeV8Internal::fftSizeAttributeGetterCallback, AnalyserNodeV8Internal::fftSizeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"frequencyBinCount", AnalyserNodeV8Internal::frequencyBinCountAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"minDecibels", AnalyserNodeV8Internal::minDecibelsAttributeGetterCallback, AnalyserNodeV8Internal::minDecibelsAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"maxDecibels", AnalyserNodeV8Internal::maxDecibelsAttributeGetterCallback, AnalyserNodeV8Internal::maxDecibelsAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"smoothingTimeConstant", AnalyserNodeV8Internal::smoothingTimeConstantAttributeGetterCallback, AnalyserNodeV8Internal::smoothingTimeConstantAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8AnalyserNodeMethods[] = {
    {"getFloatFrequencyData", AnalyserNodeV8Internal::getFloatFrequencyDataMethodCallback, 0, 1},
    {"getByteFrequencyData", AnalyserNodeV8Internal::getByteFrequencyDataMethodCallback, 0, 1},
    {"getFloatTimeDomainData", AnalyserNodeV8Internal::getFloatTimeDomainDataMethodCallback, 0, 1},
    {"getByteTimeDomainData", AnalyserNodeV8Internal::getByteTimeDomainDataMethodCallback, 0, 1},
};

static void configureV8AnalyserNodeTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "AnalyserNode", V8AudioNode::domTemplate(isolate), V8AnalyserNode::internalFieldCount,
        V8AnalyserNodeAttributes, WTF_ARRAY_LENGTH(V8AnalyserNodeAttributes),
        0, 0,
        V8AnalyserNodeMethods, WTF_ARRAY_LENGTH(V8AnalyserNodeMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8AnalyserNode::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8AnalyserNodeTemplate);
}

bool V8AnalyserNode::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8AnalyserNode::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AnalyserNode* V8AnalyserNode::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8AnalyserNode::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(AnalyserNode* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8AnalyserNode>(impl, isolate));
    return V8AnalyserNode::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8AnalyserNode::createWrapper(PassRefPtrWillBeRawPtr<AnalyserNode> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8AnalyserNode>(impl.get(), isolate));
    if (ScriptWrappable::wrapperCanBeStoredInObject(impl.get())) {
        const WrapperTypeInfo* actualInfo = ScriptWrappable::fromObject(impl.get())->typeInfo();
        // Might be a XXXConstructor::wrapperTypeInfo instead of an XXX::wrapperTypeInfo. These will both have
        // the same object de-ref functions, though, so use that as the basis of the check.
        RELEASE_ASSERT_WITH_SECURITY_IMPLICATION(actualInfo->derefObjectFunction == wrapperTypeInfo.derefObjectFunction);
    }

    v8::Handle<v8::Object> wrapper = V8DOMWrapper::createWrapper(creationContext, &wrapperTypeInfo, toInternalPointer(impl.get()), isolate);
    if (UNLIKELY(wrapper.IsEmpty()))
        return wrapper;

    installPerContextEnabledProperties(wrapper, impl.get(), isolate);
    V8DOMWrapper::associateObjectWithWrapper<V8AnalyserNode>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8AnalyserNode::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(AnalyserNode* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
#endif // ENABLE(WEB_AUDIO)
