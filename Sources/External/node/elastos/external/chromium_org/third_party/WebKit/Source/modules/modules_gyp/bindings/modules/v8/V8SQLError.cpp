// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SQLError.h"

#include "bindings/v8/ExceptionState.h"
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

static void initializeScriptWrappableForInterface(SQLError* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SQLError::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SQLError* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SQLError::wrapperTypeInfo = { gin::kEmbedderBlink, V8SQLError::domTemplate, V8SQLError::derefObject, 0, 0, 0, V8SQLError::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace SQLErrorV8Internal {

template <typename T> void V8_USE(T) { }

static void codeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SQLError* impl = V8SQLError::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->code());
}

static void codeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SQLErrorV8Internal::codeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void messageAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SQLError* impl = V8SQLError::toNative(holder);
    v8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void messageAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SQLErrorV8Internal::messageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace SQLErrorV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8SQLErrorAttributes[] = {
    {"code", SQLErrorV8Internal::codeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"message", SQLErrorV8Internal::messageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static void configureV8SQLErrorTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SQLError", v8::Local<v8::FunctionTemplate>(), V8SQLError::internalFieldCount,
        V8SQLErrorAttributes, WTF_ARRAY_LENGTH(V8SQLErrorAttributes),
        0, 0,
        0, 0,
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    static const V8DOMConfiguration::ConstantConfiguration V8SQLErrorConstants[] = {
        {"UNKNOWN_ERR", 0},
        {"DATABASE_ERR", 1},
        {"VERSION_ERR", 2},
        {"TOO_LARGE_ERR", 3},
        {"QUOTA_ERR", 4},
        {"SYNTAX_ERR", 5},
        {"CONSTRAINT_ERR", 6},
        {"TIMEOUT_ERR", 7},
    };
    V8DOMConfiguration::installConstants(functionTemplate, prototypeTemplate, V8SQLErrorConstants, WTF_ARRAY_LENGTH(V8SQLErrorConstants), isolate);
    COMPILE_ASSERT(0 == SQLError::UNKNOWN_ERR, TheValueOfSQLError_UNKNOWN_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(1 == SQLError::DATABASE_ERR, TheValueOfSQLError_DATABASE_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(2 == SQLError::VERSION_ERR, TheValueOfSQLError_VERSION_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(3 == SQLError::TOO_LARGE_ERR, TheValueOfSQLError_TOO_LARGE_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(4 == SQLError::QUOTA_ERR, TheValueOfSQLError_QUOTA_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(5 == SQLError::SYNTAX_ERR, TheValueOfSQLError_SYNTAX_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(6 == SQLError::CONSTRAINT_ERR, TheValueOfSQLError_CONSTRAINT_ERRDoesntMatchWithImplementation);
    COMPILE_ASSERT(7 == SQLError::TIMEOUT_ERR, TheValueOfSQLError_TIMEOUT_ERRDoesntMatchWithImplementation);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SQLError::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SQLErrorTemplate);
}

bool V8SQLError::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SQLError::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SQLError* V8SQLError::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(SQLError* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SQLError>(impl, isolate));
    return V8SQLError::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SQLError::createWrapper(PassRefPtrWillBeRawPtr<SQLError> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SQLError>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SQLError>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8SQLError::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(SQLError* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
