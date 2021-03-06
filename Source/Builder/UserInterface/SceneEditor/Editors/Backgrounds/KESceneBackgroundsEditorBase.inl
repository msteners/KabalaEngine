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
 **     class SceneBackgroundsEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SceneBackgroundsEditorBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SceneBackgroundsEditorBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
SceneBackgroundsEditorPtr SceneBackgroundsEditorBase::create(void) 
{
    SceneBackgroundsEditorPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = SceneBackgroundsEditorPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
SceneBackgroundsEditorPtr SceneBackgroundsEditorBase::createEmpty(void) 
{ 
    SceneBackgroundsEditorPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the SceneBackgroundsEditor::_sfEditingBackground field.
inline
const SFBackgroundPtr *SceneBackgroundsEditorBase::getSFEditingBackground(void) const
{
    return &_sfEditingBackground;
}

//! Get the SceneBackgroundsEditor::_sfEditingBackground field.
inline
SFBackgroundPtr *SceneBackgroundsEditorBase::editSFEditingBackground(void)
{
    return &_sfEditingBackground;
}

#ifndef OSG_2_PREP
//! Get the SceneBackgroundsEditor::_sfEditingBackground field.
inline
SFBackgroundPtr *SceneBackgroundsEditorBase::getSFEditingBackground(void)
{
    return &_sfEditingBackground;
}
#endif


//! Get the value of the SceneBackgroundsEditor::_sfEditingBackground field.
inline
BackgroundPtr &SceneBackgroundsEditorBase::editEditingBackground(void)
{
    return _sfEditingBackground.getValue();
}

//! Get the value of the SceneBackgroundsEditor::_sfEditingBackground field.
inline
const BackgroundPtr &SceneBackgroundsEditorBase::getEditingBackground(void) const
{
    return _sfEditingBackground.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the SceneBackgroundsEditor::_sfEditingBackground field.
inline
BackgroundPtr &SceneBackgroundsEditorBase::getEditingBackground(void)
{
    return _sfEditingBackground.getValue();
}
#endif

//! Set the value of the SceneBackgroundsEditor::_sfEditingBackground field.
inline
void SceneBackgroundsEditorBase::setEditingBackground(const BackgroundPtr &value)
{
    _sfEditingBackground.setValue(value);
}


OSG_END_NAMESPACE

