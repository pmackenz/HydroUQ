#ifndef BUILDINGS_H
#define BUILDINGS_H

#include <QFrame>

namespace Ui {
class buildings;
}

class buildings : public QFrame
{
    Q_OBJECT

public:
    explicit buildings(int, QWidget *parent = nullptr);
    ~buildings();
    bool getData(QMap<QString, QString>&,int);
    void refreshData(int);

private slots:
    void on_Btn_AddBuild_clicked();
    void on_Btn_RemBuild_clicked();
    void on_ChB_Parametric_stateChanged(int arg1);

private:
    void hideshowelems(int);
    Ui::buildings *ui;
};

#endif // BUILDINGS_H
