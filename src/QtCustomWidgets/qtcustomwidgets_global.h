﻿#ifndef QTCUSTOMWIDGETS_GLOBAL_H
#define QTCUSTOMWIDGETS_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef QTCUSTOMWIDGETS_LIB
# define QTCUSTOMWIDGETS_EXPORT Q_DECL_EXPORT
#else
# define QTCUSTOMWIDGETS_EXPORT Q_DECL_IMPORT
#endif

#endif // QTCUSTOMWIDGETS_GLOBAL_H
