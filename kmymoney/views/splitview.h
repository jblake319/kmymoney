/*
 * Copyright 2019-2020  Thomas Baumgart <tbaumgart@kde.org>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef SPLITVIEW_H
#define SPLITVIEW_H

// ----------------------------------------------------------------------------
// QT Includes

#include <QTableView>
#include <QVector>

// ----------------------------------------------------------------------------
// KDE Includes

// ----------------------------------------------------------------------------
// Project Includes

#include "mymoneyenums.h"

class MyMoneyAccount;
class MyMoneySecurity;

class SplitView : public QTableView
{
  Q_OBJECT
public:
  explicit SplitView(QWidget* parent = 0);
  virtual ~SplitView();

  /**
   * This method is used to modify the visibility of the
   * empty entry at the end of the ledger. The default
   * for the parameter @a show is @c true.
   */
  void setShowEntryForNewTransaction(bool show = true);

  void setSingleLineDetailRole(eMyMoney::Model::Roles role);

  /**
   * Returns true if the sign of the values displayed has
   * been inverted depending on the account type.
   */
  bool showValuesInverted() const;

  void setColumnsHidden(QVector<int> columns);
  void setColumnsShown(QVector<int> columns);

  void setModel(QAbstractItemModel * model) override;

  void setCommodity(const MyMoneySecurity& commodity);

  void selectMostRecentTransaction();

  void skipStartEditing();
  void blockEditorStart(bool blocked);

public Q_SLOTS:
  /**
   * This method scrolls the ledger so that the current item is visible
   */
  void ensureCurrentItemIsVisible();

  /**
   * Overridden for internal reasons. No change in base functionality
   */
  void edit(const QModelIndex& index) { QTableView::edit(index); }

  void slotSettingsChanged();

protected:
  bool edit(const QModelIndex& index, EditTrigger trigger, QEvent* event) final override;
  void mousePressEvent(QMouseEvent* event) final override;
  void mouseMoveEvent(QMouseEvent* event) final override;
  void mouseDoubleClickEvent(QMouseEvent* event) final override;
  void wheelEvent(QWheelEvent *event) final override;
  void moveEvent(QMoveEvent *event) final override;
  void resizeEvent(QResizeEvent* event) final override;
  void paintEvent(QPaintEvent* event) final override;
  int sizeHintForRow(int row) const final override;
  int sizeHintForColumn(int row) const final override;

protected Q_SLOTS:
  void closeEditor(QWidget* editor, QAbstractItemDelegate::EndEditHint hint) final override;
  void currentChanged(const QModelIndex &current, const QModelIndex &previous) final override;

  virtual void adjustDetailColumn(int newViewportWidth);
  virtual void adjustDetailColumn();

Q_SIGNALS:
  void transactionSelected(const QModelIndex& idx);
  void aboutToStartEdit();
  void aboutToFinishEdit();

protected:
  class Private;
  Private * const d;
};
#endif // SPLITVIEW_H

