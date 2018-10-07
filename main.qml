import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick.Controls 2.1

Window {
    id: rootWindow
    visible: true
    width: 300
    height: 480
    title: qsTr("SimpleListModel")

    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }
    }

    Component {
        id: componentId
        Rectangle {
            id: outlineId
            height: 70
            width: parent.width
            color: index%2 == 0 ? "lightsteelblue" : "steelblue"

            Column {
                height: children.height
                width: parent.width
                anchors.centerIn: parent
                spacing: 10
                Label {
                   text: qsTr("<b>%1</b>").arg(item.name)
                }
                Label {
                    text: qsTr(item.phoneNumber)
                }
            }
        }
    }

    ListView {
        id: listModelId
        anchors.fill: parent
        delegate: componentId
        model: backend.contactList
    }
}
