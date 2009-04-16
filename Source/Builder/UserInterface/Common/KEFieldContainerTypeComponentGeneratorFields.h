/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala (dkabala@vrac.iastate.edu)                        *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _KEFIELDCONTAINERTYPECOMPONENTGENERATORFIELDS_H_
#define _KEFIELDCONTAINERTYPECOMPONENTGENERATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "KEConfig.h"

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "KEKabalaEngineDef.h"

#include  <OpenSG/UserInterface/OSGListComponentGeneratorFields.h>

OSG_USING_NAMESPACE
KE_BEGIN_NAMESPACE

class FieldContainerTypeComponentGenerator;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! FieldContainerTypeComponentGeneratorPtr

typedef FCPtr<ListComponentGeneratorPtr, FieldContainerTypeComponentGenerator> FieldContainerTypeComponentGeneratorPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpKabalaEngineFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

KE_END_NAMESPACE

template <>
struct FieldDataTraits<ke::FieldContainerTypeComponentGeneratorPtr> : 
    public FieldTraitsRecurseMapper<ke::FieldContainerTypeComponentGeneratorPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType &getType (void) { return _type;        }

    static char     *getSName(void) { return "SFFieldContainerTypeComponentGeneratorPtr"; }
    static char     *getMName(void) { return "MFFieldContainerTypeComponentGeneratorPtr"; }
};

KE_BEGIN_NAMESPACE

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<FieldContainerTypeComponentGeneratorPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpKabalaEngineFieldSingle */

typedef SField<FieldContainerTypeComponentGeneratorPtr> SFFieldContainerTypeComponentGeneratorPtr;
#endif

#ifndef KE_COMPILEFIELDCONTAINERTYPECOMPONENTGENERATORINST
OSG_DLLEXPORT_DECL1(SField, FieldContainerTypeComponentGeneratorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpKabalaEngineFieldMulti */

typedef MField<FieldContainerTypeComponentGeneratorPtr> MFFieldContainerTypeComponentGeneratorPtr;
#endif

#ifndef KE_COMPILEFIELDCONTAINERTYPECOMPONENTGENERATORINST
OSG_DLLEXPORT_DECL1(MField, FieldContainerTypeComponentGeneratorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING)
#endif

KE_END_NAMESPACE

#endif /* _KEFIELDCONTAINERTYPECOMPONENTGENERATORFIELDS_H_ */
