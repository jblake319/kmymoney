#ifndef GERMANCREDITTRANSFEREDIT_H
#define GERMANCREDITTRANSFEREDIT_H

#include <QWidget>

#include "mymoney/onlinejobknowntask.h"
#include "mymoney/germanonlinetransfer.h"
#include "mymoney/swiftaccountidentifier.h"

namespace Ui {
class germanCreditTransferEdit;
}

class germanCreditTransferEdit : public QWidget
{
    Q_OBJECT
    
public:
  explicit germanCreditTransferEdit(QWidget *parent = 0);
  ~germanCreditTransferEdit();

  /** @brief Reads interface and creates an onlineJob */
  onlineJobKnownTask<germanOnlineTransfer> getOnlineJob() const;

public slots:
    bool setOnlineJob( const onlineJob );
    bool setOnlineJob( const onlineJobKnownTask<germanOnlineTransfer> );
    void setOriginAccount( const QString& );

private:
    QString m_originAccount;
    Ui::germanCreditTransferEdit *ui;
    onlineJobKnownTask<germanOnlineTransfer> m_germanCreditTransfer;

private slots:
    void beneficiaryNameChanged( const QString& );
    void beneficiaryAccountChanged( const QString& );
    void beneficiaryBankCodeChanged( QString );
    void valueChanged();
    void purposeChanged();
    
    void updateEveryStatus();
    void updateTaskSettings();
};

#endif // GERMANCREDITTRANSFEREDIT_H
