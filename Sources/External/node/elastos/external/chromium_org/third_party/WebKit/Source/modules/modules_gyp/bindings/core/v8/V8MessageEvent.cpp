// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8MessageEvent.h"

#include "bindings/core/v8/V8EventTarget.h"
#include "bindings/core/v8/V8MessagePort.h"
#include "bindings/core/v8/V8Window.h"
#include "bindings/v8/Dictionary.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/ScriptValue.h"
#include "bindings/v8/SerializedScriptValue.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(MessageEvent* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8MessageEvent::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::MessageEvent* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8MessageEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8MessageEvent::domTemplate, V8MessageEvent::derefObject, 0, 0, 0, V8MessageEvent::installPerContextEnabledMethods, &V8Event::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace MessageEventV8Internal {

template <typename T> void V8_USE(T) { }

static void originAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    MessageEvent* impl = V8MessageEvent::toNative(holder);
    v8SetReturnValueString(info, impl->origin(), info.GetIsolate());
}

static void originAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    MessageEventV8Internal::originAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void lastEventIdAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    MessageEvent* impl = V8MessageEvent::toNative(holder);
    v8SetReturnValueString(info, impl->lastEventId(), info.GetIsolate());
}

static void lastEventIdAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    MessageEventV8Internal::lastEventIdAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void sourceAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    MessageEvent* impl = V8MessageEvent::toNative(holder);
    bool isNull = false;
    RefPtrWillBeRawPtr<EventTarget> v8Value = impl->source(isNull);
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(v8Value.release()), impl);
}

static void sourceAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    MessageEventV8Internal::sourceAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void dataAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    V8MessageEvent::dataAttributeGetterCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void portsAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    MessageEvent* impl = V8MessageEvent::toNative(holder);
    v8SetReturnValue(info, v8Array(impl->ports(), info.Holder(), info.GetIsolate()));
}

static void portsAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    MessageEventV8Internal::portsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void initMessageEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::InitMessageEvent);
    V8MessageEvent::initMessageEventMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Isolate* isolate = info.GetIsolate();
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "MessageEvent", info.Holder(), isolate);
    if (info.Length() < 1) {
        exceptionState.throwTypeError("An event name must be provided.");
        exceptionState.throwIfNeeded();
        return;
    }

    TOSTRING_VOID(V8StringResource<>, type, info[0]);
    v8::Local<v8::Value> data;
    MessageEventInit eventInit;
    if (info.Length() >= 2) {
        TONATIVE_VOID(Dictionary, options, Dictionary(info[1], isolate));
        if (!initializeMessageEvent(eventInit, options, exceptionState, info)) {
            exceptionState.throwIfNeeded();
            return;
        }
        options.get("data", data);
        if (!data.IsEmpty())
            V8HiddenValue::setHiddenValue(isolate, info.Holder(), v8AtomicString(isolate, "data"), data);
    }
    RefPtrWillBeRawPtr<MessageEvent> event = MessageEvent::create(type, eventInit, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (DOMWrapperWorld::current(isolate).isIsolatedWorld()) {
        if (!data.IsEmpty())
            event->setSerializedData(SerializedScriptValue::createAndSwallowExceptions(data, isolate));
    }

    v8::Handle<v8::Object> wrapper = info.Holder();
    V8DOMWrapper::associateObjectWithWrapper<V8MessageEvent>(event.release(), &V8MessageEvent::wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    v8SetReturnValue(info, wrapper);
}

} // namespace MessageEventV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8MessageEventAttributes[] = {
    {"origin", MessageEventV8Internal::originAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"lastEventId", MessageEventV8Internal::lastEventIdAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"source", MessageEventV8Internal::sourceAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"data", MessageEventV8Internal::dataAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"ports", MessageEventV8Internal::portsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8MessageEventMethods[] = {
    {"initMessageEvent", MessageEventV8Internal::initMessageEventMethodCallback, 0, 0},
};

bool initializeMessageEvent(MessageEventInit& eventInit, const Dictionary& options, ExceptionState& exceptionState, const v8::FunctionCallbackInfo<v8::Value>& info, const String& forEventName)
{
    Dictionary::ConversionContext conversionContext(forEventName.isEmpty() ? String("MessageEvent") : forEventName, "", exceptionState);
    if (!initializeEvent(eventInit, options, exceptionState, info, forEventName.isEmpty() ? String("MessageEvent") : forEventName))
        return false;

    if (!options.convert(conversionContext.setConversionType("DOMString", false), "origin", eventInit.origin))
        return false;
    if (!options.convert(conversionContext.setConversionType("DOMString", false), "lastEventId", eventInit.lastEventId))
        return false;
    if (!options.convert(conversionContext.setConversionType("EventTarget", true), "source", eventInit.source))
        return false;
    if (!options.convert(conversionContext.setConversionType("MessagePort[]", false), "ports", eventInit.ports))
        return false;
    return true;
}

void V8MessageEvent::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SCOPED_SAMPLING_STATE("Blink", "DOMConstructor");
    if (!info.IsConstructCall()) {
        throwTypeError(ExceptionMessages::constructorNotCallableAsFunction("MessageEvent"), info.GetIsolate());
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    MessageEventV8Internal::constructor(info);
}

static void configureV8MessageEventTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "MessageEvent", V8Event::domTemplate(isolate), V8MessageEvent::internalFieldCount,
        V8MessageEventAttributes, WTF_ARRAY_LENGTH(V8MessageEventAttributes),
        0, 0,
        V8MessageEventMethods, WTF_ARRAY_LENGTH(V8MessageEventMethods),
        isolate);
    functionTemplate->SetCallHandler(V8MessageEvent::constructorCallback);
    functionTemplate->SetLength(1);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8MessageEvent::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8MessageEventTemplate);
}

bool V8MessageEvent::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8MessageEvent::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MessageEvent* V8MessageEvent::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> V8MessageEvent::createWrapper(PassRefPtrWillBeRawPtr<MessageEvent> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8MessageEvent>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8MessageEvent>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8MessageEvent::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(MessageEvent* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
