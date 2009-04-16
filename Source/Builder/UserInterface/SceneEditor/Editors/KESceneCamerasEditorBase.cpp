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
 **     class SceneCamerasEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILESCENECAMERASEDITORINST

#include <stdlib.h>
#include <stdio.h>

#include "KEConfig.h"

#include "KESceneCamerasEditorBase.h"
#include "KESceneCamerasEditor.h"


KE_USING_NAMESPACE

const OSG::BitVector SceneCamerasEditorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType SceneCamerasEditorBase::_type(
    "SceneCamerasEditor",
    "SceneComponentEditor",
    NULL,
    (PrototypeCreateF) &SceneCamerasEditorBase::createEmpty,
    SceneCamerasEditor::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(SceneCamerasEditorBase, SceneCamerasEditorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SceneCamerasEditorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SceneCamerasEditorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SceneCamerasEditorBase::shallowCopy(void) const 
{ 
    SceneCamerasEditorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SceneCamerasEditor *>(this)); 

    return returnValue; 
}

::osg::UInt32 SceneCamerasEditorBase::getContainerSize(void) const 
{ 
    return sizeof(SceneCamerasEditor); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SceneCamerasEditorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SceneCamerasEditorBase *) &other, whichField);
}
#else
void SceneCamerasEditorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SceneCamerasEditorBase *) &other, whichField, sInfo);
}
void SceneCamerasEditorBase::execBeginEdit(const BitVector &whichField, 
                                            ::osg::UInt32     uiAspect,
                                            ::osg::UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SceneCamerasEditorBase::onDestroyAspect(::osg::UInt32 uiId, ::osg::UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

SceneCamerasEditorBase::SceneCamerasEditorBase(void) :
    Inherited() 
{
}

SceneCamerasEditorBase::SceneCamerasEditorBase(const SceneCamerasEditorBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SceneCamerasEditorBase::~SceneCamerasEditorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

::osg::UInt32 SceneCamerasEditorBase::getBinSize(const BitVector &whichField)
{
    ::osg::UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void SceneCamerasEditorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void SceneCamerasEditorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SceneCamerasEditorBase::executeSyncImpl(      SceneCamerasEditorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void SceneCamerasEditorBase::executeSyncImpl(      SceneCamerasEditorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void SceneCamerasEditorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 ::osg::UInt32     uiAspect,
                                                 ::osg::UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SceneCamerasEditorPtr>::_type("SceneCamerasEditorPtr", "SceneComponentEditorPtr");
#endif

KE_BEGIN_NAMESPACE

OSG_DLLEXPORT_SFIELD_DEF1(SceneCamerasEditorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SceneCamerasEditorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);

KE_END_NAMESPACE


