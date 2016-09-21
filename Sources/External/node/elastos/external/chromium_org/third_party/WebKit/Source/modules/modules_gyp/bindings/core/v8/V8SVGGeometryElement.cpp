// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SVGGeometryElement.h"

#include "bindings/core/v8/V8SVGPoint.h"
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

static void initializeScriptWrappableForInterface(SVGGeometryElement* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8SVGGeometryElement::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::SVGGeometryElement* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8SVGGeometryElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGGeometryElement::domTemplate, V8SVGGeometryElement::derefObject, 0, V8SVGGeometryElement::toEventTarget, 0, V8SVGGeometryElement::installPerContextEnabledMethods, &V8SVGGraphicsElement::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace SVGGeometryElementV8Internal {

template <typename T> void V8_USE(T) { }

static void isPointInFillMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("isPointInFill", "SVGGeometryElement", 1, info.Length(), info.GetIsolate());
        return;
    }
    SVGGeometryElement* impl = V8SVGGeometryElement::toNative(info.Holder());
    SVGPointTearOff* point;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8SVGPoint::hasInstance(info[0], info.GetIsolate())) {
            throwTypeError(ExceptionMessages::failedToExecute("isPointInFill", "SVGGeometryElement", "parameter 1 is not of type 'SVGPoint'."), info.GetIsolate());
            return;
        }
        TONATIVE_VOID_INTERNAL(point, V8SVGPoint::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
    }
    v8SetReturnValueBool(info, impl->isPointInFill(point));
}

static void isPointInFillMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGGeometryElementV8Internal::isPointInFillMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void isPointInStrokeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeErrorForMethod("isPointInStroke", "SVGGeometryElement", 1, info.Length(), info.GetIsolate());
        return;
    }
    SVGGeometryElement* impl = V8SVGGeometryElement::toNative(info.Holder());
    SVGPointTearOff* point;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8SVGPoint::hasInstance(info[0], info.GetIsolate())) {
            throwTypeError(ExceptionMessages::failedToExecute("isPointInStroke", "SVGGeometryElement", "parameter 1 is not of type 'SVGPoint'."), info.GetIsolate());
            return;
        }
        TONATIVE_VOID_INTERNAL(point, V8SVGPoint::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
    }
    v8SetReturnValueBool(info, impl->isPointInStroke(point));
}

static void isPointInStrokeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    SVGGeometryElementV8Internal::isPointInStrokeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace SVGGeometryElementV8Internal

static const V8DOMConfiguration::MethodConfiguration V8SVGGeometryElementMethods[] = {
    {"isPointInFill", SVGGeometryElementV8Internal::isPointInFillMethodCallback, 0, 1},
    {"isPointInStroke", SVGGeometryElementV8Internal::isPointInStrokeMethodCallback, 0, 1},
};

static void configureV8SVGGeometryElementTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "SVGGeometryElement", V8SVGGraphicsElement::domTemplate(isolate), V8SVGGeometryElement::internalFieldCount,
        0, 0,
        0, 0,
        V8SVGGeometryElementMethods, WTF_ARRAY_LENGTH(V8SVGGeometryElementMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8SVGGeometryElement::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SVGGeometryElementTemplate);
}

bool V8SVGGeometryElement::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8SVGGeometryElement::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGGeometryElement* V8SVGGeometryElement::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8SVGGeometryElement::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(SVGGeometryElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGGeometryElement>(impl, isolate));
    return V8SVGGeometryElement::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8SVGGeometryElement::createWrapper(PassRefPtrWillBeRawPtr<SVGGeometryElement> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8SVGGeometryElement>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8SVGGeometryElement>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8SVGGeometryElement::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(SVGGeometryElement* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
