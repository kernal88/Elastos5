// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8Selection.h"

#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8Range.h"
#include "bindings/v8/ExceptionState.h"
#include "bindings/v8/V8DOMConfiguration.h"
#include "bindings/v8/V8HiddenValue.h"
#include "bindings/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CustomElementCallbackDispatcher.h"
#include "core/frame/UseCounter.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

static void initializeScriptWrappableForInterface(DOMSelection* object)
{
    if (ScriptWrappable::wrapperCanBeStoredInObject(object))
        ScriptWrappable::fromObject(object)->setTypeInfo(&V8Selection::wrapperTypeInfo);
    else
        ASSERT_NOT_REACHED();
}

} // namespace WebCore

void webCoreInitializeScriptWrappableForInterface(WebCore::DOMSelection* object)
{
    WebCore::initializeScriptWrappableForInterface(object);
}

namespace WebCore {
const WrapperTypeInfo V8Selection::wrapperTypeInfo = { gin::kEmbedderBlink, V8Selection::domTemplate, V8Selection::derefObject, 0, 0, 0, V8Selection::installPerContextEnabledMethods, 0, WrapperTypeObjectPrototype, WillBeGarbageCollectedObject };

namespace DOMSelectionV8Internal {

template <typename T> void V8_USE(T) { }

static void anchorNodeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->anchorNode()), impl);
}

static void anchorNodeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    DOMSelectionV8Internal::anchorNodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void anchorOffsetAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueInt(info, impl->anchorOffset());
}

static void anchorOffsetAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    DOMSelectionV8Internal::anchorOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void focusNodeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->focusNode()), impl);
}

static void focusNodeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    DOMSelectionV8Internal::focusNodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void focusOffsetAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueInt(info, impl->focusOffset());
}

static void focusOffsetAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    DOMSelectionV8Internal::focusOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void isCollapsedAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueBool(info, impl->isCollapsed());
}

static void isCollapsedAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    DOMSelectionV8Internal::isCollapsedAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void rangeCountAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueInt(info, impl->rangeCount());
}

static void rangeCountAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    DOMSelectionV8Internal::rangeCountAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void baseNodeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->baseNode()), impl);
}

static void baseNodeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionBaseNode);
    DOMSelectionV8Internal::baseNodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void baseOffsetAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueInt(info, impl->baseOffset());
}

static void baseOffsetAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionBaseOffset);
    DOMSelectionV8Internal::baseOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void extentNodeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->extentNode()), impl);
}

static void extentNodeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionExtentNode);
    DOMSelectionV8Internal::extentNodeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void extentOffsetAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueInt(info, impl->extentOffset());
}

static void extentOffsetAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionExtentOffset);
    DOMSelectionV8Internal::extentOffsetAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void typeAttributeGetter(const v8::PropertyCallbackInfo<v8::Value>& info)
{
    v8::Handle<v8::Object> holder = info.Holder();
    DOMSelection* impl = V8Selection::toNative(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(v8::Local<v8::String>, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMGetter");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionType);
    DOMSelectionV8Internal::typeAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void collapseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "collapse", "Selection", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Node* node;
    int offset;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8Node::hasInstance(info[0], info.GetIsolate())) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
        TONATIVE_VOID_INTERNAL(node, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        if (UNLIKELY(info.Length() <= 1)) {
            impl->collapse(node, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(offset, toInt32(info[1], exceptionState), exceptionState);
    }
    impl->collapse(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void collapseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::collapseMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void collapseToEndMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "collapseToEnd", "Selection", info.Holder(), info.GetIsolate());
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    impl->collapseToEnd(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void collapseToEndMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::collapseToEndMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void collapseToStartMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "collapseToStart", "Selection", info.Holder(), info.GetIsolate());
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    impl->collapseToStart(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void collapseToStartMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::collapseToStartMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void deleteFromDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    CustomElementCallbackDispatcher::CallbackDeliveryScope deliveryScope;
    impl->deleteFromDocument();
}

static void deleteFromDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::deleteFromDocumentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void containsNodeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Node* node;
    bool allowPartial;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(node, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        TONATIVE_VOID_INTERNAL(allowPartial, info[1]->BooleanValue());
    }
    v8SetReturnValueBool(info, impl->containsNode(node, allowPartial));
}

static void containsNodeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::containsNodeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void selectAllChildrenMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "selectAllChildren", "Selection", info.Holder(), info.GetIsolate());
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Node* node;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(node, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
    }
    impl->selectAllChildren(node, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void selectAllChildrenMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::selectAllChildrenMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void extendMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "extend", "Selection", info.Holder(), info.GetIsolate());
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Node* node;
    int offset;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(node, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(offset, toInt32(info[1], exceptionState), exceptionState);
    }
    impl->extend(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void extendMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::extendMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void getRangeAtMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "getRangeAt", "Selection", info.Holder(), info.GetIsolate());
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    int index;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(index, toInt32(info[0], exceptionState), exceptionState);
    }
    RefPtrWillBeRawPtr<Range> result = impl->getRangeAt(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result.release());
}

