#ifndef CALC_H
#define CALC_H

#include <QObject>
#include <vector>

class Calc : public QObject
{
    Q_OBJECT
public:
    explicit Calc(QObject *parent = nullptr);
signals:
    void display(int sum);
public slots:
    void onePushed();
    void twoPushed();
    void threePushed();
    void fourPushed();
    void fivePushed();
    void sixPushed();
    void sevenPushed();
    void eightPushed();
    void ninePushed();
    void zeroPushed();
    void plusPushed();
    void equalsPushed();
private:
    int buffer();
    std::vector<int> digits;
    std::vector<int> addends;
};

#endif // CALC_H
