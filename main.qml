import QtQuick 2.3
import QtQuick.Window 2.2
import QtQuick.Layouts 1.2
import QtQuick.Extras 1.4
import QtQuick.Controls 1.3
import QtTest 1.1
import Qt.labs.settings 1.0
import Qt.labs.folderlistmodel 2.1

Window {
    visible: true
    width: 640
    height: 480

    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit();
        }

        Button {
            id: button1
            x: 251
            y: 284
            width: 109
            height: 23
            text: qsTr("Test Connection")
        }

        Label {
            id: serverOutput
            x: 204
            y: 138
            width: 203
            height: 126
        }
    }

    Connections {
        target: button1
        onClicked: {
                   SocketTest.connectionTest();

            }
        }
    }
