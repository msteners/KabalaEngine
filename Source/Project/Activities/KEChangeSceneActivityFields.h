/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  David Kabala (djkabala@gmail.com)                             *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU General Public License as published            *
 * by the Free Software Foundation, version 3.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU General Public                 *
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


#ifndef _KECHANGESCENEACTIVITYFIELDS_H_
#define _KECHANGESCENEACTIVITYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/OSGFieldContainerFields.h>
#include <OpenSG/OSGPointerSField.h>
#include <OpenSG/OSGPointerMField.h>


OSG_BEGIN_NAMESPACE

class ChangeSceneActivity;

OSG_GEN_CONTAINERPTR(ChangeSceneActivity);

/*! \ingroup GrpKabalaEngineFieldTraits
    \ingroup GrpLibOSGKabalaEngine
 */
template <>
struct FieldTraits<ChangeSceneActivity *> :
    public FieldTraitsFCPtrBase<ChangeSceneActivity *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ChangeSceneActivity *>  Self;

    enum                        { Convertible = NotConvertible };

    static KE_KABALAENGINE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFChangeSceneActivityPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFChangeSceneActivityPtr"; }
};

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChangeSceneActivityPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeSceneActivity *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChangeSceneActivityPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ChangeSceneActivity *,
                      RecordedRefCountPolicy  > SFRecChangeSceneActivityPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ChangeSceneActivity *,
                      UnrecordedRefCountPolicy> SFUnrecChangeSceneActivityPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ChangeSceneActivity *,
                      WeakRefCountPolicy      > SFWeakChangeSceneActivityPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ChangeSceneActivity *,
                      NoRefCountPolicy        > SFUncountedChangeSceneActivityPtr;


/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<ChangeSceneActivity *,
                      RecordedRefCountPolicy  > MFRecChangeSceneActivityPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<ChangeSceneActivity *,
                      UnrecordedRefCountPolicy> MFUnrecChangeSceneActivityPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<ChangeSceneActivity *,
                      WeakRefCountPolicy      > MFWeakChangeSceneActivityPtr;
/*! \ingroup GrpKabalaEngineFieldMFields */
typedef PointerMField<ChangeSceneActivity *,
                      NoRefCountPolicy        > MFUncountedChangeSceneActivityPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFRecChangeSceneActivityPtr : 
    public PointerSField<ChangeSceneActivity *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUnrecChangeSceneActivityPtr : 
    public PointerSField<ChangeSceneActivity *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFWeakChangeSceneActivityPtr :
    public PointerSField<ChangeSceneActivity *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUncountedChangeSceneActivityPtr :
    public PointerSField<ChangeSceneActivity *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFRecChangeSceneActivityPtr :
    public PointerMField<ChangeSceneActivity *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFUnrecChangeSceneActivityPtr :
    public PointerMField<ChangeSceneActivity *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFWeakChangeSceneActivityPtr :
    public PointerMField<ChangeSceneActivity *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpKabalaEngineFieldMFields \ingroup GrpLibOSGKabalaEngine */
struct MFUncountedChangeSceneActivityPtr :
    public PointerMField<ChangeSceneActivity *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _KECHANGESCENEACTIVITYFIELDS_H_ */
