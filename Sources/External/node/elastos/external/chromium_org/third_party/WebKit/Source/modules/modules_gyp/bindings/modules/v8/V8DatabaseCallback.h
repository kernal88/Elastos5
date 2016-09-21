// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8DatabaseCallback_h
#define V8DatabaseCallback_h

#include "bindings/v8/ActiveDOMCallback.h"
#include "bindings/v8/DOMWrapperWorld.h"
#include "bindings/v8/ScopedPersistent.h"
#include "modules/webdatabase/DatabaseCallback.h"

namespace WebCore {

class V8DatabaseCallback FINAL : public DatabaseCallback, public ActiveDOMCallback {
public:
    static PassOwnPtr<V8DatabaseCallback> create(v8::Handle<v8::Function> callback, ScriptState* scriptState)
    {
        return adoptPtr(new V8DatabaseCallback(callback, scriptState));
    }

    virtual ~V8DatabaseCallback();

    virtual bool handleEvent(Database* database) OVERRIDE;
    virtual bool handleEvent(DatabaseSync* database) OVERRIDE;
private:
    V8DatabaseCallback(v8::Handle<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};

}
#endif // V8DatabaseCallback_h
