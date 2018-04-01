//
// PROJECT:         Aspia
// FILE:            host/clipboard_thread.h
// LICENSE:         GNU Lesser General Public License 2.1
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_HOST__CLIPBOARD_THREAD_H
#define _ASPIA_HOST__CLIPBOARD_THREAD_H

#include "base/threading/thread.h"
#include "host/clipboard.h"

namespace aspia {

class ClipboardThread : private Thread::Delegate
{
public:
    ClipboardThread() = default;
    ~ClipboardThread();

    void Start(Clipboard::ClipboardEventCallback event_callback);
    void InjectClipboardEvent(const proto::desktop::ClipboardEvent& clipboard_event);

private:
    // Thread::Delegate implementation.
    void OnBeforeThreadRunning() override;
    void OnAfterThreadRunning() override;

    Clipboard::ClipboardEventCallback event_callback_;
    Thread ui_thread_;
    Clipboard clipboard_;
    std::shared_ptr<MessageLoopProxy> runner_;

    Q_DISABLE_COPY(ClipboardThread)
};


} // namespace aspia

#endif // _ASPIA_HOST__CLIPBOARD_THREAD_H
