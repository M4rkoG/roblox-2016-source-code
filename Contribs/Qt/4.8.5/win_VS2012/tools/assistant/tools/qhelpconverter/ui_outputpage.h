/********************************************************************************
** Form generated from reading UI file 'outputpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTPAGE_H
#define UI_OUTPUTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OutputPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QLineEdit *projectLineEdit;
    QLabel *label_2;
    QLineEdit *collectionLineEdit;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *OutputPage)
    {
        if (OutputPage->objectName().isEmpty())
            OutputPage->setObjectName(QString::fromUtf8("OutputPage"));
        OutputPage->resize(417, 242);
        gridLayout = new QGridLayout(OutputPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 0, 1, 1, 1);

        label = new QLabel(OutputPage);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        projectLineEdit = new QLineEdit(OutputPage);
        projectLineEdit->setObjectName(QString::fromUtf8("projectLineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(projectLineEdit->sizePolicy().hasHeightForWidth());
        projectLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(projectLineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(OutputPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        collectionLineEdit = new QLineEdit(OutputPage);
        collectionLineEdit->setObjectName(QString::fromUtf8("collectionLineEdit"));
        sizePolicy1.setHeightForWidth(collectionLineEdit->sizePolicy().hasHeightForWidth());
        collectionLineEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(collectionLineEdit, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 1);


        retranslateUi(OutputPage);

        QMetaObject::connectSlotsByName(OutputPage);
    } // setupUi

    void retranslateUi(QWidget *OutputPage)
    {
        OutputPage->setWindowTitle(QApplication::translate("OutputPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("OutputPage", "Project file name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("OutputPage", "Collection file name:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class OutputPage: public Ui_OutputPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTPAGE_H