static void getRangeAtMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::getRangeAtMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void removeAllRangesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    impl->removeAllRanges();
}

static void removeAllRangesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::removeAllRangesMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void addRangeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Range* range;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(range, V8Range::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
    }
    impl->addRange(range);
}

static void addRangeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::addRangeMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void toStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    v8SetReturnValueString(info, impl->toString(), info.GetIsolate());
}

static void toStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    DOMSelectionV8Internal::toStringMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void modifyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    V8StringResource<> alter;
    V8StringResource<> direction;
    V8StringResource<> granularity;
    {
        TOSTRING_VOID_INTERNAL(alter, info[0]);
        TOSTRING_VOID_INTERNAL(direction, info[1]);
        TOSTRING_VOID_INTERNAL(granularity, info[2]);
    }
    impl->modify(alter, direction, granularity);
}

static void modifyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionModify);
    DOMSelectionV8Internal::modifyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void setBaseAndExtentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setBaseAndExtent", "Selection", info.Holder(), info.GetIsolate());
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Node* baseNode;
    int baseOffset;
    Node* extentNode;
    int extentOffset;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        TONATIVE_VOID_INTERNAL(baseNode, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(baseOffset, toInt32(info[1], exceptionState), exceptionState);
        TONATIVE_VOID_INTERNAL(extentNode, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[2]));
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(extentOffset, toInt32(info[3], exceptionState), exceptionState);
    }
    impl->setBaseAndExtent(baseNode, baseOffset, extentNode, extentOffset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setBaseAndExtentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionSetBaseAndExtent);
    DOMSelectionV8Internal::setBaseAndExtentMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void setPositionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setPosition", "Selection", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        throwMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    Node* node;
    int offset;
    {
        v8::TryCatch block;
        V8RethrowTryCatchScope rethrow(block);
        if (info.Length() > 0 && !V8Node::hasInstance(info[0], info.GetIsolate())) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Node'.");
            exceptionState.throwIfNeeded();
            return;
        }
        TONATIVE_VOID_INTERNAL(node, V8Node::toNativeWithTypeCheck(info.GetIsolate(), info[0]));
        if (UNLIKELY(info.Length() <= 1)) {
            impl->collapse(node, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        TONATIVE_VOID_EXCEPTIONSTATE_INTERNAL(offset, toInt32(info[1], exceptionState), exceptionState);
    }
    impl->collapse(node, offset, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void setPositionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionSetPosition);
    DOMSelectionV8Internal::setPositionMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

static void emptyMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMSelection* impl = V8Selection::toNative(info.Holder());
    impl->empty();
}

static void emptyMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("Blink", "DOMMethod");
    UseCounter::count(callingExecutionContext(info.GetIsolate()), UseCounter::SelectionEmpty);
    DOMSelectionV8Internal::emptyMethod(info);
    TRACE_EVENT_SET_SAMPLING_STATE("V8", "V8Execution");
}

} // namespace DOMSelectionV8Internal

static const V8DOMConfiguration::AttributeConfiguration V8SelectionAttributes[] = {
    {"anchorNode", DOMSelectionV8Internal::anchorNodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"anchorOffset", DOMSelectionV8Internal::anchorOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"focusNode", DOMSelectionV8Internal::focusNodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"focusOffset", DOMSelectionV8Internal::focusOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"isCollapsed", DOMSelectionV8Internal::isCollapsedAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"rangeCount", DOMSelectionV8Internal::rangeCountAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"baseNode", DOMSelectionV8Internal::baseNodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"baseOffset", DOMSelectionV8Internal::baseOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"extentNode", DOMSelectionV8Internal::extentNodeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"extentOffset", DOMSelectionV8Internal::extentOffsetAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
    {"type", DOMSelectionV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::None), 0 /* on instance */},
};

