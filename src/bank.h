#ifndef BANK_H
#define BANK_H

#include <QLayout>
#include <QSignalMapper>
#include <src/qsoftwaretarget.h>
#include <src/constants.h>
#include <src/layer.h>

class QBank : public QWidget
{
    Q_OBJECT
    Q_ENUMS(SubBankAddingMode)
    Q_PROPERTY(SubBankAddingMode SubBankMode READ GetSubBankAddingMode WRITE SetSubBankAddingMode NOTIFY SubBankAddingModeChanged)
    Q_ENUMS(SubPanelDivisionMode)
    Q_PROPERTY(SubPanelDivisionMode SubPanelMode READ GetSubPanelDivisionMode WRITE SetSubPanelDivisionMode NOTIFY SubPanelDivisionModeChanged)

public:
    explicit QBank(QWidget *parent = 0);
    ~QBank();

//PROPERTIES
public:
    enum SubBankAddingMode { SubPanel, Dock, Tab };
    SubBankAddingMode GetSubBankAddingMode() { return m_subbankaddmode; };
    void SetSubBankAddingMode(SubBankAddingMode Mode) { m_subbankaddmode = Mode; };
signals:
    void SubBankAddingModeChanged(SubBankAddingMode);
private:
    SubBankAddingMode m_subbankaddmode;

public:
    enum SubPanelDivisionMode { Automatic };
    SubPanelDivisionMode GetSubPanelDivisionMode() { return m_subpaneldivisionmode; };
    void SetSubPanelDivisionMode(SubPanelDivisionMode Mode) { m_subpaneldivisionmode = Mode; };
signals:
    void SubPanelDivisionModeChanged(SubPanelDivisionMode);
private:
    SubPanelDivisionMode m_subpaneldivisionmode;


public slots:

};

#endif // BANK_H
