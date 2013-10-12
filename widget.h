#ifndef WIDGET_H
#define WIDGET_H
#include <QWidget>
#include <QtWidgets>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();


private:
    QSlider *slide;
    QSpinBox *spin;
    QLCDNumber *lcd;
    QHBoxLayout *h_layout;
    QVBoxLayout *v_layout;
    QPushButton *yes, *no;
    QLineEdit *line;

};

#endif // WIDGET_H