static const V8DOMConfiguration::MethodConfiguration V8SelectionMethods[] = {
    {"collapse", DOMSelectionV8Internal::collapseMethodCallback, 0, 1},
    {"collapseToEnd", DOMSelectionV8Internal::collapseToEndMethodCallback, 0, 0},
    {"collapseToStart", DOMSelectionV8Internal::collapseToStartMethodCallback, 0, 0},
    {"deleteFromDocument", DOMSelectionV8Internal::deleteFromDocumentMethodCallback, 0, 0},
    {"containsNode", DOMSelectionV8Internal::containsNodeMethodCallback, 0, 0},
    {"selectAllChildren", DOMSelectionV8Internal::selectAllChildrenMethodCallback, 0, 0},
    {"extend", DOMSelectionV8Internal::extendMethodCallback, 0, 0},
    {"getRangeAt", DOMSelectionV8Internal::getRangeAtMethodCallback, 0, 0},
    {"removeAllRanges", DOMSelectionV8Internal::removeAllRangesMethodCallback, 0, 0},
    {"addRange", DOMSelectionV8Internal::addRangeMethodCallback, 0, 0},
    {"modify", DOMSelectionV8Internal::modifyMethodCallback, 0, 0},
    {"setBaseAndExtent", DOMSelectionV8Internal::setBaseAndExtentMethodCallback, 0, 0},
    {"setPosition", DOMSelectionV8Internal::setPositionMethodCallback, 0, 1},
    {"empty", DOMSelectionV8Internal::emptyMethodCallback, 0, 0},
};

static void configureV8SelectionTemplate(v8::Handle<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    defaultSignature = V8DOMConfiguration::installDOMClassTemplate(functionTemplate, "Selection", v8::Local<v8::FunctionTemplate>(), V8Selection::internalFieldCount,
        V8SelectionAttributes, WTF_ARRAY_LENGTH(V8SelectionAttributes),
        0, 0,
        V8SelectionMethods, WTF_ARRAY_LENGTH(V8SelectionMethods),
        isolate);
    v8::Local<v8::ObjectTemplate> instanceTemplate ALLOW_UNUSED = functionTemplate->InstanceTemplate();
    v8::Local<v8::ObjectTemplate> prototypeTemplate ALLOW_UNUSED = functionTemplate->PrototypeTemplate();
    prototypeTemplate->Set(v8AtomicString(isolate, "toString"), v8::FunctionTemplate::New(isolate, DOMSelectionV8Internal::toStringMethodCallback, v8Undefined(), defaultSignature, 0), static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::DontEnum));

    // Custom toString template
    functionTemplate->Set(v8AtomicString(isolate, "toString"), V8PerIsolateData::from(isolate)->toStringTemplate());
}

v8::Handle<v8::FunctionTemplate> V8Selection::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), configureV8SelectionTemplate);
}

bool V8Selection::hasInstance(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Handle<v8::Object> V8Selection::findInstanceInPrototypeChain(v8::Handle<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMSelection* V8Selection::toNativeWithTypeCheck(v8::Isolate* isolate, v8::Handle<v8::Value> value)
{
    return hasInstance(value, isolate) ? fromInternalPointer(v8::Handle<v8::Object>::Cast(value)->GetAlignedPointerFromInternalField(v8DOMWrapperObjectIndex)) : 0;
}

v8::Handle<v8::Object> wrap(DOMSelection* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8Selection>(impl, isolate));
    return V8Selection::createWrapper(impl, creationContext, isolate);
}

v8::Handle<v8::Object> V8Selection::createWrapper(PassRefPtrWillBeRawPtr<DOMSelection> impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    ASSERT(impl);
    ASSERT(!DOMDataStore::containsWrapper<V8Selection>(impl.get(), isolate));
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
    V8DOMWrapper::associateObjectWithWrapper<V8Selection>(impl, &wrapperTypeInfo, wrapper, isolate, WrapperConfiguration::Independent);
    return wrapper;
}

void V8Selection::derefObject(void* object)
{
#if !ENABLE(OILPAN)
    fromInternalPointer(object)->deref();
#endif // !ENABLE(OILPAN)
}

template<>
v8::Handle<v8::Value> toV8NoInline(DOMSelection* impl, v8::Handle<v8::Object> creationContext, v8::Isolate* isolate)
{
    return toV8(impl, creationContext, isolate);
}

} // namespace WebCore
