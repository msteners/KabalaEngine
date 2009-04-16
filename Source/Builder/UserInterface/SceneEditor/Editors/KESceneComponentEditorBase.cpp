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
 **     class SceneComponentEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define KE_COMPILESCENECOMPONENTEDITORINST

#include <stdlib.h>
#include <stdio.h>

#include "KEConfig.h"

#include "KESceneComponentEditorBase.h"
#include "KESceneComponentEditor.h"


KE_USING_NAMESPACE

const OSG::BitVector  SceneComponentEditorBase::EditingSceneFieldMask = 
    (TypeTraits<BitVector>::One << SceneComponentEditorBase::EditingSceneFieldId);

const OSG::BitVector SceneComponentEditorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var ScenePtr        SceneComponentEditorBase::_sfEditingScene
    
*/

//! SceneComponentEditor description

FieldDescription *SceneComponentEditorBase::_desc[] = 
{
    new FieldDescription(SFScenePtr::getClassType(), 
                     "EditingScene", 
                     EditingSceneFieldId, EditingSceneFieldMask,
                     false,
                     (FieldAccessMethod) &SceneComponentEditorBase::getSFEditingScene)
};


FieldContainerType SceneComponentEditorBase::_type(
    "SceneComponentEditor",
    "EditorInterface",
    NULL,
    NULL, 
    SceneComponentEditor::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SceneComponentEditorBase, SceneComponentEditorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SceneComponentEditorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SceneComponentEditorBase::getType(void) const 
{
    return _type;
} 


::osg::UInt32 SceneComponentEditorBase::getContainerSize(void) const 
{ 
    return sizeof(SceneComponentEditor); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SceneComponentEditorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SceneComponentEditorBase *) &other, whichField);
}
#else
void SceneComponentEditorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SceneComponentEditorBase *) &other, whichField, sInfo);
}
void SceneComponentEditorBase::execBeginEdit(const BitVector &whichField, 
                                            ::osg::UInt32     uiAspect,
                                            ::osg::UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SceneComponentEditorBase::onDestroyAspect(::osg::UInt32 uiId, ::osg::UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

SceneComponentEditorBase::SceneComponentEditorBase(void) :
    _sfEditingScene           (ScenePtr(NullFC)), 
    Inherited() 
{
}

SceneComponentEditorBase::SceneComponentEditorBase(const SceneComponentEditorBase &source) :
    _sfEditingScene           (source._sfEditingScene           ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SceneComponentEditorBase::~SceneComponentEditorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

::osg::UInt32 SceneComponentEditorBase::getBinSize(const BitVector &whichField)
{
    ::osg::UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EditingSceneFieldMask & whichField))
    {
        returnValue += _sfEditingScene.getBinSize();
    }


    return returnValue;
}

void SceneComponentEditorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EditingSceneFieldMask & whichField))
    {
        _sfEditingScene.copyToBin(pMem);
    }


}

void SceneComponentEditorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EditingSceneFieldMask & whichField))
    {
        _sfEditingScene.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SceneComponentEditorBase::executeSyncImpl(      SceneComponentEditorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EditingSceneFieldMask & whichField))
        _sfEditingScene.syncWith(pOther->_sfEditingScene);


}
#else
void SceneComponentEditorBase::executeSyncImpl(      SceneComponentEditorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (EditingSceneFieldMask & whichField))
        _sfEditingScene.syncWith(pOther->_sfEditingScene);



}

void SceneComponentEditorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 ::osg::UInt32     uiAspect,
                                                 ::osg::UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SceneComponentEditorPtr>::_type("SceneComponentEditorPtr", "EditorInterfacePtr");
#endif

KE_BEGIN_NAMESPACE

OSG_DLLEXPORT_SFIELD_DEF1(SceneComponentEditorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SceneComponentEditorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING);

KE_END_NAMESPACE


