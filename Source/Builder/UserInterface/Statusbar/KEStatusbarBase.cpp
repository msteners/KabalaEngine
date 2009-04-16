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
 **     Do not change this file, changes should be done in the derived      **
 **     class Statusbar!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILESTATUSBARINST

#include <stdlib.h>
#include <stdio.h>

#include "KEConfig.h"

#include "KEStatusbarBase.h"
#include "KEStatusbar.h"


KE_USING_NAMESPACE

const OSG::BitVector StatusbarBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType StatusbarBase::_type(
    "Statusbar",
    "Interface",
    NULL,
    (PrototypeCreateF) &StatusbarBase::createEmpty,
    Statusbar::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(StatusbarBase, StatusbarPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &StatusbarBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &StatusbarBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr StatusbarBase::shallowCopy(void) const 
{ 
    StatusbarPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Statusbar *>(this)); 

    return returnValue; 
}

::osg::UInt32 StatusbarBase::getContainerSize(void) const 
{ 
    return sizeof(Statusbar); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void StatusbarBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((StatusbarBase *) &other, whichField);
}
#else
void StatusbarBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((StatusbarBase *) &other, whichField, sInfo);
}
void StatusbarBase::execBeginEdit(const BitVector &whichField, 
                                            ::osg::UInt32     uiAspect,
                                            ::osg::UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void StatusbarBase::onDestroyAspect(::osg::UInt32 uiId, ::osg::UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

StatusbarBase::StatusbarBase(void) :
    Inherited() 
{
}

StatusbarBase::StatusbarBase(const StatusbarBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

StatusbarBase::~StatusbarBase(void)
{
}

/*------------------------------ access -----------------------------------*/

::osg::UInt32 StatusbarBase::getBinSize(const BitVector &whichField)
{
    ::osg::UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void StatusbarBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void StatusbarBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void StatusbarBase::executeSyncImpl(      StatusbarBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void StatusbarBase::executeSyncImpl(      StatusbarBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void StatusbarBase::execBeginEditImpl (const BitVector &whichField, 
                                                 ::osg::UInt32     uiAspect,
                                                 ::osg::UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<StatusbarPtr>::_type("StatusbarPtr", "InterfacePtr");
#endif

KE_BEGIN_NAMESPACE

OSG_DLLEXPORT_SFIELD_DEF1(StatusbarPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(StatusbarPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);

KE_END_NAMESPACE


