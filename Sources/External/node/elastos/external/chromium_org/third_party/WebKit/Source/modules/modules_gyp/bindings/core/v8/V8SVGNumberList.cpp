// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGNumberList.h"

#include "bindings/core/v8/V8SVGElement.h"
#include "bindings/core/v8/V8SVGNumber.h"
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

static void initializeScriptWrappableForInterface(SVGNumberListTearOff* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SVGNumberList::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SVGNumberListTearOff* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SVGNumberList::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGNumberList::domTemplate, V8SVGNumberList::derefObject, 0, 0, V8SVGNumberList::visitDOMWrapper, V8SVGNumberList::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, RefCountedObject };

namespace SVGNumberListTearOffV8Internal {

template <typename T> void V8_USE(T) { }

static void lengthAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGNumberListTearOffV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void numberOfItemsAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void numberOfItemsAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGNumberListTearOffV8Internal::numberOfItemsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clear", "SVGNumberList", info.Holder(), info.GetIsolate());
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    impl->clear(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::clearMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void initializeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initialize", "SVGNumberList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    SVGNumberTearOff* item;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8SVGNumber::hasInstance(info[0], info.GetIsolate())) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGNumber'.");
            exceptionState.throwIfNeeded();
            return;
        }
        TONATIVE_VOID_INTERNAL(item, V8SVGNumber::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
    }
    RefPtr<SVGNumberTearOff> result = impl->initialize(item, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void initializeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::initializeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getItem", "SVGNumberList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    unsigned index;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(index, toUInt32(info[0], exceptionState), exceptionState);
    }
    RefPtr<SVGNumberTearOff> result = impl->getItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::getItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void insertItemBeforeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertItemBefore", "SVGNumberList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        throwMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    SVGNumberTearOff* item;
    unsigned index;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8SVGNumber::hasInstance(info[0], info.GetIsolate())) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGNumber'.");
            exceptionState.throwIfNeeded();
            return;
        }
        TONATIVE_VOID_INTERNAL(item, V8SVGNumber::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(index, toUInt32(info[1], exceptionState), exceptionState);
    }
    RefPtr<SVGNumberTearOff> result = impl->insertItemBefore(item, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void insertItemBeforeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::insertItemBeforeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void replaceItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceItem", "SVGNumberList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        throwMinimumArityTypeError(exceptionState, 2, info.Length());
        return;
    }
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    SVGNumberTearOff* item;
    unsigned index;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8SVGNumber::hasInstance(info[0], info.GetIsolate())) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGNumber'.");
            exceptionState.throwIfNeeded();
            return;
        }
        TONATIVE_VOID_INTERNAL(item, V8SVGNumber::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(index, toUInt32(info[1], exceptionState), exceptionState);
    }
    RefPtr<SVGNumberTearOff> result = impl->replaceItem(item, index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void replaceItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::replaceItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void removeItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "removeItem", "SVGNumberList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    unsigned index;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(index, toUInt32(info[0], exceptionState), exceptionState);
    }
    RefPtr<SVGNumberTearOff> result = impl->removeItem(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void removeItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::removeItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void appendItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendItem", "SVGNumberList", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    SVGNumberTearOff* item;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8SVGNumber::hasInstance(info[0], info.GetIsolate())) {
            exceptionState.throwTypeError("parameter 1 is not of type 'SVGNumber'.");
            exceptionState.throwIfNeeded();
            return;
        }
        TONATIVE_VOID_INTERNAL(item, V8SVGNumber::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
    }
    RefPtr<SVGNumberTearOff> result = impl->appendItem(item, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void appendItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGNumberListTearOffV8Internal::appendItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    ExceptionState exceptionState(ExceptionState::IndexedGetterContext, "SVGNumberList", info.Holder(), info.GetIsolate());
    RefPtr<SVGNumberTearOff> result = impl->getItem(index, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMIndexedProperty");
    SVGNumberListTearOffV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void indexedPropertySetter(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    SVGNumberListTearOff* impl = V8SVGNumberList::toNative(info.Holder());
    TONATIVE_VOID(SVGNumberTearOff*, propertyValue, V8SVGNumber::toNativeWithTypeCheck(info.GetIsolate(), v8Value));
    ExceptionState exceptionState(ExceptionState::IndexedSetterContext, "SVGNumberList", info.Holder(), info.GetIsolate());
    bool result = impl->anonymousIndexedSetter(index, propertyValue, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValue(info, v8Value);
}

static void indexedPropertySetterCallback(uint32_t index, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMIndexedProperty");
    SVGNumberListTearOffV8Internal::indexedPropertySetter(index, v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace SVGNumberListTearOffV8Internal

void V8SVGNumberList::visitDOMWrapper(void* object, const v8::Persistent<v8::Object>& wrapper, v8::Isolate* isolate)
{
    SVGNumberListTearOff* impl = fromInternalPointer(object);
    v8::Local<v8::Object> creationContext = v8::Local<v8::Object>::New(isolate, wrapper);
    V8WrapperInstantiationScope scope(creationContext, isolate);
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        if (!DOMDataStore::containsWrapper<V8SVGElement>(contextElement, isolate))
            wrap(contextElement, creationContext, isolate);
        DOMDataStore::setWrapperReference<V8SVGElement>(wrapper, contextElement, isolate);
    }
    setObjectGroup(object, wrapper, isolate);
}

static const V8DOMConfiguration::AttributeConfiguration V8SVGNumberListAttributes[] = {
    {"length", SVGNumberListTearOffV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"numberOfItems", SVGNumberListTearOffV8Internal::numberOfItemsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8SVGNumberListMethods[] = {
    {"clear", SVGNumberListTearOffV8Internal::clearMethodCallback, 0, 0},
    {"initialize", SVGNumberListTearOffV8Internal::initializeMethodCallback, 0, 1},
    {"getItem", SVGNumberListTearOffV8Internal::getItemMethodCallback, 0, 1},
    {"insertItemBefore", SVGNumberListTearOffV8Internal::insertItemBeforeMethodCallback, 0, 2},
    {"replaceItem", SVGNumberListTearOffV8Internal::replaceItemMethodCallback, 0, 2},
    {"removeItem", SVGNumberListTearOffV8Internal::removeItemMethodCallback, 0, 1},
    {"appendItem", SVGNumberListTearOffV8Internal::appendItemMethodCallback, 0, 1},
};

static void configureV8SVGNumberListTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SVGNumberList", v8::Local<v8::FunctionTemplate>(), V8SVGNumberList::internalFieldCount,
        V8SVGNumberListAttributes, WTF_ARRAY_LENGTH(V8SVGNumberListAttributes),
        0, 0,
        V8SVGNumberListMethods, WTF_ARRAY_LENGTH(V8SVGNumberListMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    functionTemplate->InstanceTemplate()->SetIndexedPropertyHandler(SVGNumberListTearOffV8Internal::indexedPropertyGetterCallback, SVGNumberListTearOffV8Internal::indexedPropertySetterCallback, 0, 0, indexedPropertyEnumerator<SVGNumberListTearOff>);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SVGNumberList::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SVGNumberListTemplate);
}

bool V8SVGNumberList::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SVGNumberList::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGNumberListTearOff* V8SVGNumberList::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(SVGNumberListTearOff* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGNumberList>(impl, isolate));
    return V8SVGNumberList::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SVGNumberList::createWrapper(PassRefPtr<SVGNumberListTearOff> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGNumberList>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SVGNumberList>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8SVGNumberList::derefObject(void* object)
{
    fromInternalPointer(object)->deref();
}

template<>
v8::Handle<v8::Value> toV8NoInline(SVGNumberListTearOff* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
