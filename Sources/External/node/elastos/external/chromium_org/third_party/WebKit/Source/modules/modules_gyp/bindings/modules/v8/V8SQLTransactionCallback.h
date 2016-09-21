// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8SQLTransactionCallback_h
#define V8SQLTransactionCallback_h

#include "bindings/v8/ActiveDOMCallback.h"
#include "bindings/v8/DOMWrapperWorld.h"
#include "bindings/v8/ScopedPersistent.h"
#include "modules/webdatabase/SQLTransactionCallback.h"

namespace WebCore {

class V8SQLTransactionCallback FINAL : public SQLTransactionCallback, public ActiveDOMCallback {
public:
    static PassOwnPtr<V8SQLTransactionCallback> create(v8::Handle<v8::Function> callback, ScriptState* scriptState)
    {
        return adoptPtr(new V8SQLTransactionCallback(callback, scriptState));
    }

    virtual ~V8SQLTransactionCallback();

    virtual bool handleEvent(SQLTransaction* transaction) OVERRIDE;
private:
    V8SQLTransactionCallback(v8::Handle<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};

}
#endif // V8SQLTransactionCallback_h
