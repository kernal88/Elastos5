// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "config.h"
#include "V8SQLStatementCallback.h"

#include "bindings/modules/v8/V8SQLResultSet.h"
#include "bindings/modules/v8/V8SQLTransaction.h"
#include "bindings/v8/V8Binding.h"
#include "bindings/v8/V8Callback.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace WebCore {

V8SQLStatementCallback::V8SQLStatementCallback(v8::Handle<v8::Function> callback, ScriptState* scriptState)
    : ActiveDOMCallback(scriptState->executionContext())
    , m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8SQLStatementCallback::~V8SQLStatementCallback()
{
}

bool V8SQLStatementCallback::handleEvent(SQLTransaction* transaction, SQLResultSet* resultSet)
{
    if (!canInvokeCallback())
        return true;

    v8::Isolate* isolate = m_scriptState->isolate();
    if (m_scriptState->contextIsEmpty())
        return true;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Handle<v8::Value> transactionHandle = toV8(transaction, m_scriptState->context()->Global(), isolate);
    if (transactionHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return true;
    }
    v8::Handle<v8::Value> resultSetHandle = toV8(resultSet, m_scriptState->context()->Global(), isolate);
    if (resultSetHandle.IsEmpty()) {
        if (!isScriptControllerTerminating())
            CRASH();
        return true;
    }
    v8::Handle<v8::Value> argv[] = { transactionHandle, resultSetHandle };

    return invokeCallback(m_scriptState.get(), m_callback.newLocal(isolate), 2, argv);
}

} // namespace WebCore
