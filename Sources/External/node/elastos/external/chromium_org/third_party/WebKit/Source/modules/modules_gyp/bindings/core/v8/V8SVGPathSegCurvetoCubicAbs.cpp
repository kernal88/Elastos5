// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGPathSegCurvetoCubicAbs.h"

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

static void initializeScriptWrappableForInterface(SVGPathSegCurvetoCubicAbs* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SVGPathSegCurvetoCubicAbs::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SVGPathSegCurvetoCubicAbs* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SVGPathSegCurvetoCubicAbs::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGPathSegCurvetoCubicAbs::domTemplate, V8SVGPathSegCurvetoCubicAbs::derefObject, 0, 0, 0, V8SVGPathSegCurvetoCubicAbs::installPerContextEnabledMethods, &V8SVGPathSeg::wrapperTypeInfo, WrapperTypeObjectPrototype, RefCountedObject };

namespace SVGPathSegCurvetoCubicAbsV8Internal {

template <typename T> void V8_USE(T) { }

static void xAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    v8SetReturnValue(info, impl->x());
}

static void xAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGPathSegCurvetoCubicAbsV8Internal::xAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void xAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    TONATIVE_VOID(float, cppValue, static_cast<float>(v8Value->NumberValue()));
    impl->setX(cppValue);
}

static void xAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    SVGPathSegCurvetoCubicAbsV8Internal::xAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void yAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    v8SetReturnValue(info, impl->y());
}

static void yAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGPathSegCurvetoCubicAbsV8Internal::yAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void yAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    TONATIVE_VOID(float, cppValue, static_cast<float>(v8Value->NumberValue()));
    impl->setY(cppValue);
}

static void yAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    SVGPathSegCurvetoCubicAbsV8Internal::yAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void x1AttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    v8SetReturnValue(info, impl->x1());
}

static void x1AttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGPathSegCurvetoCubicAbsV8Internal::x1AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void x1AttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    TONATIVE_VOID(float, cppValue, static_cast<float>(v8Value->NumberValue()));
    impl->setX1(cppValue);
}

static void x1AttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    SVGPathSegCurvetoCubicAbsV8Internal::x1AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void y1AttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    v8SetReturnValue(info, impl->y1());
}

static void y1AttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGPathSegCurvetoCubicAbsV8Internal::y1AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void y1AttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    TONATIVE_VOID(float, cppValue, static_cast<float>(v8Value->NumberValue()));
    impl->setY1(cppValue);
}

static void y1AttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    SVGPathSegCurvetoCubicAbsV8Internal::y1AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void x2AttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    v8SetReturnValue(info, impl->x2());
}

static void x2AttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGPathSegCurvetoCubicAbsV8Internal::x2AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void x2AttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    TONATIVE_VOID(float, cppValue, static_cast<float>(v8Value->NumberValue()));
    impl->setX2(cppValue);
}

static void x2AttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    SVGPathSegCurvetoCubicAbsV8Internal::x2AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void y2AttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    v8SetReturnValue(info, impl->y2());
}

static void y2AttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    SVGPathSegCurvetoCubicAbsV8Internal::y2AttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void y2AttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    SVGPathSegCurvetoCubicAbs* impl = V8SVGPathSegCurvetoCubicAbs::toNative(holder);
    TONATIVE_VOID(float, cppValue, static_cast<float>(v8Value->NumberValue()));
    impl->setY2(cppValue);
}

static void y2AttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    SVGPathSegCurvetoCubicAbsV8Internal::y2AttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace SVGPathSegCurvetoCubicAbsV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8SVGPathSegCurvetoCubicAbsAttributes[] = {
    {"x", SVGPathSegCurvetoCubicAbsV8Internal::xAttributeGetterCallback, SVGPathSegCurvetoCubicAbsV8Internal::xAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"y", SVGPathSegCurvetoCubicAbsV8Internal::yAttributeGetterCallback, SVGPathSegCurvetoCubicAbsV8Internal::yAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"x1", SVGPathSegCurvetoCubicAbsV8Internal::x1AttributeGetterCallback, SVGPathSegCurvetoCubicAbsV8Internal::x1AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"y1", SVGPathSegCurvetoCubicAbsV8Internal::y1AttributeGetterCallback, SVGPathSegCurvetoCubicAbsV8Internal::y1AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"x2", SVGPathSegCurvetoCubicAbsV8Internal::x2AttributeGetterCallback, SVGPathSegCurvetoCubicAbsV8Internal::x2AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"y2", SVGPathSegCurvetoCubicAbsV8Internal::y2AttributeGetterCallback, SVGPathSegCurvetoCubicAbsV8Internal::y2AttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static void configureV8SVGPathSegCurvetoCubicAbsTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SVGPathSegCurvetoCubicAbs", V8SVGPathSeg::domTemplate(isolate), V8SVGPathSegCurvetoCubicAbs::internalFieldCount,
        V8SVGPathSegCurvetoCubicAbsAttributes, WTF_ARRAY_LENGTH(V8SVGPathSegCurvetoCubicAbsAttributes),
        0, 0,
        0, 0,
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SVGPathSegCurvetoCubicAbs::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SVGPathSegCurvetoCubicAbsTemplate);
}

bool V8SVGPathSegCurvetoCubicAbs::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SVGPathSegCurvetoCubicAbs::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGPathSegCurvetoCubicAbs* V8SVGPathSegCurvetoCubicAbs::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(SVGPathSegCurvetoCubicAbs* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGPathSegCurvetoCubicAbs>(impl, isolate));
    return V8SVGPathSegCurvetoCubicAbs::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SVGPathSegCurvetoCubicAbs::createWrapper(PassRefPtr<SVGPathSegCurvetoCubicAbs> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGPathSegCurvetoCubicAbs>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SVGPathSegCurvetoCubicAbs>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8SVGPathSegCurvetoCubicAbs::derefObject(void* object)
{
    fromInternalPointer(object)->deref();
}

template<>
v8::Handle<v8::Value> toV8NoInline(SVGPathSegCurvetoCubicAbs* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
