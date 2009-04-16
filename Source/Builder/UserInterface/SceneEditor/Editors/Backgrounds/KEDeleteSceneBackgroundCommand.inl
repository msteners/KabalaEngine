#include "KEConfig.h"

KE_BEGIN_NAMESPACE

inline
DeleteSceneBackgroundCommand::DeleteSceneBackgroundCommand(SceneBackgroundsComboBoxModelPtr TheModel,UInt32 TheIndex) : Inherited(),
_TheModel(TheModel),
_TheIndex(TheIndex)
{
}

inline
DeleteSceneBackgroundCommand::DeleteSceneBackgroundCommand(const DeleteSceneBackgroundCommand& source) : Inherited(source),
_TheModel(source._TheModel),
_TheIndex(source._TheIndex)
{
}

inline 
const CommandType &DeleteSceneBackgroundCommand::getClassType(void)
{
	return _Type;
}

KE_END_NAMESPACE
