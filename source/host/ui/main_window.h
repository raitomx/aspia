//
// Aspia Project
// Copyright (C) 2020 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef HOST__UI__MAIN_WINDOW_H
#define HOST__UI__MAIN_WINDOW_H

#include "host/user_session_window.h"
#include "ui_main_window.h"

#include <QMainWindow>
#include <QPointer>
#include <QSystemTrayIcon>

namespace host {

class NotifierWindow;
class UserSessionAgentProxy;

class MainWindow
    : public QMainWindow,
      public UserSessionWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

public slots:
    void connectToService();
    void activateHost();
    void hideToTray();

protected:
    // QMainWindow implementation.
    void closeEvent(QCloseEvent* event) override;

    // UserSessionWindow implementation.
    void onStatusChanged(UserSessionAgent::Status status) override;
    void onClientListChanged(const UserSessionAgent::ClientList& clients) override;
    void onCredentialsChanged(const proto::internal::Credentials& credentials) override;
    void onRouterStateChanged(const proto::internal::RouterState& state) override;

private slots:
    void realClose();
    void onLanguageChanged(QAction* action);
    void onSettings();
    void onShowHide();
    void onHelp();
    void onAbout();
    void onExit();

private:
    void createLanguageMenu(const QString& current_locale);

    Ui::MainWindow ui;

    bool should_be_quit_ = false;

    QSystemTrayIcon tray_icon_;
    QMenu tray_menu_;
    QLabel* status_label_ = nullptr;
    QPointer<NotifierWindow> notifier_;

    std::unique_ptr<UserSessionAgentProxy> agent_proxy_;
    std::shared_ptr<UserSessionWindowProxy> window_proxy_;

    DISALLOW_COPY_AND_ASSIGN(MainWindow);
};

} // namespace host

#endif // HOST__UI__MAIN_WINDOW_H
