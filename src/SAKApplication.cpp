﻿/*******************************************************************************
* The file is encoding with utf-8 (with BOM)
*
* I write the comment with English, it's not because that I'm good at English,
* but for "installing B".
*
* Copyright (C) 2018-2018 wuhai persionnal. All rights reserved.
*******************************************************************************/
#if _MSC_VER > 1600
#pragma execution_character_set("utf-8")
#endif

#include "SAKApplication.h"

#include <QDebug>

SAKApplication::SAKApplication(int argc, char **argv):
    QApplication(argc, argv),
    mpMainWindow(new MainWindow)
{
    mpMainWindow->show();
}

SAKApplication::~SAKApplication()
{

}