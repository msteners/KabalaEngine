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
 **     class Project
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _KEPROJECTBASE_H_
#define _KEPROJECTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include <OpenSG/OSGAttachmentContainer.h> // Parent

#include <OpenSG/OSGStringFields.h> // Name type
#include <OpenSG/OSGStringFields.h> // Version type
#include <OpenSG/OSGStringFields.h> // MainWindowTitle type
#include <OpenSG/Toolbox/OSGPathType.h> // FilePath type
#include <Project/Scene/KESceneFields.h> // Scenes type
#include <Project/Scene/KESceneFields.h> // InitialScene type
#include <Project/Scene/KESceneFields.h> // InternalActiveScene type
#include <OpenSG/OSGBackgroundFields.h> // Backgrounds type
#include <OpenSG/OSGBackgroundFields.h> // InternalActiveBackground type
#include <OpenSG/OSGForegroundFields.h> // Foregrounds type
#include <OpenSG/OSGForegroundFields.h> // InternalActiveForegrounds type
#include <OpenSG/OSGForegroundFields.h> // GlobalActiveForegrounds type
#include <OpenSG/OSGNodeFields.h> // ModelNodes type
#include <OpenSG/OSGNodeFields.h> // InternalActiveModelNodes type
#include <OpenSG/OSGNodeFields.h> // GlobalActiveModelNodes type
#include <OpenSG/OSGCameraFields.h> // Cameras type
#include <OpenSG/OSGCameraFields.h> // InternalActiveCamera type
#include <OpenSG/OSGViewportFields.h> // InternalActiveViewport type
#include <OpenSG/Animation/OSGAnimation.h> // ActiveAnimations type
#include <OpenSG/ParticleSystem/OSGParticleSystem.h> // ActiveParticleSystems type

#include "KEProjectFields.h"
#include <OpenSG/Toolbox/OSGEventProducer.h>
#include <OpenSG/Toolbox/OSGEventProducerType.h>
#include <OpenSG/Toolbox/OSGMethodDescription.h>
#include <OpenSG/Toolbox/OSGEventProducerPtrType.h>

OSG_BEGIN_NAMESPACE

class Project;
class BinaryDataHandler;

//! \brief Project Base Class.

class KE_KABALAENGINELIB_DLLMAPPING ProjectBase : public AttachmentContainer
{
  private:

    typedef AttachmentContainer    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ProjectPtr  Ptr;

    enum
    {
        NameFieldId                      = Inherited::NextFieldId,
        VersionFieldId                   = NameFieldId                      + 1,
        MainWindowTitleFieldId           = VersionFieldId                   + 1,
        FilePathFieldId                  = MainWindowTitleFieldId           + 1,
        ScenesFieldId                    = FilePathFieldId                  + 1,
        InitialSceneFieldId              = ScenesFieldId                    + 1,
        InternalActiveSceneFieldId       = InitialSceneFieldId              + 1,
        BackgroundsFieldId               = InternalActiveSceneFieldId       + 1,
        InternalActiveBackgroundFieldId  = BackgroundsFieldId               + 1,
        ForegroundsFieldId               = InternalActiveBackgroundFieldId  + 1,
        InternalActiveForegroundsFieldId = ForegroundsFieldId               + 1,
        GlobalActiveForegroundsFieldId   = InternalActiveForegroundsFieldId + 1,
        ModelNodesFieldId                = GlobalActiveForegroundsFieldId   + 1,
        InternalActiveModelNodesFieldId  = ModelNodesFieldId                + 1,
        GlobalActiveModelNodesFieldId    = InternalActiveModelNodesFieldId  + 1,
        CamerasFieldId                   = GlobalActiveModelNodesFieldId    + 1,
        InternalActiveCameraFieldId      = CamerasFieldId                   + 1,
        InternalActiveViewportFieldId    = InternalActiveCameraFieldId      + 1,
        ActiveAnimationsFieldId          = InternalActiveViewportFieldId    + 1,
        ActiveParticleSystemsFieldId     = ActiveAnimationsFieldId          + 1,
        EventProducerFieldId             = ActiveParticleSystemsFieldId     + 1,
        NextFieldId                      = EventProducerFieldId             + 1
    };

