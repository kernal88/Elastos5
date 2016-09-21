// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HeaderMap.h"

#include "bindings/modules/v8/V8HeaderMapForEachCallback.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/ScriptValue.h"
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

static void initializeScriptWrappableForInterface(HeaderMap* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8HeaderMap::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::HeaderMap* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8HeaderMap::wrapperTypeInfo = { gin::kEmbedderBlink, V8HeaderMap::domTemplate, V8HeaderMap::derefObject, 0, 0, 0, V8HeaderMap::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, RefCountedObject };

namespace HeaderMapV8Internal {

template <typename T> void V8_USE(T) { }

static void sizeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    HeaderMap* impl = V8HeaderMap::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->size());
}

static void sizeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HeaderMapV8Internal::sizeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HeaderMap* impl = V8HeaderMap::toNative(info.Holder());
    impl->clear();
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HeaderMapV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void deleteMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("delete", "HeaderMap", 1, info.Length(), info.GetIsolate());
        return;
    }
    HeaderMap* impl = V8HeaderMap::toNative(info.Holder());
    V8StringResource<> key;
    {
        TOSTRING_VOID_INTERNAL(key, info[0]);
    }
    v8SetReturnValueBool(info, impl->remove(key));
}

static void deleteMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HeaderMapV8Internal::deleteMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("get", "HeaderMap", 1, info.Length(), info.GetIsolate());
        return;
    }
    HeaderMap* impl = V8HeaderMap::toNative(info.Holder());
    V8StringResource<> key;
    {
        TOSTRING_VOID_INTERNAL(key, info[0]);
    }
    v8SetReturnValueString(info, impl->get(key), info.GetIsolate());
}

static void getMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HeaderMapV8Internal::getMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void hasMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("has", "HeaderMap", 1, info.Length(), info.GetIsolate());
        return;
    }
    HeaderMap* impl = V8HeaderMap::toNative(info.Holder());
    V8StringResource<> key;
    {
        TOSTRING_VOID_INTERNAL(key, info[0]);
    }
    v8SetReturnValueBool(info, impl->has(key));
}

static void hasMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HeaderMapV8Internal::hasMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void setMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 2)) {
        throwMinimumArityTypeErrorForMethod("set", "HeaderMap", 2, info.Length(), info.GetIsolate());
        return;
    }
    HeaderMap* impl = V8HeaderMap::toNative(info.Holder());
    V8StringResource<> key;
    V8StringResource<> value;
    {
        TOSTRING_VOID_INTERNAL(key, info[0]);
        TOSTRING_VOID_INTERNAL(value, info[1]);
    }
    impl->set(key, value);
}

static void setMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HeaderMapV8Internal::setMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void forEachMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("forEach", "HeaderMap", 1, info.Length(), info.GetIsolate());
        return;
    }
    HeaderMap* impl = V8HeaderMap::toNative(info.Holder());
    OwnPtr<HeaderMapForEachCallback> callback;
    ScriptValue thisArg;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() <= 0 || !info[0]->IsFunction()) {
            throwTypeError(ExceptionMessages::failedToExecute("forEach", "HeaderMap", "The callback provided as parameter 1 is not a function."), info.GetIsolate());
            return;
        }
        callback = V8HeaderMapForEachCallback::create(v8::Handle<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        if (UNLIKELY(info.Length() <= 1)) {
            impl->forEach(callback.release());
            return;
        }
        TONATIVE_VOID_INTERNAL(thisArg, ScriptValue(ScriptState::current(info.GetIsolate()), info[1]));
    }
    impl->forEach(callback.release(), thisArg);
}

static void forEachMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HeaderMapV8Internal::forEachMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    RefPtr<HeaderMap> impl = HeaderMap::create();

    v8::Handle<v8::Object> wrapper = info.Holder();
    V8DOMWrapper::associateObjectWithWrapper<V8HeaderMap>(impl.release(), &V8HeaderMap::wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    v8SetReturnValue(info, wrapper);
}

} // namespace HeaderMapV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8HeaderMapAttributes[] = {
    {"size", HeaderMapV8Internal::sizeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8HeaderMapMethods[] = {
    {"clear", HeaderMapV8Internal::clearMethodCallback, 0, 0},
    {"delete", HeaderMapV8Internal::deleteMethodCallback, 0, 1},
    {"get", HeaderMapV8Internal::getMethodCallback, 0, 1},
    {"has", HeaderMapV8Internal::hasMethodCallback, 0, 1},
    {"set", HeaderMapV8Internal::setMethodCallback, 0, 2},
    {"forEach", HeaderMapV8Internal::forEachMethodCallback, 0, 1},
};

void V8HeaderMap::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("Blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        throwTypeError(ExceptionMessages::constructorNotCallableAsFunction("HeaderMap"), info.GetIsolate());
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    HeaderMapV8Internal::constructor(info);
}

static void configureV8HeaderMapTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::serviceWorkerEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "", v8::Local<v8::FunctionTemplate>(), V8HeaderMap::internalFieldCount, 0, 0, 0, 0, 0, 0, isolate);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "HeaderMap", v8::Local<v8::FunctionTemplate>(), V8HeaderMap::internalFieldCount,
            V8HeaderMapAttributes, WTF_ARRAY_LENGTH(V8HeaderMapAttributes),
            0, 0,
            V8HeaderMapMethods, WTF_ARRAY_LENGTH(V8HeaderMapMethods),
            isolate);
    functionTemplate->SetCallHandler(V8HeaderMap::constructorCallback);
    functionTemplate->SetLength(0);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8HeaderMap::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8HeaderMapTemplate);
}

bool V8HeaderMap::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8HeaderMap::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HeaderMap* V8HeaderMap::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(HeaderMap* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8HeaderMap>(impl, isolate));
    return V8HeaderMap::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8HeaderMap::createWrapper(PassRefPtr<HeaderMap> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8HeaderMap>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8HeaderMap>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8HeaderMap::derefObject(void* object)
{
    fromInternalPointer(object)->deref();
}

template<>
v8::Handle<v8::Value> toV8NoInline(HeaderMap* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
