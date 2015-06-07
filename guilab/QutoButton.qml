import QtQuick 2.0

Rectangle {
    //Expose properties and aliases
    width: 100
    height: 62
    id:buttonContainer;
    //anchors.horizontalCenter: parent.horizontalCenter
    //anchors.verticalCenter: parent.verticalCenter

    states: State {
        name: "pressed"; when: buttonMouseArea.pressed
        PropertyChanges { target: buttonContainer; scale: 1.2 }
    }

    transitions: Transition {
        NumberAnimation { properties: "scale"; duration: 200; easing.type: Easing.InOutQuad }
    }

    MouseArea
    {
        id:buttonMouseArea;
        anchors.fill: parent;
        //Here we need signals
    }

    Text
    {
        id:buttonText;
        color:"White" //Get it from theme
    }
}
