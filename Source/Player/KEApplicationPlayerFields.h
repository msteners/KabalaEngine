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


#ifndef _KEAPPLICATIONPLAYERFIELDS_H_
#define _KEAPPLICATIONPLAYERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "KEConfig.h"

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "KEKabalaEngineDef.h"

#include "Application/KEApplicationModeFields.h"

OSG_USING_NAMESPACE
KE_BEGIN_NAMESPACE

class ApplicationPlayer;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! ApplicationPlayerPtr

typedef FCPtr<ApplicationModePtr, ApplicationPlayer> ApplicationPlayerPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpKabalaEngineFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

KE_END_NAMESPACE

OSG_BEGIN_NAMESPACE
template <>
struct FieldDataTraits<ke::ApplicationPlayerPtr> : 
    public FieldTraitsRecurseMapper<ke::ApplicationPlayerPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType &getType (void) { return _type;        }

    static char     *getSName(void) { return "SFApplicationPlayerPtr"; }
    static char     *getMName(void) { return "MFApplicationPlayerPtr"; }
};
OSG_END_NAMESPACE

KE_BEGIN_NAMESPACE

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<ApplicationPlayerPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpKabalaEngineFieldSingle */

typedef SField<ApplicationPlayerPtr> SFApplicationPlayerPtr;
#endif

#ifndef KE_COMPILEAPPLICATIONPLAYERINST
OSG_DLLEXPORT_DECL1(SField, ApplicationPlayerPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpKabalaEngineFieldMulti */

typedef MField<ApplicationPlayerPtr> MFApplicationPlayerPtr;
#endif

#ifndef KE_COMPILEAPPLICATIONPLAYERINST
OSG_DLLEXPORT_DECL1(MField, ApplicationPlayerPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING)
#endif

KE_END_NAMESPACE

#endif /* _KEAPPLICATIONPLAYERFIELDS_H_ */
