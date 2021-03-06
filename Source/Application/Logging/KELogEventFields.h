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


#ifndef _KELOGEVENTFIELDS_H_
#define _KELOGEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/OSGFieldContainerFields.h>
#include <OpenSG/OSGPointerSField.h>
#include <OpenSG/OSGPointerMField.h>


OSG_BEGIN_NAMESPACE

class LogEvent;

OSG_GEN_CONTAINERPTR(LogEvent);

/*! \ingroup GrpKabalaEngineFieldTraits
    \ingroup GrpLibOSGKabalaEngine
 */
template <>
struct FieldTraits<LogEvent *> :
    public FieldTraitsFCPtrBase<LogEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<LogEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static KE_KABALAENGINE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFLogEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<LogEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecLogEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<LogEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecLogEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<LogEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakLogEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<LogEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdLogEventPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<LogEvent *,
                      RecordedRefCountPolicy  > SFRecLogEventPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<LogEvent *,
                      UnrecordedRefCountPolicy> SFUnrecLogEventPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<LogEvent *,
                      WeakRefCountPolicy      > SFWeakLogEventPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<LogEvent *,
                      NoRefCountPolicy        > SFUncountedLogEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFRecLogEventPtr : 
    public PointerSField<LogEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUnrecLogEventPtr : 
    public PointerSField<LogEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFWeakLogEventPtr :
    public PointerSField<LogEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUncountedLogEventPtr :
    public PointerSField<LogEvent *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _KELOGEVENTFIELDS_H_ */
