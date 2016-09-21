// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SpeechRecognitionError.h"

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

static void initializeScriptWrappableForInterface(SpeechRecognitionError* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SpeechRecognitionError::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SpeechRecognitionError* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SpeechRecognitionError::wrapperTypeInfo = { gin::kEmbedderBlink, V8SpeechRecognitionError::domTemplate, V8SpeechRecognitionError::derefObject, 0, 0, 0, V8SpeechRecognitionError::installPerContextEnabledMethods, &V8Event::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace SpeechRecognitionErrorV8Internal {

template <typename T> void V8_USE(T) { }

static void errorAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SpeechRecognitionError* impl = V8SpeechRecognitionError::toNative(holder);
    v8SetReturnValueString(info, impl->error(), info.GetIsolate());
}

static void errorAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SpeechRecognitionErrorV8Internal::errorAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void messageAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SpeechRecognitionError* impl = V8SpeechRecognitionError::toNative(holder);
    v8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void messageAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SpeechRecognitionErrorV8Internal::messageAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "SpeechRecognitionError", info.Holder(), isolate);
    if (info.Length() < 1) {
        exceptionState.throwTypeError("An event name must be provided.");
        exceptionState.throwIfNeeded();
        return;
    }

    TOSTRING_VOID(V8StringResource<>, type, info[0]);
    SpeechRecognitionErrorInit eventInit;
    if (info.Length() >= 2) {
        TONATIVE_VOID(Dictionary, options, Dictionary(info[1], isolate));
        if (!initializeSpeechRecognitionError(eventInit, options, exceptionState, info)) {
            exceptionState.throwIfNeeded();
            return;
        }
    }
    RefPtrWillBeRawPtr<SpeechRecognitionError> event = SpeechRecognitionError::create(type, eventInit);
    v8::Handle<v8::Object> wrapper = info.Holder();
    V8DOMWrapper::associateObjectWithWrapper<V8SpeechRecognitionError>(event.release(), &V8SpeechRecognitionError::wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    v8SetReturnValue(info, wrapper);
}

} // namespace SpeechRecognitionErrorV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8SpeechRecognitionErrorAttributes[] = {
    {"error", SpeechRecognitionErrorV8Internal::errorAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"message", SpeechRecognitionErrorV8Internal::messageAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

bool initializeSpeechRecognitionError(SpeechRecognitionErrorInit& eventInit, const Dictionary& options, ExceptionState& exceptionState, const v8::FunctionCallbackInfo<v8::Value>& info, const String& forEventName)
{
    Dictionary::ConversionContext conversionContext(forEventName.isEmpty() ? String("SpeechRecognitionError") : forEventName, "", exceptionState);
    if (!initializeEvent(eventInit, options, exceptionState, info, forEventName.isEmpty() ? String("SpeechRecognitionError") : forEventName))
        return false;

    if (!options.convert(conversionContext.setConversionType("DOMString", false), "error", eventInit.error))
        return false;
    if (!options.convert(conversionContext.setConversionType("DOMString", false), "message", eventInit.message))
        return false;
    return true;
}

void V8SpeechRecognitionError::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("Blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        throwTypeError(ExceptionMessages::constructorNotCallableAsFunction("SpeechRecognitionError"), info.GetIsolate());
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    SpeechRecognitionErrorV8Internal::constructor(info);
}

static void configureV8SpeechRecognitionErrorTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SpeechRecognitionError", V8Event::domTemplate(isolate), V8SpeechRecognitionError::internalFieldCount,
        V8SpeechRecognitionErrorAttributes, WTF_ARRAY_LENGTH(V8SpeechRecognitionErrorAttributes),
        0, 0,
        0, 0,
        isolate);
    functionTemplate->SetCallHandler(V8SpeechRecognitionError::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SpeechRecognitionError::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SpeechRecognitionErrorTemplate);
}

bool V8SpeechRecognitionError::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SpeechRecognitionError::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechRecognitionError* V8SpeechRecognitionError::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(SpeechRecognitionError* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SpeechRecognitionError>(impl, isolate));
    return V8SpeechRecognitionError::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SpeechRecognitionError::createWrapper(PassRefPtrWillBeRawPtr<SpeechRecognitionError> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SpeechRecognitionError>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SpeechRecognitionError>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8SpeechRecognitionError::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(SpeechRecognitionError* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
