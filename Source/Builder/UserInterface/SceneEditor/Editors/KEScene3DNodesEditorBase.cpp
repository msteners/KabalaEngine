/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *                                                                           *
 *   contact: djkabala@gmail.com                                             *
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
 **     Do not change this file, changes should be done in the derived      **
 **     class Scene3DNodesEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILESCENE3DNODESEDITORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "KEScene3DNodesEditorBase.h"
#include "KEScene3DNodesEditor.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector Scene3DNodesEditorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType Scene3DNodesEditorBase::_type(
    "Scene3DNodesEditor",
    "SceneComponentEditor",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&Scene3DNodesEditorBase::createEmpty),
    Scene3DNodesEditor::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(Scene3DNodesEditorBase, Scene3DNodesEditorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &Scene3DNodesEditorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &Scene3DNodesEditorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr Scene3DNodesEditorBase::shallowCopy(void) const 
{ 
    Scene3DNodesEditorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const Scene3DNodesEditor *>(this)); 

    return returnValue; 
}

UInt32 Scene3DNodesEditorBase::getContainerSize(void) const 
{ 
    return sizeof(Scene3DNodesEditor); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void Scene3DNodesEditorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<Scene3DNodesEditorBase *>(&other),
                          whichField);
}
#else
void Scene3DNodesEditorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((Scene3DNodesEditorBase *) &other, whichField, sInfo);
}
void Scene3DNodesEditorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void Scene3DNodesEditorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

Scene3DNodesEditorBase::Scene3DNodesEditorBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

Scene3DNodesEditorBase::Scene3DNodesEditorBase(const Scene3DNodesEditorBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

Scene3DNodesEditorBase::~Scene3DNodesEditorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 Scene3DNodesEditorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void Scene3DNodesEditorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void Scene3DNodesEditorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void Scene3DNodesEditorBase::executeSyncImpl(      Scene3DNodesEditorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void Scene3DNodesEditorBase::executeSyncImpl(      Scene3DNodesEditorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void Scene3DNodesEditorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<Scene3DNodesEditorPtr>::_type("Scene3DNodesEditorPtr", "SceneComponentEditorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(Scene3DNodesEditorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(Scene3DNodesEditorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);

OSG_END_NAMESPACE

