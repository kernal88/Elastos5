// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8StringCallback.h"

#include "bindings/v8/V8Binding.h"
#include "bindings/v8/V8Callback.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

V8StringCallback::V8StringCallback(v8::Handle<v8::Function> callback, ScriptState* scriptState)
    : ActiveDOMCallback(scriptState->executionContext())
    , m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8StringCallback::~V8StringCallback()
{
}

void V8StringCallback::handleEvent(const String& data)
{
    if (!canInvokeCallback())
        return;

    v8::Isolate* isolate = m_scriptState->isolate();
    if (m_scriptState->contextIsEmpty())
        return;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Handle<v8::Value> dataHandle = v8String(isolate, data);
    if (dataHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return;
    }
    v8::Handle<v8::Value> argv[] = { dataHandle };

    invokeCallback(m_scriptState.get(), m_callback.newLocal(isolate), 1, argv);
}

} // namespace WebCore
