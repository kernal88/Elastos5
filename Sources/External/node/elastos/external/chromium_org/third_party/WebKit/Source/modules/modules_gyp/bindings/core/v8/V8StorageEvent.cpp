// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8StorageEvent.h"

#include "bindings/core/v8/V8Storage.h"
#include "bindings/v8/Dictionary.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(StorageEvent* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8StorageEvent::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::StorageEvent* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8StorageEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8StorageEvent::domTemplate, V8StorageEvent::derefObject, 0, 0, 0, V8StorageEvent::installPerContextEnabledMethods, &V8Event::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace StorageEventV8Internal {

template <typename T> void V8_USE(T) { }

static void keyAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    StorageEvent* impl = V8StorageEvent::toNative(holder);
    v8SetReturnValueString(info, impl->key(), info.GetIsolate());
}

static void keyAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    StorageEventV8Internal::keyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void oldValueAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    StorageEvent* impl = V8StorageEvent::toNative(holder);
    v8SetReturnValueStringOrNull(info, impl->oldValue(), info.GetIsolate());
}

static void oldValueAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    StorageEventV8Internal::oldValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void newValueAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    StorageEvent* impl = V8StorageEvent::toNative(holder);
    v8SetReturnValueStringOrNull(info, impl->newValue(), info.GetIsolate());
}

static void newValueAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    StorageEventV8Internal::newValueAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void urlAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    StorageEvent* impl = V8StorageEvent::toNative(holder);
    v8SetReturnValueString(info, impl->url(), info.GetIsolate());
}

static void urlAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    StorageEventV8Internal::urlAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void storageAreaAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    StorageEvent* impl = V8StorageEvent::toNative(holder);
    bool isNull = false;
    RefPtrWillBeRawPtr<Storage> v8Value = impl->storageArea(isNull);
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    RefPtrWillBeRawPtr<Storage> result(v8Value);
    if (result && DOMDataStore::setReturnValueFromWrapper<V8Storage>(info.GetReturnValue(), result.get()))
        return;
    v8::Handle<v8::Value> wrapper = toV8(result.get(), holder, info.GetIsolate());
    if (!wrapper.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "storageArea"), wrapper);
        v8SetReturnValue(info, wrapper);
    }
}

static void storageAreaAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    StorageEventV8Internal::storageAreaAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void initStorageEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    StorageEvent* impl = V8StorageEvent::toNative(info.Holder());
    V8StringResource<> typeArg;
    bool canBubbleArg;
    bool cancelableArg;
    V8StringResource<> keyArg;
    V8StringResource<WithNullCheck> oldValueArg;
    V8StringResource<WithNullCheck> newValueArg;
    V8StringResource<> urlArg;
    Storage* storageAreaArg;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TOSTRING_VOID_INTERNAL(typeArg, info[0]);
        TONATIVE_VOID_INTERNAL(canBubbleArg, info[1]->BooleanValue());
        TONATIVE_VOID_INTERNAL(cancelableArg, info[2]->BooleanValue());
        TOSTRING_VOID_INTERNAL(keyArg, info[3]);
        TOSTRING_VOID_INTERNAL(oldValueArg, info[4]);
        TOSTRING_VOID_INTERNAL(newValueArg, info[5]);
        TOSTRING_VOID_INTERNAL(urlArg, info[6]);
        TONATIVE_VOID_INTERNAL(storageAreaArg, V8Storage::toNativeWithTypeCheck(info.GetIsolate(), info[7]));
    }
    impl->initStorageEvent(typeArg, canBubbleArg, cancelableArg, keyArg, oldValueArg, newValueArg, urlArg, storageAreaArg);
}

static void initStorageEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    StorageEventV8Internal::initStorageEventMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "StorageEvent", info.Holder(), isolate);
    if (info.Length() < 1) {
        exceptionState.throwTypeError("An event name must be provided.");
        exceptionState.throwIfNeeded();
        return;
    }

    TOSTRING_VOID(V8StringResource<>, type, info[0]);
    StorageEventInit eventInit;
    if (info.Length() >= 2) {
        TONATIVE_VOID(Dictionary, options, Dictionary(info[1], isolate));
        if (!initializeStorageEvent(eventInit, options, exceptionState, info)) {
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<StorageEvent> event = StorageEvent::create(type, eventInit);
    v8::Handle<v8::Object> wrapper = info.Holder();
    V8DOMWrapper::associateObjectWithWrapper<V8StorageEvent>(event.release(), &V8StorageEvent::wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    v8SetReturnValue(info, wrapper);
}

} // namespace StorageEventV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8StorageEventAttributes[] = {
    {"key", StorageEventV8Internal::keyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"oldValue", StorageEventV8Internal::oldValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"newValue", StorageEventV8Internal::newValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"url", StorageEventV8Internal::urlAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"storageArea", StorageEventV8Internal::storageAreaAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8StorageEventMethods[] = {
    {"initStorageEvent", StorageEventV8Internal::initStorageEventMethodCallback, 0, 0},
};

bool initializeStorageEvent(StorageEventInit& eventInit, const Dictionary& options, ExceptionState& exceptionState, const v8::FunctionCallbackInfo<v8::Value>& info, const String& forEventName)
{
    Dictionary::ConversionContext conversionContext(forEventName.isEmpty() ? String("StorageEvent") : forEventName, "", exceptionState);
    if (!initializeEvent(eventInit, options, exceptionState, info, forEventName.isEmpty() ? String("StorageEvent") : forEventName))
        return false;

    if (!options.convert(conversionContext.setConversionType("DOMString", false), "key", eventInit.key))
        return false;
    if (!options.convert(conversionContext.setConversionType("DOMString", false), "oldValue", eventInit.oldValue))
        return false;
    if (!options.convert(conversionContext.setConversionType("DOMString", false), "newValue", eventInit.newValue))
        return false;
    if (!options.convert(conversionContext.setConversionType("DOMString", false), "url", eventInit.url))
        return false;
    if (!options.convert(conversionContext.setConversionType("Storage", true), "storageArea", eventInit.storageArea))
        return false;
    return true;
}

void V8StorageEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("Blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        throwTypeError(ExceptionMessages::constructorNotCallableAsFunction("StorageEvent"), info.GetIsolate());
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    StorageEventV8Internal::constructor(info);
}

static void configureV8StorageEventTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "StorageEvent", V8Event::domTemplate(isolate), V8StorageEvent::internalFieldCount,
        V8StorageEventAttributes, WTF_ARRAY_LENGTH(V8StorageEventAttributes),
        0, 0,
        V8StorageEventMethods, WTF_ARRAY_LENGTH(V8StorageEventMethods),
        isolate);
    functionTemplate->SetCallHandler(V8StorageEvent::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8StorageEvent::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8StorageEventTemplate);
}

bool V8StorageEvent::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8StorageEvent::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

StorageEvent* V8StorageEvent::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(StorageEvent* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8StorageEvent>(impl, isolate));
    return V8StorageEvent::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8StorageEvent::createWrapper(PassRefPtrWillBeRawPtr<StorageEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8StorageEvent>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8StorageEvent>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8StorageEvent::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(StorageEvent* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
