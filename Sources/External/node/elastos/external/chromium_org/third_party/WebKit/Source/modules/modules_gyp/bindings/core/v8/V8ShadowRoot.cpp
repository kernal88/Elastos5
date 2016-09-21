// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8ShadowRoot.h"

#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8HTMLCollection.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8Selection.h"
#include "bindings/core/v8/V8ShadowRoot.h"
#include "bindings/core/v8/V8StyleSheetList.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMActivityLogger.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ClassCollection.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/TagCollection.h"
#include "core/dom/custom/CustomElementCallbackDispatcher.h"
#include "core/html/HTMLCollection.h"
#include "core/html/HTMLFormControlsCollection.h"
#include "core/html/HTMLTableRowsCollection.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(ShadowRoot* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8ShadowRoot::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::ShadowRoot* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8ShadowRoot::wrapperTypeInfo = { gin::kEmbedderBlink, V8ShadowRoot::domTemplate, V8ShadowRoot::derefObject, 0, V8ShadowRoot::toEventTarget, 0, V8ShadowRoot::installPerContextEnabledMethods, &V8DocumentFragment::wrapperTypeInfo, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace ShadowRootV8Internal {

template <typename T> void V8_USE(T) { }

static void activeElementAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ShadowRoot* impl = V8ShadowRoot::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->activeElement()), impl);
}

static void activeElementAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    ShadowRootV8Internal::activeElementAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void olderShadowRootAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ShadowRoot* impl = V8ShadowRoot::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->olderShadowRootForBindings()), impl);
}

static void olderShadowRootAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    ShadowRootV8Internal::olderShadowRootAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void innerHTMLAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ShadowRoot* impl = V8ShadowRoot::toNative(holder);
    v8SetReturnValueString(info, impl->innerHTML(), info.GetIsolate());
}

static void innerHTMLAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    ShadowRootV8Internal::innerHTMLAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void innerHTMLAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "innerHTML", "ShadowRoot", holder, info.GetIsolate());
    ShadowRoot* impl = V8ShadowRoot::toNative(holder);
    TOSTRING_VOID(V8StringResource<WithNullCheck>, cppValue, v8Value);
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    impl->setInnerHTML(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void innerHTMLAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    ScriptState* scriptState = ScriptState::from(info.GetIsolate()->GetCurrentContext());
    V8PerContextData* contextData = scriptState->perContextData();
    if (scriptState->world().isIsolatedWorld() && contextData && contextData->activityLogger()) {
        contextData->activityLogger()->logSetter("ShadowRoot.innerHTML", v8Value);
    }
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    ShadowRootV8Internal::innerHTMLAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void styleSheetsAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ShadowRoot* impl = V8ShadowRoot::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->styleSheets()), impl);
}

static void styleSheetsAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    ShadowRootV8Internal::styleSheetsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void hostAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ShadowRoot* impl = V8ShadowRoot::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->host()), impl);
}

static void hostAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    ShadowRootV8Internal::hostAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void cloneNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "cloneNode", "ShadowRoot", info.Holder(), info.GetIsolate());
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    bool deep;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(deep, info[0]->BooleanValue());
    }
    RefPtrWillBeRawPtr<Node> result = impl->cloneNode(deep, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, WTF::getPtr(result.release()), impl);
}

static void cloneNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::cloneNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getSelectionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    v8SetReturnValueFast(info, WTF::getPtr(impl->getSelection()), impl);
}

static void getSelectionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::getSelectionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getElementByIdMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    V8StringResource<> elementId;
    {
        TOSTRING_VOID_INTERNAL(elementId, info[0]);
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->getElementById(elementId)), impl);
}

static void getElementByIdMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::getElementByIdMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getElementsByClassNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    V8StringResource<> className;
    {
        TOSTRING_VOID_INTERNAL(className, info[0]);
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->getElementsByClassName(className)), impl);
}

static void getElementsByClassNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::getElementsByClassNameMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getElementsByTagNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    V8StringResource<> tagName;
    {
        TOSTRING_VOID_INTERNAL(tagName, info[0]);
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->getElementsByTagName(tagName)), impl);
}

static void getElementsByTagNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::getElementsByTagNameMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getElementsByTagNameNSMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    V8StringResource<WithNullCheck> namespaceURI;
    V8StringResource<> localName;
    {
        TOSTRING_VOID_INTERNAL(namespaceURI, info[0]);
        TOSTRING_VOID_INTERNAL(localName, info[1]);
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->getElementsByTagNameNS(namespaceURI, localName)), impl);
}

static void getElementsByTagNameNSMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::getElementsByTagNameNSMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void elementFromPointMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "elementFromPoint", "ShadowRoot", info.Holder(), info.GetIsolate());
    ShadowRoot* impl = V8ShadowRoot::toNative(info.Holder());
    int x;
    int y;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(x, toInt32(info[0], exceptionState), exceptionState);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(y, toInt32(info[1], exceptionState), exceptionState);
    }
    v8SetReturnValueFast(info, WTF::getPtr(impl->elementFromPoint(x, y)), impl);
}

static void elementFromPointMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    ShadowRootV8Internal::elementFromPointMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace ShadowRootV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8ShadowRootAttributes[] = {
    {"activeElement", ShadowRootV8Internal::activeElementAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"olderShadowRoot", ShadowRootV8Internal::olderShadowRootAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"innerHTML", ShadowRootV8Internal::innerHTMLAttributeGetterCallback, ShadowRootV8Internal::innerHTMLAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"styleSheets", ShadowRootV8Internal::styleSheetsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"host", ShadowRootV8Internal::hostAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8ShadowRootMethods[] = {
    {"cloneNode", ShadowRootV8Internal::cloneNodeMethodCallback, 0, 0},
    {"getSelection", ShadowRootV8Internal::getSelectionMethodCallback, 0, 0},
    {"getElementById", ShadowRootV8Internal::getElementByIdMethodCallback, 0, 0},
    {"getElementsByClassName", ShadowRootV8Internal::getElementsByClassNameMethodCallback, 0, 0},
    {"getElementsByTagName", ShadowRootV8Internal::getElementsByTagNameMethodCallback, 0, 0},
    {"getElementsByTagNameNS", ShadowRootV8Internal::getElementsByTagNameNSMethodCallback, 0, 0},
    {"elementFromPoint", ShadowRootV8Internal::elementFromPointMethodCallback, 0, 0},
};

static void configureV8ShadowRootTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "ShadowRoot", V8DocumentFragment::domTemplate(isolate), V8ShadowRoot::internalFieldCount,
        V8ShadowRootAttributes, WTF_ARRAY_LENGTH(V8ShadowRootAttributes),
        0, 0,
        V8ShadowRootMethods, WTF_ARRAY_LENGTH(V8ShadowRootMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8ShadowRoot::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8ShadowRootTemplate);
}

bool V8ShadowRoot::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8ShadowRoot::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ShadowRoot* V8ShadowRoot::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

EventTarget* V8ShadowRoot::toEventTarget(v8::Handle<v8::Object> object)
{
    return toNative(object);
}

v8::Handle<v8::Object> wrap(ShadowRoot* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8ShadowRoot>(impl, isolate));
    return V8ShadowRoot::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8ShadowRoot::createWrapper(PassRefPtrWillBeRawPtr<ShadowRoot> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8ShadowRoot>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8ShadowRoot>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8ShadowRoot::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(ShadowRoot* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
