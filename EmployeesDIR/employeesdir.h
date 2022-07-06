#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_employeesdir.h"

class EmployeesDIR : public QMainWindow
{
    Q_OBJECT

public:
    EmployeesDIR(QWidget *parent = nullptr);
    ~EmployeesDIR();

private:
    Ui::EmployeesDIRClass ui;
};