    static const OSG::BitVector NameFieldMask;
    static const OSG::BitVector VersionFieldMask;
    static const OSG::BitVector MainWindowTitleFieldMask;
    static const OSG::BitVector FilePathFieldMask;
    static const OSG::BitVector ScenesFieldMask;
    static const OSG::BitVector InitialSceneFieldMask;
    static const OSG::BitVector InternalActiveSceneFieldMask;
    static const OSG::BitVector BackgroundsFieldMask;
    static const OSG::BitVector InternalActiveBackgroundFieldMask;
    static const OSG::BitVector ForegroundsFieldMask;
    static const OSG::BitVector InternalActiveForegroundsFieldMask;
    static const OSG::BitVector GlobalActiveForegroundsFieldMask;
    static const OSG::BitVector ModelNodesFieldMask;
    static const OSG::BitVector InternalActiveModelNodesFieldMask;
    static const OSG::BitVector GlobalActiveModelNodesFieldMask;
    static const OSG::BitVector CamerasFieldMask;
    static const OSG::BitVector InternalActiveCameraFieldMask;
    static const OSG::BitVector InternalActiveViewportFieldMask;
    static const OSG::BitVector ActiveAnimationsFieldMask;
    static const OSG::BitVector ActiveParticleSystemsFieldMask;
    static const OSG::BitVector EventProducerFieldMask;


