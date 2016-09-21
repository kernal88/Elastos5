// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGCircleElement.h"

#include "bindings/core/v8/V8SVGAnimatedLength.h"
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

static void initializeScriptWrappableForInterface(SVGCircleElement* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SVGCircleElement::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SVGCircleElement* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SVGCircleElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGCircleElement::domTemplate, V8SVGCircleElement::derefObject, 0, V8SVGCircleElement::toEventTarget, 0, V8SVGCircleElement::installPerContextEnabledMethods, &V8SVGGeometryElement::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace SVGCircleElementV8Internal {

template <typename T> void V8_USE(T) { }

static void cxAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGCircleElement* impl = V8SVGCircleElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->cx()), impl);
}

static void cxAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGCircleElementV8Internal::cxAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void cyAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGCircleElement* impl = V8SVGCircleElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->cy()), impl);
}

static void cyAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGCircleElementV8Internal::cyAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void rAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGCircleElement* impl = V8SVGCircleElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->r()), impl);
}

static void rAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGCircleElementV8Internal::rAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace SVGCircleElementV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8SVGCircleElementAttributes[] = {
    {"cx", SVGCircleElementV8Internal::cxAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"cy", SVGCircleElementV8Internal::cyAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"r", SVGCircleElementV8Internal::rAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static void configureV8SVGCircleElementTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SVGCircleElement", V8SVGGeometryElement::domTemplate(isolate), V8SVGCircleElement::internalFieldCount,
        V8SVGCircleElementAttributes, WTF_ARRAY_LENGTH(V8SVGCircleElementAttributes),
        0, 0,
        0, 0,
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SVGCircleElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SVGCircleElementTemplate);
}

bool V8SVGCircleElement::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SVGCircleElement::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGCircleElement* V8SVGCircleElement::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8SVGCircleElement::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(SVGCircleElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGCircleElement>(impl, isolate));
    return V8SVGCircleElement::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SVGCircleElement::createWrapper(PassRefPtrWillBeRawPtr<SVGCircleElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGCircleElement>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SVGCircleElement>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8SVGCircleElement::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(SVGCircleElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
