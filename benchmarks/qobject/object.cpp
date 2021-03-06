/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/
#include "object.h"

void Object::emitSignal0()
{ emit signal0(); }
void Object::emitSignal1()
{ emit signal1(); }


void Object::slot0()
{ }
void Object::slot1()
{ }
void Object::slot2()
{ }
void Object::slot3()
{ }
void Object::slot4()
{ }
void Object::slot5()
{ }
void Object::slot6()
{ }
void Object::slot7()
{ }
void Object::slot8()
{ }
void Object::slot9()
{ }



void ObjectW::emitSignal0()
{ emit signal0(); }
void ObjectW::emitSignal1()
{ emit signal1(); }

void ObjectW::slot0()
{ }
void ObjectW::slot1()
{ }
void ObjectW::slot2()
{ }
void ObjectW::slot3()
{ }
void ObjectW::slot4()
{ }
void ObjectW::slot5()
{ }
void ObjectW::slot6()
{ }
void ObjectW::slot7()
{ }
void ObjectW::slot8()
{ }
void ObjectW::slot9()
{ }

W_OBJECT_IMPL(ObjectW)