    enum
    {
        ProjectStartedMethodId    = 1,
        ProjectStoppingMethodId   = ProjectStartedMethodId    + 1,
        ProjectStoppedMethodId    = ProjectStoppingMethodId   + 1,
        ProjectResetMethodId      = ProjectStoppedMethodId    + 1,
        SceneChangedMethodId      = ProjectResetMethodId      + 1,
        WindowOpenedMethodId      = SceneChangedMethodId      + 1,
        WindowClosingMethodId     = WindowOpenedMethodId      + 1,
        WindowClosedMethodId      = WindowClosingMethodId     + 1,
        WindowIconifiedMethodId   = WindowClosedMethodId      + 1,
        WindowDeiconifiedMethodId = WindowIconifiedMethodId   + 1,
        WindowActivatedMethodId   = WindowDeiconifiedMethodId + 1,
        WindowDeactivatedMethodId = WindowActivatedMethodId   + 1,
        WindowEnteredMethodId     = WindowDeactivatedMethodId + 1,
        WindowExitedMethodId      = WindowEnteredMethodId     + 1,
        MouseClickedMethodId      = WindowExitedMethodId      + 1,
        MouseEnteredMethodId      = MouseClickedMethodId      + 1,
        MouseExitedMethodId       = MouseEnteredMethodId      + 1,
        MousePressedMethodId      = MouseExitedMethodId       + 1,
        MouseReleasedMethodId     = MousePressedMethodId      + 1,
        MouseMovedMethodId        = MouseReleasedMethodId     + 1,
        MouseDraggedMethodId      = MouseMovedMethodId        + 1,
        MouseWheelMovedMethodId   = MouseDraggedMethodId      + 1,
        KeyPressedMethodId        = MouseWheelMovedMethodId   + 1,
        KeyReleasedMethodId       = KeyPressedMethodId        + 1,
        KeyTypedMethodId          = KeyReleasedMethodId       + 1,
        UpdateMethodId            = KeyTypedMethodId          + 1,
        NextMethodId              = UpdateMethodId            + 1
    };



    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 
    static const  EventProducerType  &getProducerClassType  (void); 
    static        UInt32              getProducerClassTypeId(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


           SFString            *editSFName           (void);
     const SFString            *getSFName           (void) const;

           SFString            *editSFVersion        (void);
     const SFString            *getSFVersion        (void) const;

           SFString            *editSFMainWindowTitle(void);
     const SFString            *getSFMainWindowTitle(void) const;

           SFPath              *editSFFilePath       (void);
     const SFPath              *getSFFilePath       (void) const;

           MFScenePtr          *editMFScenes         (void);
     const MFScenePtr          *getMFScenes         (void) const;

           SFScenePtr          *editSFInitialScene   (void);
     const SFScenePtr          *getSFInitialScene   (void) const;

           MFBackgroundPtr     *editMFBackgrounds    (void);
     const MFBackgroundPtr     *getMFBackgrounds    (void) const;

           MFForegroundPtr     *editMFForegrounds    (void);
     const MFForegroundPtr     *getMFForegrounds    (void) const;

           MFForegroundPtr     *editMFGlobalActiveForegrounds(void);
     const MFForegroundPtr     *getMFGlobalActiveForegrounds(void) const;

           MFNodePtr           *editMFModelNodes     (void);
     const MFNodePtr           *getMFModelNodes     (void) const;

           MFNodePtr           *editMFGlobalActiveModelNodes(void);
     const MFNodePtr           *getMFGlobalActiveModelNodes(void) const;

           MFCameraPtr         *editMFCameras        (void);
     const MFCameraPtr         *getMFCameras        (void) const;


           std::string         &editName           (void);
     const std::string         &getName           (void) const;

           std::string         &editVersion        (void);
     const std::string         &getVersion        (void) const;

           std::string         &editMainWindowTitle(void);
     const std::string         &getMainWindowTitle(void) const;

           Path                &editFilePath       (void);
     const Path                &getFilePath       (void) const;

           ScenePtr            &editInitialScene   (void);
     const ScenePtr            &getInitialScene   (void) const;





           ScenePtr            &editScenes         (const UInt32 index);
     const ScenePtr            &getScenes         (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFScenePtr          &getScenes         (void);
     const MFScenePtr          &getScenes         (void) const;
#endif

           BackgroundPtr       &editBackgrounds    (const UInt32 index);
     const BackgroundPtr       &getBackgrounds    (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFBackgroundPtr     &getBackgrounds    (void);
     const MFBackgroundPtr     &getBackgrounds    (void) const;
#endif

           ForegroundPtr       &editForegrounds    (const UInt32 index);
     const ForegroundPtr       &getForegrounds    (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFForegroundPtr     &getForegrounds    (void);
     const MFForegroundPtr     &getForegrounds    (void) const;
#endif


           ForegroundPtr       &editGlobalActiveForegrounds(const UInt32 index);
     const ForegroundPtr       &getGlobalActiveForegrounds(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFForegroundPtr     &getGlobalActiveForegrounds(void);
     const MFForegroundPtr     &getGlobalActiveForegrounds(void) const;
#endif

           NodePtr             &editModelNodes     (const UInt32 index);
     const NodePtr             &getModelNodes     (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFNodePtr           &getModelNodes     (void);
     const MFNodePtr           &getModelNodes     (void) const;
#endif


           NodePtr             &editGlobalActiveModelNodes(const UInt32 index);
     const NodePtr             &getGlobalActiveModelNodes(const UInt32 index) const;
#ifndef OSG_2_PREP
           MFNodePtr           &getGlobalActiveModelNodes(void);
     const MFNodePtr           &getGlobalActiveModelNodes(void) const;
#endif

           CameraPtr           &editCameras        (const UInt32 index);
     const CameraPtr           &getCameras        (const UInt32 index) const;
#ifndef OSG_2_PREP
           MFCameraPtr         &getCameras        (void);
     const MFCameraPtr         &getCameras        (void) const;
#endif



    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setName           ( const std::string &value );
     void setVersion        ( const std::string &value );
     void setMainWindowTitle( const std::string &value );
     void setFilePath       ( const Path &value );
     void setInitialScene   ( const ScenePtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Method Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 
    EventConnection attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    bool isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const;
    UInt32 getNumActivitiesAttached(UInt32 ProducedEventId) const;
    ActivityPtr getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const;
    void detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId);
    UInt32 getNumProducedEvents(void) const;
    const MethodDescription *getProducedEventDescription(const Char8 *ProducedEventName) const;
    const MethodDescription *getProducedEventDescription(UInt32 ProducedEventId) const;
    UInt32 getProducedEventId(const Char8 *ProducedEventName) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ProjectPtr      create          (void); 
    static  ProjectPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    EventProducer _Producer;

    SFEventProducerPtr *editSFEventProducer(void);
    EventProducerPtr &editEventProducer(void);

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFString            _sfName;
    SFString            _sfVersion;
    SFString            _sfMainWindowTitle;
    SFPath              _sfFilePath;
    MFScenePtr          _mfScenes;
    SFScenePtr          _sfInitialScene;
    SFScenePtr          _sfInternalActiveScene;
    MFBackgroundPtr     _mfBackgrounds;
    SFBackgroundPtr     _sfInternalActiveBackground;
    MFForegroundPtr     _mfForegrounds;
    MFForegroundPtr     _mfInternalActiveForegrounds;
    MFForegroundPtr     _mfGlobalActiveForegrounds;
    MFNodePtr           _mfModelNodes;
    MFNodePtr           _mfInternalActiveModelNodes;
    MFNodePtr           _mfGlobalActiveModelNodes;
    MFCameraPtr         _mfCameras;
    SFCameraPtr         _sfInternalActiveCamera;
    SFViewportPtr       _sfInternalActiveViewport;
    MFAnimationPtr      _mfActiveAnimations;
    MFParticleSystemPtr   _mfActiveParticleSystems;

    /*! \}                                                                 */
    SFEventProducerPtr _sfEventProducer;
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ProjectBase(void);
    ProjectBase(const ProjectBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ProjectBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFScenePtr          *editSFInternalActiveScene(void);
     const SFScenePtr          *getSFInternalActiveScene(void) const;
           SFBackgroundPtr     *editSFInternalActiveBackground(void);
     const SFBackgroundPtr     *getSFInternalActiveBackground(void) const;
           MFForegroundPtr     *editMFInternalActiveForegrounds(void);
     const MFForegroundPtr     *getMFInternalActiveForegrounds(void) const;
           MFNodePtr           *editMFInternalActiveModelNodes(void);
     const MFNodePtr           *getMFInternalActiveModelNodes(void) const;
           SFCameraPtr         *editSFInternalActiveCamera(void);
     const SFCameraPtr         *getSFInternalActiveCamera(void) const;
           SFViewportPtr       *editSFInternalActiveViewport(void);
     const SFViewportPtr       *getSFInternalActiveViewport(void) const;
           MFAnimationPtr      *editMFActiveAnimations(void);
     const MFAnimationPtr      *getMFActiveAnimations(void) const;
           MFParticleSystemPtr *editMFActiveParticleSystems(void);
     const MFParticleSystemPtr *getMFActiveParticleSystems(void) const;

           ScenePtr            &editInternalActiveScene(void);
     const ScenePtr            &getInternalActiveScene(void) const;
           BackgroundPtr       &editInternalActiveBackground(void);
     const BackgroundPtr       &getInternalActiveBackground(void) const;
           CameraPtr           &editInternalActiveCamera(void);
     const CameraPtr           &getInternalActiveCamera(void) const;
           ViewportPtr         &editInternalActiveViewport(void);
     const ViewportPtr         &getInternalActiveViewport(void) const;
           ForegroundPtr       &editInternalActiveForegrounds(UInt32 index);
#ifndef OSG_2_PREP
           MFForegroundPtr     &getInternalActiveForegrounds(void);
     const MFForegroundPtr     &getInternalActiveForegrounds(void) const;
#endif
     const ForegroundPtr       &getInternalActiveForegrounds(UInt32 index) const;
           NodePtr             &editInternalActiveModelNodes(UInt32 index);
#ifndef OSG_2_PREP
           MFNodePtr           &getInternalActiveModelNodes(void);
     const MFNodePtr           &getInternalActiveModelNodes(void) const;
#endif
     const NodePtr             &getInternalActiveModelNodes(UInt32 index) const;
           AnimationPtr        &editActiveAnimations(UInt32 index);
#ifndef OSG_2_PREP
           MFAnimationPtr      &getActiveAnimations(void);
     const MFAnimationPtr      &getActiveAnimations(void) const;
#endif
     const AnimationPtr        &getActiveAnimations(UInt32 index) const;
           ParticleSystemPtr   &editActiveParticleSystems(UInt32 index);
#ifndef OSG_2_PREP
           MFParticleSystemPtr &getActiveParticleSystems(void);
     const MFParticleSystemPtr &getActiveParticleSystems(void) const;
#endif
     const ParticleSystemPtr   &getActiveParticleSystems(UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setInternalActiveScene(const ScenePtr &value);
     void setInternalActiveBackground(const BackgroundPtr &value);
     void setInternalActiveCamera(const CameraPtr &value);
     void setInternalActiveViewport(const ViewportPtr &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ProjectBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ProjectBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static MethodDescription   *_methodDesc[];
    static EventProducerType _producerType;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ProjectBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ProjectBase *ProjectBaseP;

typedef osgIF<ProjectBase::isNodeCore,
              CoredNodePtr<Project>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ProjectNodePtr;

typedef RefPtr<ProjectPtr> ProjectRefPtr;

OSG_END_NAMESPACE

#endif /* _KEPROJECTBASE_H_ */
