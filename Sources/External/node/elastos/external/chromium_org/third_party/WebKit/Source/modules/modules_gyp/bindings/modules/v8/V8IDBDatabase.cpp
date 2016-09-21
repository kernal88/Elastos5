// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8IDBDatabase.h"

#include "bindings/core/v8/V8DOMStringList.h"
#include "bindings/modules/v8/V8IDBObjectStore.h"
#include "bindings/modules/v8/V8IDBTransaction.h"
#include "bindings/v8/Dictionary.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/ScriptValue.h"
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

static void initializeScriptWrappableForInterface(IDBDatabase* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8IDBDatabase::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::IDBDatabase* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8IDBDatabase::wrapperTypeInfo = { gin::kEmbedderBlink, V8IDBDatabase::domTemplate, V8IDBDatabase::derefObject, V8IDBDatabase::toActiveDOMObject, V8IDBDatabase::toEventTarget, 0, V8IDBDatabase::installPerContextEnabledMethods, &V8EventTarget::wrapperTypeInfo, WrapperTypeObjectPrototype, GarbageCollectedObject };

namespace IDBDatabaseV8Internal {

template <typename T> void V8_USE(T) { }

static void nameAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::nameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void versionAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    v8SetReturnValue(info, impl->version(scriptState).v8Value());
}

static void versionAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::versionAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void objectStoreNamesAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    RefPtrWillBeRawPtr<DOMStringList> result(impl->objectStoreNames());
    if (result && DOMDataStore::setReturnValueFromWrapper<V8DOMStringList>(info.GetReturnValue(), result.get()))
        return;
    v8::Handle<v8::Value> wrapper = toV8(result.get(), holder, info.GetIsolate());
    if (!wrapper.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "objectStoreNames"), wrapper);
        v8SetReturnValue(info, wrapper);
    }
}

