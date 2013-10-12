#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent),
    slide(new QSlider()),
    spin(new QSpinBox()),
    lcd(new QLCDNumber()),
    h_layout(new QHBoxLayout()),
    v_layout(new QVBoxLayout())
{
    setLayout(v_layout);
    v_layout->addLayout(h_layout);
    //v_layout->addWidget(line);
    h_layout->addWidget(slide);
    h_layout->addWidget(spin);
    //h_layout->addWidget(yes);
    //h_layout->addWidget(no);
    h_layout->addWidget(lcd);
    //mpr->setMapping(yes, "You choose yes");
    //mpr->setMapping(no,  "You choose no");
    connect(spin, SIGNAL(valueChanged(int)),slide, SLOT(setValue(int)));
    connect(slide, SIGNAL(valueChanged(int)),spin, SLOT(setValue(int)));
    connect(spin, SIGNAL(valueChanged(int)),lcd, SLOT(display(int)));
    //connect(yes, SIGNAL(clicked()), mpr, SLOT(map()));
    //connect(no, SIGNAL(clicked()), mpr, SLOT(map()));

}

Widget::~Widget()
{

}

