// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#if ENABLE(WEB_AUDIO)
#include "V8AudioBufferSourceNode.h"

#include "bindings/modules/v8/V8AudioBuffer.h"
#include "bindings/modules/v8/V8AudioParam.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8AbstractEventListener.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8EventListenerList.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(AudioBufferSourceNode* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8AudioBufferSourceNode::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::AudioBufferSourceNode* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8AudioBufferSourceNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8AudioBufferSourceNode::domTemplate, V8AudioBufferSourceNode::derefObject, 0, V8AudioBufferSourceNode::toEventTarget, 0, V8AudioBufferSourceNode::installPerContextEnabledMethods, &V8AudioSourceNode::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace AudioBufferSourceNodeV8Internal {

template <typename T> void V8_USE(T) { }

static void bufferAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->buffer()), impl);
}

static void bufferAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::bufferAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void bufferAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "buffer", "AudioBufferSourceNode", holder, info.GetIsolate());
    if (!V8AudioBuffer::hasInstance(v8Value, info.GetIsolate())) {
        exceptionState.throwTypeError("The provided value is not of type 'AudioBuffer'.");
        exceptionState.throwIfNeeded();
        return;
    }
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    TONATIVE_VOID(AudioBuffer*, cppValue, V8AudioBuffer::toNativeWithTypeCheck(info.GetIsolate(), v8Value));
    impl->setBuffer(WTF::getPtr(cppValue), exceptionState);
    exceptionState.throwIfNeeded();
}

static void bufferAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::bufferAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void playbackRateAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    RefPtrWillBeRawPtr<AudioParam> result(impl->playbackRate());
    if (result && DOMDataStore::setReturnValueFromWrapper<V8AudioParam>(info.GetReturnValue(), result.get()))
        return;
    v8::Handle<v8::Value> wrapper = toV8(result.get(), holder, info.GetIsolate());
    if (!wrapper.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "playbackRate"), wrapper);
        v8SetReturnValue(info, wrapper);
    }
}

static void playbackRateAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::playbackRateAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void loopAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    v8SetReturnValueBool(info, impl->loop());
}

static void loopAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::loopAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void loopAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    TONATIVE_VOID(bool, cppValue, v8Value->BooleanValue());
    impl->setLoop(cppValue);
}

static void loopAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::loopAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void loopStartAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    v8SetReturnValue(info, impl->loopStart());
}

static void loopStartAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::loopStartAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void loopStartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    TONATIVE_VOID(double, cppValue, static_cast<double>(v8Value->NumberValue()));
    impl->setLoopStart(cppValue);
}

static void loopStartAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::loopStartAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void loopEndAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    v8SetReturnValue(info, impl->loopEnd());
}

static void loopEndAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::loopEndAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void loopEndAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    TONATIVE_VOID(double, cppValue, static_cast<double>(v8Value->NumberValue()));
    impl->setLoopEnd(cppValue);
}

static void loopEndAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::loopEndAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onendedAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    EventListener* v8Value = impl->onended();
    v8SetReturnValue(info, v8Value ? v8::Handle<v8::Value>(V8AbstractEventListener::cast(v8Value)->getListenerObject(impl->executionContext())) : v8::Handle<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onendedAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    AudioBufferSourceNodeV8Internal::onendedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onendedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(holder);
    moveEventListenerToNewWrapper(holder, impl->onended(), v8Value, V8AudioBufferSourceNode::eventListenerCacheIndex, info.GetIsolate());
    impl->setOnended(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onendedAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    AudioBufferSourceNodeV8Internal::onendedAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "start", "AudioBufferSourceNode", info.Holder(), info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(info.Holder());
    double when;
    double grainOffset;
    double grainDuration;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (UNLIKELY(info.Length() <= 0)) {
            impl->start(exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        TONATIVE_VOID_INTERNAL(when, static_cast<double>(info[0]->NumberValue()));
        if (UNLIKELY(info.Length() <= 1)) {
            impl->start(when, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        TONATIVE_VOID_INTERNAL(grainOffset, static_cast<double>(info[1]->NumberValue()));
        if (UNLIKELY(info.Length() <= 2)) {
            impl->start(when, grainOffset, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        TONATIVE_VOID_INTERNAL(grainDuration, static_cast<double>(info[2]->NumberValue()));
    }
    impl->start(when, grainOffset, grainDuration, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    AudioBufferSourceNodeV8Internal::startMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "stop", "AudioBufferSourceNode", info.Holder(), info.GetIsolate());
    AudioBufferSourceNode* impl = V8AudioBufferSourceNode::toNative(info.Holder());
    double when;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (UNLIKELY(info.Length() <= 0)) {
            impl->stop(exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        TONATIVE_VOID_INTERNAL(when, static_cast<double>(info[0]->NumberValue()));
    }
    impl->stop(when, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    AudioBufferSourceNodeV8Internal::stopMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace AudioBufferSourceNodeV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8AudioBufferSourceNodeAttributes[] = {
    {"buffer", AudioBufferSourceNodeV8Internal::bufferAttributeGetterCallback, AudioBufferSourceNodeV8Internal::bufferAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"playbackRate", AudioBufferSourceNodeV8Internal::playbackRateAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"loop", AudioBufferSourceNodeV8Internal::loopAttributeGetterCallback, AudioBufferSourceNodeV8Internal::loopAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"loopStart", AudioBufferSourceNodeV8Internal::loopStartAttributeGetterCallback, AudioBufferSourceNodeV8Internal::loopStartAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"loopEnd", AudioBufferSourceNodeV8Internal::loopEndAttributeGetterCallback, AudioBufferSourceNodeV8Internal::loopEndAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"onended", AudioBufferSourceNodeV8Internal::onendedAttributeGetterCallback, AudioBufferSourceNodeV8Internal::onendedAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8AudioBufferSourceNodeMethods[] = {
    {"start", AudioBufferSourceNodeV8Internal::startMethodCallback, 0, 0},
    {"stop", AudioBufferSourceNodeV8Internal::stopMethodCallback, 0, 0},
};

static void configureV8AudioBufferSourceNodeTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "AudioBufferSourceNode", V8AudioSourceNode::domTemplate(isolate), V8AudioBufferSourceNode::internalFieldCount,
        V8AudioBufferSourceNodeAttributes, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeAttributes),
        0, 0,
        V8AudioBufferSourceNodeMethods, WTF_ARRAY_LENGTH(V8AudioBufferSourceNodeMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8AudioBufferSourceNode::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8AudioBufferSourceNodeTemplate);
}

bool V8AudioBufferSourceNode::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8AudioBufferSourceNode::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioBufferSourceNode* V8AudioBufferSourceNode::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8AudioBufferSourceNode::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(AudioBufferSourceNode* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8AudioBufferSourceNode>(impl, isolate));
    return V8AudioBufferSourceNode::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8AudioBufferSourceNode::createWrapper(PassRefPtrWillBeRawPtr<AudioBufferSourceNode> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8AudioBufferSourceNode>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8AudioBufferSourceNode>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8AudioBufferSourceNode::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(AudioBufferSourceNode* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
#endif // ENABLE(WEB_AUDIO)
