/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  Robert Goetz (rdgoetz@iastate.edu)                            *
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
 **     class AnimationEffect!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OpenSG/OSGConfig.h>



#include <OpenSG/OSGAnimation.h>        // TheAnimation Class

#include "KEAnimationEffectBase.h"
#include "KEAnimationEffect.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AnimationEffect
    The SceneObject.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Animation *     AnimationEffectBase::_sfTheAnimation
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AnimationEffect *>::_type("AnimationEffectPtr", "EffectPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AnimationEffect *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AnimationEffect *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AnimationEffect *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AnimationEffectBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecAnimationPtr::Description(
        SFUnrecAnimationPtr::getClassType(),
        "TheAnimation",
        "",
        TheAnimationFieldId, TheAnimationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AnimationEffect::editHandleTheAnimation),
        static_cast<FieldGetMethodSig >(&AnimationEffect::getHandleTheAnimation));

    oType.addInitialDesc(pDesc);
}


AnimationEffectBase::TypeObject AnimationEffectBase::_type(
    AnimationEffectBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AnimationEffectBase::createEmptyLocal),
    AnimationEffect::initMethod,
    AnimationEffect::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AnimationEffect::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"AnimationEffect\"\n"
    "\tparent=\"Effect\"\n"
    "\tlibrary=\"KabalaEngine\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"false\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "\tlibnamespace=\"KE\"\n"
    "    authors=\"Robert Goetz (rdgoetz@iastate.edu)                            \"\n"
    ">\n"
    "The SceneObject.\n"
    "\t<Field\n"
    "\t\tname=\"TheAnimation\"\n"
    "\t\ttype=\"Animation\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n"
    "\n",
    "The SceneObject.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AnimationEffectBase::getType(void)
{
    return _type;
}

const FieldContainerType &AnimationEffectBase::getType(void) const
{
    return _type;
}

UInt32 AnimationEffectBase::getContainerSize(void) const
{
    return sizeof(AnimationEffect);
}

/*------------------------- decorator get ------------------------------*/


//! Get the AnimationEffect::_sfTheAnimation field.
const SFUnrecAnimationPtr *AnimationEffectBase::getSFTheAnimation(void) const
{
    return &_sfTheAnimation;
}

SFUnrecAnimationPtr *AnimationEffectBase::editSFTheAnimation   (void)
{
    editSField(TheAnimationFieldMask);

    return &_sfTheAnimation;
}





/*------------------------------ access -----------------------------------*/

UInt32 AnimationEffectBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TheAnimationFieldMask & whichField))
    {
        returnValue += _sfTheAnimation.getBinSize();
    }

    return returnValue;
}

void AnimationEffectBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TheAnimationFieldMask & whichField))
    {
        _sfTheAnimation.copyToBin(pMem);
    }
}

void AnimationEffectBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TheAnimationFieldMask & whichField))
    {
        _sfTheAnimation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AnimationEffectTransitPtr AnimationEffectBase::createLocal(BitVector bFlags)
{
    AnimationEffectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AnimationEffect>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AnimationEffectTransitPtr AnimationEffectBase::createDependent(BitVector bFlags)
{
    AnimationEffectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AnimationEffect>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AnimationEffectTransitPtr AnimationEffectBase::create(void)
{
    AnimationEffectTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AnimationEffect>(tmpPtr);
    }

    return fc;
}

AnimationEffect *AnimationEffectBase::createEmptyLocal(BitVector bFlags)
{
    AnimationEffect *returnValue;

    newPtr<AnimationEffect>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AnimationEffect *AnimationEffectBase::createEmpty(void)
{
    AnimationEffect *returnValue;

    newPtr<AnimationEffect>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr AnimationEffectBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AnimationEffect *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimationEffect *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimationEffectBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AnimationEffect *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AnimationEffect *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AnimationEffectBase::shallowCopy(void) const
{
    AnimationEffect *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AnimationEffect *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

AnimationEffectBase::AnimationEffectBase(void) :
    Inherited(),
    _sfTheAnimation           (NULL)
{
}

AnimationEffectBase::AnimationEffectBase(const AnimationEffectBase &source) :
    Inherited(source),
    _sfTheAnimation           (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

AnimationEffectBase::~AnimationEffectBase(void)
{
}

void AnimationEffectBase::onCreate(const AnimationEffect *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        AnimationEffect *pThis = static_cast<AnimationEffect *>(this);

        pThis->setTheAnimation(source->getTheAnimation());
    }
}

GetFieldHandlePtr AnimationEffectBase::getHandleTheAnimation    (void) const
{
    SFUnrecAnimationPtr::GetHandlePtr returnValue(
        new  SFUnrecAnimationPtr::GetHandle(
             &_sfTheAnimation,
             this->getType().getFieldDesc(TheAnimationFieldId),
             const_cast<AnimationEffectBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AnimationEffectBase::editHandleTheAnimation   (void)
{
    SFUnrecAnimationPtr::EditHandlePtr returnValue(
        new  SFUnrecAnimationPtr::EditHandle(
             &_sfTheAnimation,
             this->getType().getFieldDesc(TheAnimationFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&AnimationEffect::setTheAnimation,
                    static_cast<AnimationEffect *>(this), _1));

    editSField(TheAnimationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void AnimationEffectBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AnimationEffect *pThis = static_cast<AnimationEffect *>(this);

    pThis->execSync(static_cast<AnimationEffect *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AnimationEffectBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AnimationEffect *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AnimationEffect *>(pRefAspect),
                  dynamic_cast<const AnimationEffect *>(this));

    return returnValue;
}
#endif

void AnimationEffectBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<AnimationEffect *>(this)->setTheAnimation(NULL);


}


OSG_END_NAMESPACE
