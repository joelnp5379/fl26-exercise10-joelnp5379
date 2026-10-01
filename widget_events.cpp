// widget_events.cpp
#include "widget_events.hpp"
#include <QEvent>
#include <QMetaEnum>
#include <iostream>
#include <string>

WidgetEvent::WidgetEvent(QWidget *parent) : QWidget(parent) {}

WidgetEvent::~WidgetEvent() {}

bool WidgetEvent::event(QEvent *ev) {
    QMetaEnum metaEnum = QMetaEnum::fromType<QEvent::Type>();
    const char* eventName = metaEnum.valueToKey(ev->type());

    if (eventName) {
        std::cout << "Event received: " << eventName << std::endl;
    } else {
        std::cout << "Event received (Address): " << ev << " Type: " << ev->type() << std::endl;
    }

   // std::string mystring;
   // std::cout << "Enter text to unblock: ";
   // std::cin >> mystring;


    return true;
}
