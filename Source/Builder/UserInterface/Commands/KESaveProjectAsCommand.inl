#include "KEConfig.h"

KE_BEGIN_NAMESPACE

inline
SaveProjectAsCommand::SaveProjectAsCommand(ApplicationBuilderPtr TheApplicationBuilder) : Inherited(),
_TheApplicationBuilder(TheApplicationBuilder)
{
}

inline
SaveProjectAsCommand::SaveProjectAsCommand(const SaveProjectAsCommand& source) : Inherited(source),
_TheApplicationBuilder(source._TheApplicationBuilder)
{
}

inline 
void SaveProjectAsCommand::operator =(const SaveProjectAsCommand& source)
{
	Inherited::operator=(source);
	_TheApplicationBuilder = source._TheApplicationBuilder;
}

inline 
const CommandType &SaveProjectAsCommand::getClassType(void)
{
	return _Type;
}

KE_END_NAMESPACE
