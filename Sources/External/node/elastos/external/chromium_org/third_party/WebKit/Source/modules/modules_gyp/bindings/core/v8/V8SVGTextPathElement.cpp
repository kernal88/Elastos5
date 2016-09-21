// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGTextPathElement.h"

#include "bindings/core/v8/V8SVGAnimatedEnumeration.h"
#include "bindings/core/v8/V8SVGAnimatedLength.h"
#include "bindings/core/v8/V8SVGAnimatedString.h"
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

static void initializeScriptWrappableForInterface(SVGTextPathElement* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SVGTextPathElement::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SVGTextPathElement* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SVGTextPathElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGTextPathElement::domTemplate, V8SVGTextPathElement::derefObject, 0, V8SVGTextPathElement::toEventTarget, 0, V8SVGTextPathElement::installPerContextEnabledMethods, &V8SVGTextContentElement::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace SVGTextPathElementV8Internal {

template <typename T> void V8_USE(T) { }

static void startOffsetAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGTextPathElement* impl = V8SVGTextPathElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->startOffset()), impl);
}

static void startOffsetAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGTextPathElementV8Internal::startOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void methodAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGTextPathElement* impl = V8SVGTextPathElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->method()), impl);
}

static void methodAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGTextPathElementV8Internal::methodAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void spacingAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGTextPathElement* impl = V8SVGTextPathElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->spacing()), impl);
}

static void spacingAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGTextPathElementV8Internal::spacingAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void hrefAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGTextPathElement* impl = V8SVGTextPathElement::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->href()), impl);
}

static void hrefAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGTextPathElementV8Internal::hrefAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace SVGTextPathElementV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8SVGTextPathElementAttributes[] = {
    {"startOffset", SVGTextPathElementV8Internal::startOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"method", SVGTextPathElementV8Internal::methodAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"spacing", SVGTextPathElementV8Internal::spacingAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"href", SVGTextPathElementV8Internal::hrefAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static void configureV8SVGTextPathElementTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SVGTextPathElement", V8SVGTextContentElement::domTemplate(isolate), V8SVGTextPathElement::internalFieldCount,
        V8SVGTextPathElementAttributes, WTF_ARRAY_LENGTH(V8SVGTextPathElementAttributes),
        0, 0,
        0, 0,
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    static const V8DOMConfiguration::ConstantConfiguration V8SVGTextPathElementConstants[] = {
        {"TEXTPATH_METHODTYPE_UNKNOWN", 0},
        {"TEXTPATH_METHODTYPE_ALIGN", 1},
        {"TEXTPATH_METHODTYPE_STRETCH", 2},
        {"TEXTPATH_SPACINGTYPE_UNKNOWN", 0},
        {"TEXTPATH_SPACINGTYPE_AUTO", 1},
        {"TEXTPATH_SPACINGTYPE_EXACT", 2},
    };
    V8DOMConfiguration::installConstants(functionTemplate, prototypeTemplate, V8SVGTextPathElementConstants, WTF_ARRAY_LENGTH(V8SVGTextPathElementConstants), isolate);
    COMPILE_ASSERT(0 == SVGTextPathElement::TEXTPATH_METHODTYPE_UNKNOWN, TheValueOfSVGTextPathElement_TEXTPATH_METHODTYPE_UNKNOWNDoesntMatchWithImplementation);
    COMPILE_ASSERT(1 == SVGTextPathElement::TEXTPATH_METHODTYPE_ALIGN, TheValueOfSVGTextPathElement_TEXTPATH_METHODTYPE_ALIGNDoesntMatchWithImplementation);
    COMPILE_ASSERT(2 == SVGTextPathElement::TEXTPATH_METHODTYPE_STRETCH, TheValueOfSVGTextPathElement_TEXTPATH_METHODTYPE_STRETCHDoesntMatchWithImplementation);
    COMPILE_ASSERT(0 == SVGTextPathElement::TEXTPATH_SPACINGTYPE_UNKNOWN, TheValueOfSVGTextPathElement_TEXTPATH_SPACINGTYPE_UNKNOWNDoesntMatchWithImplementation);
    COMPILE_ASSERT(1 == SVGTextPathElement::TEXTPATH_SPACINGTYPE_AUTO, TheValueOfSVGTextPathElement_TEXTPATH_SPACINGTYPE_AUTODoesntMatchWithImplementation);
    COMPILE_ASSERT(2 == SVGTextPathElement::TEXTPATH_SPACINGTYPE_EXACT, TheValueOfSVGTextPathElement_TEXTPATH_SPACINGTYPE_EXACTDoesntMatchWithImplementation);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SVGTextPathElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SVGTextPathElementTemplate);
}

bool V8SVGTextPathElement::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SVGTextPathElement::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGTextPathElement* V8SVGTextPathElement::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8SVGTextPathElement::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(SVGTextPathElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGTextPathElement>(impl, isolate));
    return V8SVGTextPathElement::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SVGTextPathElement::createWrapper(PassRefPtrWillBeRawPtr<SVGTextPathElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGTextPathElement>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SVGTextPathElement>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8SVGTextPathElement::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(SVGTextPathElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
