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

#ifndef _KEEFFECT_H_
#define _KEEFFECT_H_
#ifdef __sgi
#pragma once
#endif

#include "KEEffectBase.h"
#include "KEEffectEvent.h"
#include "KEEffectListener.h"
#include "Project/SceneObject/KESceneObject.h"

OSG_BEGIN_NAMESPACE

/*! \brief Effect class. See \ref
           PageKabalaEngineEffect for a description.
*/

class KE_KABALAENGINE_DLLMAPPING Effect : public EffectBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef EffectBase Inherited;
    typedef Effect     Self;

    /*Basic interface for an effect. Basically like movie controls. These
    * keep track of the state of an effect so you can't do wierd things
    * like pause an effect that hasn't started. Each one calls the inherited
    * version, so individual effects can control how they implentt these states.
    */

    //Begin handler for an effect
    void begin(void);
    //Test for playing state
    bool isPlaying(void);
    //Test for paused state
    bool isPaused(void);
    //Pause handler for an effect
    void pause(void);
    //Unpause handler for an effect
    void unpause(void);
    //Stop handler for an effect
    void stop(void);

    //Add/Remove listeners
    EventConnection addEffectListener(EffectListenerPtr Listener);
    bool isEffectListenerAttached(EffectListenerPtr Listener) const;
    void removeEffectListener(EffectListenerPtr Listener);

    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */
    
    const SceneObject* getParentSceneObject(void) const;
    void setParentSceneObject(SceneObject* newParent);


    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    
    bool effectIsInitialized;
    bool isPlayingFlag;
    bool isPausedFlag;

    //Since individual effects have different requirements for starting,
    //they must implement the inherited version of the different handlers.
    //
    virtual void inheritedBegin    (void) = 0;
    virtual bool inheritedIsPlaying(void) = 0;
    virtual bool inheritedIsPaused (void) = 0;
    virtual void inheritedPause    (void) = 0;
    virtual void inheritedUnpause  (void) = 0;
    virtual void inheritedStop     (void) = 0;
    virtual void initEffect        (void) = 0;

    //The following four functions are called from within
    //Play,pause,unpause,and end, as Expected. They are thus
    //'invisible' to the effect interface.
    void producerEffectBegan   (const EffectEventUnrecPtr e);
    void producerEffectPaused  (const EffectEventUnrecPtr e);
    void producerEffectUnpaused(const EffectEventUnrecPtr e);
    void producerEffectStopped (const EffectEventUnrecPtr e);
    //This function is not. Individual effects have different
    //conditions in which they "naturally terminate".
    //These conditions are unknown by effect, so it's
    //on the derived classes to define and call finished.
    //
    //derived::finished() should call Inherited::finished();
    //
    //Effect::finished()does some cleanup
    //and calls producerEffectFinished();
    virtual void finished      (void);
    void producerEffectFinished(const EffectEventUnrecPtr e);


    typedef std::set<EffectListenerPtr> EffectListenerSet;
    typedef EffectListenerSet::iterator EffectListenerSetItor;
    typedef EffectListenerSet::const_iterator EffectListenerSetConstItor;
    EffectListenerSet _EffectListeners;


    // Variables should all be in EffectBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    Effect(void);
    Effect(const Effect &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~Effect(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class EffectBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const Effect &source);
};

typedef Effect *EffectP;

OSG_END_NAMESPACE

#include <OpenSG/OSGFieldContainer.h>   // ParentSceneObject Class
#include "KEEffectBase.inl"
#include "KEEffect.inl"

#endif /* _KEEFFECT_H_ */
