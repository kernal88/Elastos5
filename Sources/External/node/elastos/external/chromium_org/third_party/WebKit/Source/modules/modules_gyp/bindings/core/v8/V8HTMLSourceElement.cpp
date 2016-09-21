// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8HTMLSourceElement.h"

#include "HTMLNames.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMActivityLogger.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementCallbackDispatcher.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(HTMLSourceElement* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8HTMLSourceElement::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::HTMLSourceElement* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8HTMLSourceElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLSourceElement::domTemplate, V8HTMLSourceElement::derefObject, 0, V8HTMLSourceElement::toEventTarget, 0, V8HTMLSourceElement::installPerContextEnabledMethods, &V8HTMLElement::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace HTMLSourceElementV8Internal {

template <typename T> void V8_USE(T) { }

static void srcAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    HTMLSourceElement* impl = V8HTMLSourceElement::toNative(holder);
    v8SetReturnValueString(info, impl->getURLAttribute(HTMLNames::srcAttr), info.GetIsolate());
}

static void srcAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLSourceElementV8Internal::srcAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void srcAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    TOSTRING_VOID(V8StringResource<>, cppValue, v8Value);
    impl->setAttribute(HTMLNames::srcAttr, cppValue);
}

static void srcAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (scriptState->world().isIsolatedWorld() && contextData && contextData->activityLogger()) {
        contextData->activityLogger()->logSetter("HTMLSourceElement.src", v8Value);
    }
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    HTMLSourceElementV8Internal::srcAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void typeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    HTMLSourceElement* impl = V8HTMLSourceElement::toNative(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLSourceElementV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void typeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    HTMLSourceElement* impl = V8HTMLSourceElement::toNative(holder);
    TOSTRING_VOID(V8StringResource<>, cppValue, v8Value);
    impl->setType(cppValue);
}

static void typeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    HTMLSourceElementV8Internal::typeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void srcsetAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::srcsetAttr), info.GetIsolate());
}

static void srcsetAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLSourceElementV8Internal::srcsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void srcsetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    TOSTRING_VOID(V8StringResource<>, cppValue, v8Value);
    impl->setAttribute(HTMLNames::srcsetAttr, cppValue);
}

static void srcsetAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    HTMLSourceElementV8Internal::srcsetAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void sizesAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::sizesAttr), info.GetIsolate());
}

static void sizesAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLSourceElementV8Internal::sizesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void sizesAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    TOSTRING_VOID(V8StringResource<>, cppValue, v8Value);
    impl->setAttribute(HTMLNames::sizesAttr, cppValue);
}

static void sizesAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    HTMLSourceElementV8Internal::sizesAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void mediaAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::mediaAttr), info.GetIsolate());
}

static void mediaAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLSourceElementV8Internal::mediaAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void mediaAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    TOSTRING_VOID(V8StringResource<>, cppValue, v8Value);
    impl->setAttribute(HTMLNames::mediaAttr, cppValue);
}

static void mediaAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    HTMLSourceElementV8Internal::mediaAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void integrityAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::integrityAttr), info.GetIsolate());
}

static void integrityAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    HTMLSourceElementV8Internal::integrityAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void integrityAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    Element* impl = V8Element::toNative(holder);
    TOSTRING_VOID(V8StringResource<>, cppValue, v8Value);
    impl->setAttribute(HTMLNames::integrityAttr, cppValue);
}

static void integrityAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    HTMLSourceElementV8Internal::integrityAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace HTMLSourceElementV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8HTMLSourceElementAttributes[] = {
    {"src", HTMLSourceElementV8Internal::srcAttributeGetterCallback, HTMLSourceElementV8Internal::srcAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"type", HTMLSourceElementV8Internal::typeAttributeGetterCallback, HTMLSourceElementV8Internal::typeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static void configureV8HTMLSourceElementTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::mediaEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "", V8HTMLElement::domTemplate(isolate), V8HTMLSourceElement::internalFieldCount, 0, 0, 0, 0, 0, 0, isolate);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "HTMLSourceElement", V8HTMLElement::domTemplate(isolate), V8HTMLSourceElement::internalFieldCount,
            V8HTMLSourceElementAttributes, WTF_ARRAY_LENGTH(V8HTMLSourceElementAttributes),
            0, 0,
            0, 0,
            isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    if (RuntimeEnabledFeatures::pictureEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attributeConfiguration =\
        {"srcset", HTMLSourceElementV8Internal::srcsetAttributeGetterCallback, HTMLSourceElementV8Internal::srcsetAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */};
        V8DOMConfiguration::installAttribute(instanceTemplate, prototypeTemplate, attributeConfiguration, isolate);
    }
    if (RuntimeEnabledFeatures::pictureEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attributeConfiguration =\
        {"sizes", HTMLSourceElementV8Internal::sizesAttributeGetterCallback, HTMLSourceElementV8Internal::sizesAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */};
        V8DOMConfiguration::installAttribute(instanceTemplate, prototypeTemplate, attributeConfiguration, isolate);
    }
    if (RuntimeEnabledFeatures::pictureEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attributeConfiguration =\
        {"media", HTMLSourceElementV8Internal::mediaAttributeGetterCallback, HTMLSourceElementV8Internal::mediaAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */};
        V8DOMConfiguration::installAttribute(instanceTemplate, prototypeTemplate, attributeConfiguration, isolate);
    }
    if (RuntimeEnabledFeatures::subresourceIntegrityEnabled()) {
        static const V8DOMConfiguration::AttributeConfiguration attributeConfiguration =\
        {"integrity", HTMLSourceElementV8Internal::integrityAttributeGetterCallback, HTMLSourceElementV8Internal::integrityAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */};
        V8DOMConfiguration::installAttribute(instanceTemplate, prototypeTemplate, attributeConfiguration, isolate);
    }

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8HTMLSourceElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8HTMLSourceElementTemplate);
}

bool V8HTMLSourceElement::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8HTMLSourceElement::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLSourceElement* V8HTMLSourceElement::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8HTMLSourceElement::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(HTMLSourceElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8HTMLSourceElement>(impl, isolate));
    return V8HTMLSourceElement::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8HTMLSourceElement::createWrapper(PassRefPtrWillBeRawPtr<HTMLSourceElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8HTMLSourceElement>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8HTMLSourceElement>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8HTMLSourceElement::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(HTMLSourceElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
