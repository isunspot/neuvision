#pragma once

#include <QtCore/qglobal.h>

#if defined(Z3D_CAMERACALIBRATION_LIBRARY)
#  define Z3D_CAMERACALIBRATION_SHARED_EXPORT Q_DECL_EXPORT
#else
#  define Z3D_CAMERACALIBRATION_SHARED_EXPORT Q_DECL_IMPORT
#endif
