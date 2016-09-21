// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLAllCollection.h"

#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8GCController.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/Element.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/html/LabelsNodeList.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(HTMLAllCollection* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8HTMLAllCollection::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::HTMLAllCollection* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8HTMLAllCollection::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLAllCollection::domTemplate, V8HTMLAllCollection::derefObject, 0, 0, V8HTMLAllCollection::visitDOMWrapper, V8HTMLAllCollection::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace HTMLAllCollectionV8Internal {

template <typename T> void V8_USE(T) { }

static void lengthAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    HTMLAllCollection* impl = V8HTMLAllCollection::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLAllCollectionV8Internal::lengthAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void itemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    V8HTMLAllCollection::itemMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedItemMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("namedItem", "HTMLAllCollection", 1, info.Length(), info.GetIsolate());
        return;
    }
    HTMLAllCollection* impl = V8HTMLAllCollection::toNative(info.Holder());
    V8StringResource<> name;
    {
        TOSTRING_VOID_INTERNAL(name, info[0]);
    }
    bool result0Enabled = false;
    RefPtrWillBeRawPtr<NodeList> result0;
    bool result1Enabled = false;
    RefPtrWillBeRawPtr<Element> result1;
    impl->namedGetter(name, result0Enabled, result0, result1Enabled, result1);
    if (result0Enabled) {
        v8SetReturnValue(info, result0.release());
        return;
    }
    if (result1Enabled) {
        v8SetReturnValue(info, result1.release());
        return;
    }
    v8SetReturnValueNull(info);
}

static void namedItemMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    HTMLAllCollectionV8Internal::namedItemMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void indexedPropertyGetter(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    HTMLAllCollection* impl = V8HTMLAllCollection::toNative(info.Holder());
    RefPtrWillBeRawPtr<Element> result = impl->item(index);
    if (!result)
        return;
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void indexedPropertyGetterCallback(uint32_t index, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMIndexedProperty");
    HTMLAllCollectionV8Internal::indexedPropertyGetter(index, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyGetter(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    if (info.Holder()->HasRealNamedProperty(name))
        return;
    if (!info.Holder()->GetRealNamedPropertyInPrototypeChain(name).IsEmpty())
        return;

    HTMLAllCollection* impl = V8HTMLAllCollection::toNative(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name);
    bool result0Enabled = false;
    RefPtrWillBeRawPtr<NodeList> result0;
    bool result1Enabled = false;
    RefPtrWillBeRawPtr<Element> result1;
    impl->namedGetter(propertyName, result0Enabled, result0, result1Enabled, result1);
    if (!result0Enabled && !result1Enabled)
        return;
    if (result0Enabled) {
        v8SetReturnValueFast(info, WTF::getPtr(result0.release()), impl);
        return;
    }
    if (result1Enabled) {
        v8SetReturnValueFast(info, WTF::getPtr(result1.release()), impl);
        return;
    }
    v8SetReturnValueNull(info);
}

static void namedPropertyGetterCallback(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    HTMLAllCollectionV8Internal::namedPropertyGetter(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyQuery(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    HTMLAllCollection* impl = V8HTMLAllCollection::toNative(info.Holder());
    AtomicString propertyName = toCoreAtomicString(name);
    v8::String::Utf8Value namedProperty(name);
    ExceptionState exceptionState(ExceptionState::GetterContext, *namedProperty, "HTMLAllCollection", info.Holder(), info.GetIsolate());
    bool result = impl->namedPropertyQuery(propertyName, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    if (!result)
        return;
    v8SetReturnValueInt(info, v8::None);
}

static void namedPropertyQueryCallback(v8::Local<v8::String> name, const v8::PropertyCallbackInfo<v8::Integer>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    HTMLAllCollectionV8Internal::namedPropertyQuery(name, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void namedPropertyEnumerator(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    HTMLAllCollection* impl = V8HTMLAllCollection::toNative(info.Holder());
    v8::Isolate* isolate = info.GetIsolate();
    Vector<String> names;
    ExceptionState exceptionState(ExceptionState::EnumerationContext, "HTMLAllCollection", info.Holder(), isolate);
    impl->namedPropertyEnumerator(names, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    v8::Handle<v8::Array> v8names = v8::Array::New(isolate, names.size());
    for (size_t i = 0; i < names.size(); ++i)
        v8names->Set(v8::Integer::New(isolate, i), v8String(isolate, names[i]));
    v8SetReturnValue(info, v8names);
}

static void namedPropertyEnumeratorCallback(const v8::PropertyCallbackInfo<v8::Array>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMNamedProperty");
    HTMLAllCollectionV8Internal::namedPropertyEnumerator(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace HTMLAllCollectionV8Internal

void V8HTMLAllCollection::visitDOMWrapper(void* object, const v8::Persistent<v8::Object>& wrapper, v8::Isolate* isolate)
{
    HTMLAllCollection* impl = fromInternalPointer(object);
    // The ownerNode() method may return a reference or a pointer.
    if (Node* owner = WTF::getPtr(impl->ownerNode())) {
        Node* root = V8GCController::opaqueRootForGC(owner, isolate);
        isolate->SetReferenceFromGroup(v8::UniqueId(reinterpret_cast<intptr_t>(root)), wrapper);
        return;
    }
    setObjectGroup(object, wrapper, isolate);
}

static const V8DOMConfiguration::AttributeConfiguration V8HTMLAllCollectionAttributes[] = {
    {"length", HTMLAllCollectionV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8HTMLAllCollectionMethods[] = {
    {"item", HTMLAllCollectionV8Internal::itemMethodCallback, 0, 0},
    {"namedItem", HTMLAllCollectionV8Internal::namedItemMethodCallback, 0, 1},
};

static void configureV8HTMLAllCollectionTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "HTMLAllCollection", v8::Local<v8::FunctionTemplate>(), V8HTMLAllCollection::internalFieldCount,
        V8HTMLAllCollectionAttributes, WTF_ARRAY_LENGTH(V8HTMLAllCollectionAttributes),
        0, 0,
        V8HTMLAllCollectionMethods, WTF_ARRAY_LENGTH(V8HTMLAllCollectionMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    functionTemplate->InstanceTemplate()->SetIndexedPropertyHandler(HTMLAllCollectionV8Internal::indexedPropertyGetterCallback, 0, 0, 0, indexedPropertyEnumerator<HTMLAllCollection>);
    functionTemplate->InstanceTemplate()->SetNamedPropertyHandler(HTMLAllCollectionV8Internal::namedPropertyGetterCallback, 0, HTMLAllCollectionV8Internal::namedPropertyQueryCallback, 0, HTMLAllCollectionV8Internal::namedPropertyEnumeratorCallback);
    functionTemplate->InstanceTemplate()->SetCallAsFunctionHandler(V8HTMLAllCollection::legacyCallCustom);
    functionTemplate->InstanceTemplate()->MarkAsUndetectable();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8HTMLAllCollection::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8HTMLAllCollectionTemplate);
}

bool V8HTMLAllCollection::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8HTMLAllCollection::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLAllCollection* V8HTMLAllCollection::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(HTMLAllCollection* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8HTMLAllCollection>(impl, isolate));
    return V8HTMLAllCollection::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8HTMLAllCollection::createWrapper(PassRefPtrWillBeRawPtr<HTMLAllCollection> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8HTMLAllCollection>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8HTMLAllCollection>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8HTMLAllCollection::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(HTMLAllCollection* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
