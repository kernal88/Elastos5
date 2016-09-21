// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8TreeWalker.h"

#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8NodeFilter.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(TreeWalker* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8TreeWalker::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::TreeWalker* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8TreeWalker::wrapperTypeInfo = { gin::kEmbedderBlink, V8TreeWalker::domTemplate, V8TreeWalker::derefObject, 0, 0, V8TreeWalker::visitDOMWrapper, V8TreeWalker::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace TreeWalkerV8Internal {

template <typename T> void V8_USE(T) { }

static void rootAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->root()), impl);
}

static void rootAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TreeWalkerV8Internal::rootAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void whatToShowAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toNative(holder);
    v8SetReturnValueUnsigned(info, impl->whatToShow());
}

static void whatToShowAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TreeWalkerV8Internal::whatToShowAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void filterAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->filter()), impl);
}

static void filterAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TreeWalkerV8Internal::filterAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void expandEntityReferencesAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toNative(holder);
    v8SetReturnValueBool(info, impl->expandEntityReferences());
}

static void expandEntityReferencesAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    UseCounter::countDeprecation(callingExecutionContext(info.GetIsolate()), UseCounter::TreeWalkerExpandEntityReferences);
    TreeWalkerV8Internal::expandEntityReferencesAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void currentNodeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    TreeWalker* impl = V8TreeWalker::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->currentNode()), impl);
}

static void currentNodeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    TreeWalkerV8Internal::currentNodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void currentNodeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "currentNode", "TreeWalker", holder, info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(holder);
    TONATIVE_VOID(Node*, cppValue, V8Node::toNativeWithTypeCheck(info.GetIsolate(), v8Value));
    impl->setCurrentNode(WTF::getPtr(cppValue), exceptionState);
    exceptionState.throwIfNeeded();
}

static void currentNodeAttributeSetterCallback(v8::Local<v8::String>, v8::Local<v8::Value> v8Value, const v8::PropertyCallbackInfo<void>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMSetter");
    TreeWalkerV8Internal::currentNodeAttributeSetter(v8Value, info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void parentNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "parentNode", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->parentNode(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void parentNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::parentNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void firstChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "firstChild", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->firstChild(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void firstChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::firstChildMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void lastChildMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "lastChild", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->lastChild(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void lastChildMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::lastChildMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void previousSiblingMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "previousSibling", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->previousSibling(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void previousSiblingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::previousSiblingMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void nextSiblingMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "nextSibling", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->nextSibling(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void nextSiblingMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::nextSiblingMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void previousNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "previousNode", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->previousNode(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void previousNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::previousNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void nextNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "nextNode", "TreeWalker", info.Holder(), info.GetIsolate());
    TreeWalker* impl = V8TreeWalker::toNative(info.Holder());
    RefPtrWillBeRawPtr<Node> result = impl->nextNode(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void nextNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    TreeWalkerV8Internal::nextNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace TreeWalkerV8Internal

void V8TreeWalker::visitDOMWrapper(void* object, const v8::Persistent<v8::Object>& wrapper, v8::Isolate* isolate)
{
    TreeWalker* impl = fromInternalPointer(object);
    v8::Local<v8::Object> creationContext = v8::Local<v8::Object>::New(isolate, wrapper);
    V8WrapperInstantiationScope scope(creationContext, isolate);
    NodeFilter* filter = impl->filter();
    if (filter) {
        if (!DOMDataStore::containsWrapper<V8NodeFilter>(filter, isolate))
            wrap(filter, creationContext, isolate);
        DOMDataStore::setWrapperReference<V8NodeFilter>(wrapper, filter, isolate);
    }
    setObjectGroup(object, wrapper, isolate);
}

static const V8DOMConfiguration::AttributeConfiguration V8TreeWalkerAttributes[] = {
    {"root", TreeWalkerV8Internal::rootAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"whatToShow", TreeWalkerV8Internal::whatToShowAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"filter", TreeWalkerV8Internal::filterAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"expandEntityReferences", TreeWalkerV8Internal::expandEntityReferencesAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"currentNode", TreeWalkerV8Internal::currentNodeAttributeGetterCallback, TreeWalkerV8Internal::currentNodeAttributeSetterCallback, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8TreeWalkerMethods[] = {
    {"parentNode", TreeWalkerV8Internal::parentNodeMethodCallback, 0, 0},
    {"firstChild", TreeWalkerV8Internal::firstChildMethodCallback, 0, 0},
    {"lastChild", TreeWalkerV8Internal::lastChildMethodCallback, 0, 0},
    {"previousSibling", TreeWalkerV8Internal::previousSiblingMethodCallback, 0, 0},
    {"nextSibling", TreeWalkerV8Internal::nextSiblingMethodCallback, 0, 0},
    {"previousNode", TreeWalkerV8Internal::previousNodeMethodCallback, 0, 0},
    {"nextNode", TreeWalkerV8Internal::nextNodeMethodCallback, 0, 0},
};

static void configureV8TreeWalkerTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "TreeWalker", v8::Local<v8::FunctionTemplate>(), V8TreeWalker::internalFieldCount,
        V8TreeWalkerAttributes, WTF_ARRAY_LENGTH(V8TreeWalkerAttributes),
        0, 0,
        V8TreeWalkerMethods, WTF_ARRAY_LENGTH(V8TreeWalkerMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8TreeWalker::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8TreeWalkerTemplate);
}

bool V8TreeWalker::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8TreeWalker::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TreeWalker* V8TreeWalker::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(TreeWalker* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8TreeWalker>(impl, isolate));
    return V8TreeWalker::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8TreeWalker::createWrapper(PassRefPtrWillBeRawPtr<TreeWalker> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8TreeWalker>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8TreeWalker>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Dependent);
    return wrapper;
}

void V8TreeWalker::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(TreeWalker* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
