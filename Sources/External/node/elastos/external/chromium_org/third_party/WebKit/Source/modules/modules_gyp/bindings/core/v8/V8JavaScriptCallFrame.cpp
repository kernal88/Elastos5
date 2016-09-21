// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8JavaScriptCallFrame.h"

#include "bindings/core/v8/V8JavaScriptCallFrame.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/ScriptState.h"
#include "bindings/v8/ScriptValue.h"
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

static void initializeScriptWrappableForInterface(JavaScriptCallFrame* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8JavaScriptCallFrame::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::JavaScriptCallFrame* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8JavaScriptCallFrame::wrapperTypeInfo = { gin::kEmbedderBlink, V8JavaScriptCallFrame::domTemplate, V8JavaScriptCallFrame::derefObject, 0, 0, 0, V8JavaScriptCallFrame::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace JavaScriptCallFrameV8Internal {

template <typename T> void V8_USE(T) { }

static void callerAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    RefPtrWillBeRawPtr<JavaScriptCallFrame> result(impl->caller());
    if (result && DOMDataStore::setReturnValueFromWrapper<V8JavaScriptCallFrame>(info.GetReturnValue(), result.get()))
        return;
    v8::Handle<v8::Value> wrapper = toV8(result.get(), holder, info.GetIsolate());
    if (!wrapper.IsEmpty()) {
        V8HiddenValue::setHiddenValue(info.GetIsolate(), holder, v8AtomicString(info.GetIsolate(), "caller"), wrapper);
        v8SetReturnValue(info, wrapper);
    }
}

static void callerAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::callerAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void sourceIDAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    v8SetReturnValueInt(info, impl->sourceID());
}

static void sourceIDAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::sourceIDAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void lineAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    v8SetReturnValueInt(info, impl->line());
}

static void lineAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::lineAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void columnAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    v8SetReturnValueInt(info, impl->column());
}

static void columnAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::columnAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void scopeChainAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    V8JavaScriptCallFrame::scopeChainAttributeGetterCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void thisObjectAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    V8JavaScriptCallFrame::thisObjectAttributeGetterCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void stepInPositionsAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    v8SetReturnValueString(info, impl->stepInPositions(), info.GetIsolate());
}

static void stepInPositionsAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::stepInPositionsAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void functionNameAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    v8SetReturnValueString(info, impl->functionName(), info.GetIsolate());
}

static void functionNameAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::functionNameAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void typeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    V8JavaScriptCallFrame::typeAttributeGetterCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void isAtReturnAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(holder);
    v8SetReturnValueBool(info, impl->isAtReturn());
}

static void isAtReturnAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    JavaScriptCallFrameV8Internal::isAtReturnAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void returnValueAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    V8JavaScriptCallFrame::returnValueAttributeGetterCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void evaluateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    V8JavaScriptCallFrame::evaluateMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void restartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    V8JavaScriptCallFrame::restartMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void setVariableValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setVariableValue", "JavaScriptCallFrame", info.Holder(), info.GetIsolate());
    JavaScriptCallFrame* impl = V8JavaScriptCallFrame::toNative(info.Holder());
    int scopeIndex;
    V8StringResource<WithUndefinedOrNullCheck> variableName;
    ScriptValue newValue;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(scopeIndex, toInt32(info[0], exceptionState), exceptionState);
        TOSTRING_VOID_INTERNAL(variableName, info[1]);
        TONATIVE_VOID_INTERNAL(newValue, ScriptValue(ScriptState::current(info.GetIsolate()), info[2]));
    }
    ScriptState* scriptState = ScriptState::current(info.GetIsolate());
    ScriptValue result = impl->setVariableValue(scriptState, scopeIndex, variableName, newValue);
    v8SetReturnValue(info, result.v8Value());
}

static void setVariableValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    JavaScriptCallFrameV8Internal::setVariableValueMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void scopeTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    V8JavaScriptCallFrame::scopeTypeMethodCustom(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace JavaScriptCallFrameV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8JavaScriptCallFrameAttributes[] = {
    {"caller", JavaScriptCallFrameV8Internal::callerAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"sourceID", JavaScriptCallFrameV8Internal::sourceIDAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"line", JavaScriptCallFrameV8Internal::lineAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"column", JavaScriptCallFrameV8Internal::columnAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"scopeChain", JavaScriptCallFrameV8Internal::scopeChainAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"thisObject", JavaScriptCallFrameV8Internal::thisObjectAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"stepInPositions", JavaScriptCallFrameV8Internal::stepInPositionsAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"functionName", JavaScriptCallFrameV8Internal::functionNameAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"type", JavaScriptCallFrameV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"isAtReturn", JavaScriptCallFrameV8Internal::isAtReturnAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"returnValue", JavaScriptCallFrameV8Internal::returnValueAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8JavaScriptCallFrameMethods[] = {
    {"evaluate", JavaScriptCallFrameV8Internal::evaluateMethodCallback, 0, 1},
    {"restart", JavaScriptCallFrameV8Internal::restartMethodCallback, 0, 0},
    {"setVariableValue", JavaScriptCallFrameV8Internal::setVariableValueMethodCallback, 0, 0},
    {"scopeType", JavaScriptCallFrameV8Internal::scopeTypeMethodCallback, 0, 1},
};

static void configureV8JavaScriptCallFrameTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "JavaScriptCallFrame", v8::Local<v8::FunctionTemplate>(), V8JavaScriptCallFrame::internalFieldCount,
        V8JavaScriptCallFrameAttributes, WTF_ARRAY_LENGTH(V8JavaScriptCallFrameAttributes),
        0, 0,
        V8JavaScriptCallFrameMethods, WTF_ARRAY_LENGTH(V8JavaScriptCallFrameMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    static const V8DOMConfiguration::ConstantConfiguration V8JavaScriptCallFrameConstants[] = {
        {"GLOBAL_SCOPE", 0},
        {"LOCAL_SCOPE", 1},
        {"WITH_SCOPE", 2},
        {"CLOSURE_SCOPE", 3},
        {"CATCH_SCOPE", 4},
    };
    V8DOMConfiguration::installConstants(functionTemplate, prototypeTemplate, V8JavaScriptCallFrameConstants, WTF_ARRAY_LENGTH(V8JavaScriptCallFrameConstants), isolate);

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8JavaScriptCallFrame::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8JavaScriptCallFrameTemplate);
}

bool V8JavaScriptCallFrame::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8JavaScriptCallFrame::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

JavaScriptCallFrame* V8JavaScriptCallFrame::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(JavaScriptCallFrame* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8JavaScriptCallFrame>(impl, isolate));
    return V8JavaScriptCallFrame::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8JavaScriptCallFrame::createWrapper(PassRefPtrWillBeRawPtr<JavaScriptCallFrame> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8JavaScriptCallFrame>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8JavaScriptCallFrame>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8JavaScriptCallFrame::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(JavaScriptCallFrame* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
