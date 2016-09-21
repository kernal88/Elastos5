// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Geolocation.h"

#include "bindings/modules/v8/V8PositionCallback.h"
#include "bindings/modules/v8/V8PositionErrorCallback.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMActivityLogger.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(Geolocation* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8Geolocation::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::Geolocation* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8Geolocation::wrapperTypeInfo = { gin::kEmbedderBlink, V8Geolocation::domTemplate, V8Geolocation::derefObject, 0, 0, 0, V8Geolocation::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, GarbageCollectedObject };

namespace GeolocationV8Internal {

template <typename T> void V8_USE(T) { }

static void getCurrentPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        Vector<v8::Handle<v8::Value> > loggerArgs = toNativeArguments<v8::Handle<v8::Value> >(info, 0);
        contextData->activityLogger()->logMethod("Geolocation.getCurrentPosition", info.Length(), loggerArgs.data());
    }
    V8Geolocation::getCurrentPositionMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void watchPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (contextData && contextData->activityLogger()) {
        Vector<v8::Handle<v8::Value> > loggerArgs = toNativeArguments<v8::Handle<v8::Value> >(info, 0);
        contextData->activityLogger()->logMethod("Geolocation.watchPosition", info.Length(), loggerArgs.data());
    }
    V8Geolocation::watchPositionMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void clearWatchMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clearWatch", "Geolocation", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    Geolocation* impl = V8Geolocation::toNative(info.Holder());
    int watchID;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(watchID, toInt32(info[0], exceptionState), exceptionState);
    }
    impl->clearWatch(watchID);
}

static void clearWatchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    GeolocationV8Internal::clearWatchMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace GeolocationV8Internal

static const V8DOMConfiguration::MethodConfiguration V8GeolocationMethods[] = {
    {"getCurrentPosition", GeolocationV8Internal::getCurrentPositionMethodCallback, 0, 1},
    {"watchPosition", GeolocationV8Internal::watchPositionMethodCallback, 0, 1},
    {"clearWatch", GeolocationV8Internal::clearWatchMethodCallback, 0, 1},
};

static void configureV8GeolocationTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "Geolocation", v8::Local<v8::FunctionTemplate>(), V8Geolocation::internalFieldCount,
        0, 0,
        0, 0,
        V8GeolocationMethods, WTF_ARRAY_LENGTH(V8GeolocationMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8Geolocation::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8GeolocationTemplate);
}

bool V8Geolocation::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8Geolocation::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Geolocation* V8Geolocation::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(Geolocation* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8Geolocation>(impl, isolate));
    return V8Geolocation::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8Geolocation::createWrapper(RawPtr<Geolocation> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8Geolocation>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8Geolocation>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8Geolocation::derefObject(void* object)
{
}

template<>
v8::Handle<v8::Value> toV8NoInline(Geolocation* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
