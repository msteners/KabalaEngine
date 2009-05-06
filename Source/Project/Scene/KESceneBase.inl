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
 **     class Scene!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include "KEConfig.h"

KE_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SceneBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 SceneBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ScenePtr SceneBase::create(void) 
{
    ScenePtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ScenePtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ScenePtr SceneBase::createEmpty(void) 
{ 
    ScenePtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Scene::_sfInternalParentProject field.
inline
SFProjectPtr *SceneBase::getSFInternalParentProject(void)
{
    return &_sfInternalParentProject;
}

//! Get the Scene::_sfName field.
inline
SFString *SceneBase::getSFName(void)
{
    return &_sfName;
}

//! Get the Scene::_mfBackgrounds field.
inline
MFBackgroundPtr *SceneBase::getMFBackgrounds(void)
{
    return &_mfBackgrounds;
}

//! Get the Scene::_mfUIDrawingSurfaces field.
inline
MFUIDrawingSurfacePtr *SceneBase::getMFUIDrawingSurfaces(void)
{
    return &_mfUIDrawingSurfaces;
}

//! Get the Scene::_sfInitialBackground field.
inline
SFBackgroundPtr *SceneBase::getSFInitialBackground(void)
{
    return &_sfInitialBackground;
}

//! Get the Scene::_mfForegrounds field.
inline
MFForegroundPtr *SceneBase::getMFForegrounds(void)
{
    return &_mfForegrounds;
}

//! Get the Scene::_mfInitialForegrounds field.
inline
MFForegroundPtr *SceneBase::getMFInitialForegrounds(void)
{
    return &_mfInitialForegrounds;
}

//! Get the Scene::_mfModelNodes field.
inline
MFNodePtr *SceneBase::getMFModelNodes(void)
{
    return &_mfModelNodes;
}

//! Get the Scene::_mfInitialModelNodes field.
inline
MFNodePtr *SceneBase::getMFInitialModelNodes(void)
{
    return &_mfInitialModelNodes;
}

//! Get the Scene::_sfRoot field.
inline
SFNodePtr *SceneBase::getSFRoot(void)
{
    return &_sfRoot;
}

//! Get the Scene::_sfRootCore field.
inline
SFTransformPtr *SceneBase::getSFRootCore(void)
{
    return &_sfRootCore;
}

//! Get the Scene::_sfDefaultCameraBeacon field.
inline
SFNodePtr *SceneBase::getSFDefaultCameraBeacon(void)
{
    return &_sfDefaultCameraBeacon;
}

//! Get the Scene::_sfDefaultCameraBeaconCore field.
inline
SFTransformPtr *SceneBase::getSFDefaultCameraBeaconCore(void)
{
    return &_sfDefaultCameraBeaconCore;
}

//! Get the Scene::_mfCameras field.
inline
MFCameraPtr *SceneBase::getMFCameras(void)
{
    return &_mfCameras;
}

//! Get the Scene::_sfInitialCamera field.
inline
SFCameraPtr *SceneBase::getSFInitialCamera(void)
{
    return &_sfInitialCamera;
}


//! Get the value of the Scene::_sfInternalParentProject field.
inline
ProjectPtr &SceneBase::getInternalParentProject(void)
{
    return _sfInternalParentProject.getValue();
}

//! Get the value of the Scene::_sfInternalParentProject field.
inline
const ProjectPtr &SceneBase::getInternalParentProject(void) const
{
    return _sfInternalParentProject.getValue();
}

//! Set the value of the Scene::_sfInternalParentProject field.
inline
void SceneBase::setInternalParentProject(const ProjectPtr &value)
{
    _sfInternalParentProject.setValue(value);
}

//! Get the value of the Scene::_sfName field.
inline
std::string &SceneBase::getName(void)
{
    return _sfName.getValue();
}

//! Get the value of the Scene::_sfName field.
inline
const std::string &SceneBase::getName(void) const
{
    return _sfName.getValue();
}

//! Set the value of the Scene::_sfName field.
inline
void SceneBase::setName(const std::string &value)
{
    _sfName.setValue(value);
}

//! Get the value of the Scene::_sfInitialBackground field.
inline
BackgroundPtr &SceneBase::getInitialBackground(void)
{
    return _sfInitialBackground.getValue();
}

//! Get the value of the Scene::_sfInitialBackground field.
inline
const BackgroundPtr &SceneBase::getInitialBackground(void) const
{
    return _sfInitialBackground.getValue();
}

//! Set the value of the Scene::_sfInitialBackground field.
inline
void SceneBase::setInitialBackground(const BackgroundPtr &value)
{
    _sfInitialBackground.setValue(value);
}

//! Get the value of the Scene::_sfRoot field.
inline
NodePtr &SceneBase::getRoot(void)
{
    return _sfRoot.getValue();
}

//! Get the value of the Scene::_sfRoot field.
inline
const NodePtr &SceneBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the Scene::_sfRoot field.
inline
void SceneBase::setRoot(const NodePtr &value)
{
    _sfRoot.setValue(value);
}

//! Get the value of the Scene::_sfRootCore field.
inline
TransformPtr &SceneBase::getRootCore(void)
{
    return _sfRootCore.getValue();
}

//! Get the value of the Scene::_sfRootCore field.
inline
const TransformPtr &SceneBase::getRootCore(void) const
{
    return _sfRootCore.getValue();
}

//! Set the value of the Scene::_sfRootCore field.
inline
void SceneBase::setRootCore(const TransformPtr &value)
{
    _sfRootCore.setValue(value);
}

//! Get the value of the Scene::_sfDefaultCameraBeacon field.
inline
NodePtr &SceneBase::getDefaultCameraBeacon(void)
{
    return _sfDefaultCameraBeacon.getValue();
}

//! Get the value of the Scene::_sfDefaultCameraBeacon field.
inline
const NodePtr &SceneBase::getDefaultCameraBeacon(void) const
{
    return _sfDefaultCameraBeacon.getValue();
}

//! Set the value of the Scene::_sfDefaultCameraBeacon field.
inline
void SceneBase::setDefaultCameraBeacon(const NodePtr &value)
{
    _sfDefaultCameraBeacon.setValue(value);
}

//! Get the value of the Scene::_sfDefaultCameraBeaconCore field.
inline
TransformPtr &SceneBase::getDefaultCameraBeaconCore(void)
{
    return _sfDefaultCameraBeaconCore.getValue();
}

//! Get the value of the Scene::_sfDefaultCameraBeaconCore field.
inline
const TransformPtr &SceneBase::getDefaultCameraBeaconCore(void) const
{
    return _sfDefaultCameraBeaconCore.getValue();
}

//! Set the value of the Scene::_sfDefaultCameraBeaconCore field.
inline
void SceneBase::setDefaultCameraBeaconCore(const TransformPtr &value)
{
    _sfDefaultCameraBeaconCore.setValue(value);
}

//! Get the value of the Scene::_sfInitialCamera field.
inline
CameraPtr &SceneBase::getInitialCamera(void)
{
    return _sfInitialCamera.getValue();
}

//! Get the value of the Scene::_sfInitialCamera field.
inline
const CameraPtr &SceneBase::getInitialCamera(void) const
{
    return _sfInitialCamera.getValue();
}

//! Set the value of the Scene::_sfInitialCamera field.
inline
void SceneBase::setInitialCamera(const CameraPtr &value)
{
    _sfInitialCamera.setValue(value);
}


//! Get the value of the \a index element the Scene::_mfBackgrounds field.
inline
BackgroundPtr &SceneBase::getBackgrounds(const OSG::UInt32 index)
{
    return _mfBackgrounds[index];
}

//! Get the Scene::_mfBackgrounds field.
inline
MFBackgroundPtr &SceneBase::getBackgrounds(void)
{
    return _mfBackgrounds;
}

//! Get the Scene::_mfBackgrounds field.
inline
const MFBackgroundPtr &SceneBase::getBackgrounds(void) const
{
    return _mfBackgrounds;
}

//! Get the value of the \a index element the Scene::_mfUIDrawingSurfaces field.
inline
UIDrawingSurfacePtr &SceneBase::getUIDrawingSurfaces(const OSG::UInt32 index)
{
    return _mfUIDrawingSurfaces[index];
}

//! Get the Scene::_mfUIDrawingSurfaces field.
inline
MFUIDrawingSurfacePtr &SceneBase::getUIDrawingSurfaces(void)
{
    return _mfUIDrawingSurfaces;
}

//! Get the Scene::_mfUIDrawingSurfaces field.
inline
const MFUIDrawingSurfacePtr &SceneBase::getUIDrawingSurfaces(void) const
{
    return _mfUIDrawingSurfaces;
}

//! Get the value of the \a index element the Scene::_mfForegrounds field.
inline
ForegroundPtr &SceneBase::getForegrounds(const OSG::UInt32 index)
{
    return _mfForegrounds[index];
}

//! Get the Scene::_mfForegrounds field.
inline
MFForegroundPtr &SceneBase::getForegrounds(void)
{
    return _mfForegrounds;
}

//! Get the Scene::_mfForegrounds field.
inline
const MFForegroundPtr &SceneBase::getForegrounds(void) const
{
    return _mfForegrounds;
}

//! Get the value of the \a index element the Scene::_mfInitialForegrounds field.
inline
ForegroundPtr &SceneBase::getInitialForegrounds(const OSG::UInt32 index)
{
    return _mfInitialForegrounds[index];
}

//! Get the Scene::_mfInitialForegrounds field.
inline
MFForegroundPtr &SceneBase::getInitialForegrounds(void)
{
    return _mfInitialForegrounds;
}

//! Get the Scene::_mfInitialForegrounds field.
inline
const MFForegroundPtr &SceneBase::getInitialForegrounds(void) const
{
    return _mfInitialForegrounds;
}

//! Get the value of the \a index element the Scene::_mfModelNodes field.
inline
NodePtr &SceneBase::getModelNodes(const OSG::UInt32 index)
{
    return _mfModelNodes[index];
}

//! Get the Scene::_mfModelNodes field.
inline
MFNodePtr &SceneBase::getModelNodes(void)
{
    return _mfModelNodes;
}

//! Get the Scene::_mfModelNodes field.
inline
const MFNodePtr &SceneBase::getModelNodes(void) const
{
    return _mfModelNodes;
}

//! Get the value of the \a index element the Scene::_mfInitialModelNodes field.
inline
NodePtr &SceneBase::getInitialModelNodes(const OSG::UInt32 index)
{
    return _mfInitialModelNodes[index];
}

//! Get the Scene::_mfInitialModelNodes field.
inline
MFNodePtr &SceneBase::getInitialModelNodes(void)
{
    return _mfInitialModelNodes;
}

//! Get the Scene::_mfInitialModelNodes field.
inline
const MFNodePtr &SceneBase::getInitialModelNodes(void) const
{
    return _mfInitialModelNodes;
}

//! Get the value of the \a index element the Scene::_mfCameras field.
inline
CameraPtr &SceneBase::getCameras(const OSG::UInt32 index)
{
    return _mfCameras[index];
}

//! Get the Scene::_mfCameras field.
inline
MFCameraPtr &SceneBase::getCameras(void)
{
    return _mfCameras;
}

//! Get the Scene::_mfCameras field.
inline
const MFCameraPtr &SceneBase::getCameras(void) const
{
    return _mfCameras;
}

KE_END_NAMESPACE