static void objectStoreNamesAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::objectStoreNamesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onabortAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    EventListener* v8Value = impl->onabort();
    v8SetReturnValue(info, v8Value ? v8::Handle<v8::Value>(V8AbstractEventListener::cast(v8Value)->getListenerObject(impl->executionContext())) : v8::Handle<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onabortAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::onabortAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onabortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    moveEventListenerToNewWrapper(holder, impl->onabort(), v8Value, V8IDBDatabase::eventListenerCacheIndex, info.GetIsolate());
    impl->setOnabort(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onabortAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    IDBDatabaseV8Internal::onabortAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void oncloseAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    EventListener* v8Value = impl->onclose();
    v8SetReturnValue(info, v8Value ? v8::Handle<v8::Value>(V8AbstractEventListener::cast(v8Value)->getListenerObject(impl->executionContext())) : v8::Handle<v8::Value>(v8::Null(info.GetIsolate())));
}

static void oncloseAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::oncloseAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void oncloseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    moveEventListenerToNewWrapper(holder, impl->onclose(), v8Value, V8IDBDatabase::eventListenerCacheIndex, info.GetIsolate());
    impl->setOnclose(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void oncloseAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    IDBDatabaseV8Internal::oncloseAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onerrorAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    EventListener* v8Value = impl->onerror();
    v8SetReturnValue(info, v8Value ? v8::Handle<v8::Value>(V8AbstractEventListener::cast(v8Value)->getListenerObject(impl->executionContext())) : v8::Handle<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onerrorAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::onerrorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    moveEventListenerToNewWrapper(holder, impl->onerror(), v8Value, V8IDBDatabase::eventListenerCacheIndex, info.GetIsolate());
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    IDBDatabaseV8Internal::onerrorAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onversionchangeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    EventListener* v8Value = impl->onversionchange();
    v8SetReturnValue(info, v8Value ? v8::Handle<v8::Value>(V8AbstractEventListener::cast(v8Value)->getListenerObject(impl->executionContext())) : v8::Handle<v8::Value>(v8::Null(info.GetIsolate())));
}

static void onversionchangeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    IDBDatabaseV8Internal::onversionchangeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void onversionchangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    IDBDatabase* impl = V8IDBDatabase::toNative(holder);
    moveEventListenerToNewWrapper(holder, impl->onversionchange(), v8Value, V8IDBDatabase::eventListenerCacheIndex, info.GetIsolate());
    impl->setOnversionchange(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onversionchangeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    IDBDatabaseV8Internal::onversionchangeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void createObjectStoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createObjectStore", "IDBDatabase", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    IDBDatabase* impl = V8IDBDatabase::toNative(info.Holder());
    V8StringResource<> name;
    Dictionary options;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TOSTRING_VOID_INTERNAL(name, info[0]);
        TONATIVE_VOID_INTERNAL(options, Dictionary(info[1], info.GetIsolate()));
        if (!options.isUndefinedOrNull() && !options.isObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RawPtr<IDBObjectStore> result = impl->createObjectStore(name, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void createObjectStoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    IDBDatabaseV8Internal::createObjectStoreMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void deleteObjectStoreMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteObjectStore", "IDBDatabase", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    IDBDatabase* impl = V8IDBDatabase::toNative(info.Holder());
    V8StringResource<> name;
    {
        TOSTRING_VOID_INTERNAL(name, info[0]);
    }
    impl->deleteObjectStore(name, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteObjectStoreMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    IDBDatabaseV8Internal::deleteObjectStoreMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void transaction1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "transaction", "IDBDatabase", info.Holder(), info.GetIsolate());
    IDBDatabase* impl = V8IDBDatabase::toNative(info.Holder());
    V8StringResource<> storeName;
    V8StringResource<> mode;
    {
        TOSTRING_VOID_INTERNAL(storeName, info[0]);
        TOSTRING_VOID_INTERNAL(mode, argumentOrNull(info, 1));
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<IDBTransaction> result = impl->transaction(executionContext, storeName, mode, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void transaction2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "transaction", "IDBDatabase", info.Holder(), info.GetIsolate());
    IDBDatabase* impl = V8IDBDatabase::toNative(info.Holder());
    Vector<String> storeNames;
    V8StringResource<> mode;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(storeNames, toNativeArray<String>(info[0], 1, info.GetIsolate()));
        TOSTRING_VOID_INTERNAL(mode, argumentOrNull(info, 1));
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<IDBTransaction> result = impl->transaction(executionContext, storeNames, mode, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void transaction3Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "transaction", "IDBDatabase", info.Holder(), info.GetIsolate());
    IDBDatabase* impl = V8IDBDatabase::toNative(info.Holder());
    DOMStringList* storeNames;
    V8StringResource<> mode;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(storeNames, V8DOMStringList::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        TOSTRING_VOID_INTERNAL(mode, argumentOrNull(info, 1));
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    RawPtr<IDBTransaction> result = impl->transaction(executionContext, storeNames, mode, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void transactionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "transaction", "IDBDatabase", info.Holder(), isolate);
    switch (std::min(2, info.Length())) {
    case 1:
        if (V8DOMStringList::hasInstance(info[0], isolate)) {
            transaction3Method(info);
            return;
        }
        if (info[0]->IsArray()) {
            transaction2Method(info);
            return;
        }
        if (true) {
            transaction1Method(info);
            return;
        }
        break;
    case 2:
        if (V8DOMStringList::hasInstance(info[0], isolate)) {
            transaction3Method(info);
            return;
        }
        if (info[0]->IsArray()) {
            transaction2Method(info);
            return;
        }
        if (true) {
            transaction1Method(info);
            return;
        }
        break;
    default:
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
}

static void transactionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    IDBDatabaseV8Internal::transactionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    IDBDatabase* impl = V8IDBDatabase::toNative(info.Holder());
    impl->close();
}

static void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    IDBDatabaseV8Internal::closeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace IDBDatabaseV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8IDBDatabaseAttributes[] = {
    {"name", IDBDatabaseV8Internal::nameAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"version", IDBDatabaseV8Internal::versionAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"objectStoreNames", IDBDatabaseV8Internal::objectStoreNamesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"onabort", IDBDatabaseV8Internal::onabortAttributeGetterCallback, IDBDatabaseV8Internal::onabortAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"onclose", IDBDatabaseV8Internal::oncloseAttributeGetterCallback, IDBDatabaseV8Internal::oncloseAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"onerror", IDBDatabaseV8Internal::onerrorAttributeGetterCallback, IDBDatabaseV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"onversionchange", IDBDatabaseV8Internal::onversionchangeAttributeGetterCallback, IDBDatabaseV8Internal::onversionchangeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8IDBDatabaseMethods[] = {
    {"createObjectStore", IDBDatabaseV8Internal::createObjectStoreMethodCallback, 0, 1},
    {"deleteObjectStore", IDBDatabaseV8Internal::deleteObjectStoreMethodCallback, 0, 1},
    {"transaction", IDBDatabaseV8Internal::transactionMethodCallback, 0, 1},
    {"close", IDBDatabaseV8Internal::closeMethodCallback, 0, 0},
};

static void configureV8IDBDatabaseTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "IDBDatabase", V8EventTarget::domTemplate(isolate), V8IDBDatabase::internalFieldCount,
        V8IDBDatabaseAttributes, WTF_ARRAY_LENGTH(V8IDBDatabaseAttributes),
        0, 0,
        V8IDBDatabaseMethods, WTF_ARRAY_LENGTH(V8IDBDatabaseMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8IDBDatabase::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8IDBDatabaseTemplate);
}

bool V8IDBDatabase::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8IDBDatabase::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

IDBDatabase* V8IDBDatabase::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

ActiveDOMObject* V8IDBDatabase::toActiveDOMObject(v8::Handle<v8::Object> wrapper)
{
    return toNative(wrapper);
}

EventTarget* V8IDBDatabase::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(IDBDatabase* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8IDBDatabase>(impl, isolate));
    return V8IDBDatabase::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8IDBDatabase::createWrapper(RawPtr<IDBDatabase> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8IDBDatabase>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8IDBDatabase>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8IDBDatabase::derefObject(void* object)
{
}

template<>
v8::Handle<v8::Value> toV8NoInline(IDBDatabase* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
