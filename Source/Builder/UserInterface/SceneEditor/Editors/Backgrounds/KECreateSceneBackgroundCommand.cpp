/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#define KE_COMPILEKABALAENGINELIB

#include "KEConfig.h"

#include "KECreateSceneBackgroundCommand.h"

#include <OpenSG/OSGBackground.h>
#include <OpenSG/OSGSimpleAttachments.h>

KE_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::CreateSceneBackgroundCommand
A CreateSceneBackgroundCommand. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

CommandType CreateSceneBackgroundCommand::_Type("CreateSceneBackgroundCommand", "Command");
/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

CreateSceneBackgroundCommandPtr CreateSceneBackgroundCommand::create(SceneBackgroundsComboBoxModelPtr TheModel,FieldContainerType* FCType)
{
	return Ptr(new CreateSceneBackgroundCommand(TheModel, FCType));
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void CreateSceneBackgroundCommand::execute(void)
{
    if(_TheModel != NullFC &&
       _FCType != NULL &&
       _FCType->isDerivedFrom(Background::getClassType()) &&
       !_FCType->isAbstract())
    {
        BackgroundPtr NewBackground = Background::Ptr::dcast(_FCType->createFieldContainer());
        setName(NewBackground,_FCType->getCName());
        _TheModel->addBackground(NewBackground);
    }
}

std::string CreateSceneBackgroundCommand::getCommandDescription(void) const
{
	return std::string("CreateSceneBackground");
}

const CommandType &CreateSceneBackgroundCommand::getType(void) const
{
	return _Type;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

CreateSceneBackgroundCommand::~CreateSceneBackgroundCommand(void)
{
}

/*----------------------------- class specific ----------------------------*/

void CreateSceneBackgroundCommand::operator =(const CreateSceneBackgroundCommand& source)
{
    if(this != &source)
    {
	    Inherited::operator=(source);
	    _TheModel = source._TheModel;
	    _FCType = source._FCType;
    }
}
/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

#ifdef __sgi
#pragma reset woff 1174
#endif

