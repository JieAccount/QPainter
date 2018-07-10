/********************************************************************************
** Form generated from reading UI file 'veellipsesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEELLIPSESETTINGS_H
#define UI_VEELLIPSESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>
#include "colorlabel.h"

QT_BEGIN_NAMESPACE

class Ui_VEEllipseSettings
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QComboBox *comboBox;
    QWidget *fillingWidget;
    QGridLayout *gridLayout_2;
    QSpinBox *borderWidth;
    ColorLabel *borderColor;
    QLabel *label_4;
    ColorLabel *color_1;
    QLabel *labelColor_1;
    QLabel *label_2;
    QLabel *labelColor_2;
    ColorLabel *color_2;

    void setupUi(QWidget *VEEllipseSettings)
    {
        if (VEEllipseSettings->objectName().isEmpty())
            VEEllipseSettings->setObjectName(QStringLiteral("VEEllipseSettings"));
        VEEllipseSettings->resize(185, 215);
        gridLayout = new QGridLayout(VEEllipseSettings);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        comboBox = new QComboBox(VEEllipseSettings);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        fillingWidget = new QWidget(VEEllipseSettings);
        fillingWidget->setObjectName(QStringLiteral("fillingWidget"));
        gridLayout_2 = new QGridLayout(fillingWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        borderWidth = new QSpinBox(fillingWidget);
        borderWidth->setObjectName(QStringLiteral("borderWidth"));
        borderWidth->setMinimum(0);
        borderWidth->setMaximum(200);
        borderWidth->setValue(1);

        gridLayout_2->addWidget(borderWidth, 3, 1, 1, 1);

        borderColor = new ColorLabel(fillingWidget);
        borderColor->setObjectName(QStringLiteral("borderColor"));

        gridLayout_2->addWidget(borderColor, 2, 1, 1, 1);

        label_4 = new QLabel(fillingWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        color_1 = new ColorLabel(fillingWidget);
        color_1->setObjectName(QStringLiteral("color_1"));

        gridLayout_2->addWidget(color_1, 0, 1, 1, 1);

        labelColor_1 = new QLabel(fillingWidget);
        labelColor_1->setObjectName(QStringLiteral("labelColor_1"));

        gridLayout_2->addWidget(labelColor_1, 0, 0, 1, 1);

        label_2 = new QLabel(fillingWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        labelColor_2 = new QLabel(fillingWidget);
        labelColor_2->setObjectName(QStringLiteral("labelColor_2"));

        gridLayout_2->addWidget(labelColor_2, 1, 0, 1, 1);

        color_2 = new ColorLabel(fillingWidget);
        color_2->setObjectName(QStringLiteral("color_2"));

        gridLayout_2->addWidget(color_2, 1, 1, 1, 1);


        gridLayout->addWidget(fillingWidget, 1, 0, 1, 1);


        retranslateUi(VEEllipseSettings);

        QMetaObject::connectSlotsByName(VEEllipseSettings);
    } // setupUi

    void retranslateUi(QWidget *VEEllipseSettings)
    {
        VEEllipseSettings->setWindowTitle(QApplication::translate("VEEllipseSettings", "Form", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("VEEllipseSettings", "\346\227\240\346\225\210\346\236\234", 0)
         << QApplication::translate("VEEllipseSettings", "\346\270\220\345\217\230\345\241\253\345\205\205", 0)
        );
        borderColor->setText(QString());
        label_4->setText(QApplication::translate("VEEllipseSettings", "border width", 0));
        color_1->setText(QString());
        labelColor_1->setText(QApplication::translate("VEEllipseSettings", "background", 0));
        label_2->setText(QApplication::translate("VEEllipseSettings", "border color", 0));
        labelColor_2->setText(QApplication::translate("VEEllipseSettings", "color 2", 0));
        color_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VEEllipseSettings: public Ui_VEEllipseSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEELLIPSESETTINGS_H