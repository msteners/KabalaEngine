/* This is a template file for fcdEdit.
 * To create it from sample source,  cut'n'paste the source and apply the following
 * substitutions:
 * s|\|\\|g 
 * s|"|\"|g 
 * s|^|"| 
 * s|$|",|
 */

char *FCBaseTemplate_inl[]={
"/*---------------------------------------------------------------------------*\\",
" *                             Kabala Engine                                 *",
" *                                                                           *",
" *                         www.vrac.iastate.edu                              *",
" *                                                                           *",
" *   Authors: David Kabala (dkabala@vrac.iastate.edu)                        *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                License                                    *",
" *                                                                           *",
" * This library is free software; you can redistribute it and/or modify it   *",
" * under the terms of the GNU Library General Public License as published    *",
" * by the Free Software Foundation, version 3.                               *",
" *                                                                           *",
" * This library is distributed in the hope that it will be useful, but       *",
" * WITHOUT ANY WARRANTY; without even the implied warranty of                *",
" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *",
" * Library General Public License for more details.                          *",
" *                                                                           *",
" * You should have received a copy of the GNU Library General Public         *",
" * License along with this library; if not, write to the Free Software       *",
" * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"/*---------------------------------------------------------------------------*\\",
" *                                Changes                                    *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
" *                                                                           *",
"\\*---------------------------------------------------------------------------*/",
"",
"/*****************************************************************************\\",
" *****************************************************************************",
" **                                                                         **",
" **                  This file is automatically generated.                  **",
" **                                                                         **",
" **          Any changes made to this file WILL be lost when it is          **",
" **           regenerated, which can become necessary at any time.          **",
" **                                                                         **",
" **     Do not change this file, changes should be done in the derived      **",
" **     class @!Classname!@!",
" **                                                                         **",
" *****************************************************************************",
"\\*****************************************************************************/",
"",
"#include \"KEConfig.h\"",
"",
"KE_BEGIN_NAMESPACE",
"",
"",
"//! access the type of the class",
"inline",
"OSG::FieldContainerType &@!Classname!@Base::getClassType(void)",
"{",
"    return _type; ",
"} ",
"",
"//! access the numerical type of the class",
"inline",
"OSG::UInt32 @!Classname!@Base::getClassTypeId(void) ",
"{",
"    return _type.getId(); ",
"} ",
"",
"@@if !Abstract",
"//! create a new instance of the class",
"inline",
"@!Classname!@Ptr @!Classname!@Base::create(void) ",
"{",
"    @!Classname!@Ptr fc; ",
"",
"    if(getClassType().getPrototype() != OSG::NullFC) ",
"    {",
//"        fc = OSG::dcast<@!Classname!@Ptr>(",
//"            getClassType().getPrototype()-> shallowCopy()); ",
"        fc = @!Classname!@Ptr::dcast(",
"            getClassType().getPrototype()-> shallowCopy()); ",
"    }",
"    ",
"    return fc; ",
"}",
"",
"//! create an empty new instance of the class, do not copy the prototype",
"inline",
"@!Classname!@Ptr @!Classname!@Base::createEmpty(void) ",
"{ ",
"    @!Classname!@Ptr returnValue; ",
"    ",
"    newPtr(returnValue); ",
"",
"    return returnValue; ",
"}",
"",
"@@endif",
"",
"@@if !Decorator",
"@@if !isDecoratable",
"/*------------------------------ get -----------------------------------*/",
"", 
"@@BeginFieldLoop@@",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get"
"@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    return &_@!fieldname!@;",
"}",
"",
"@@EndFieldLoop@@",
"",
"@@BeginSFFieldLoop@@",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Get the value of the @!Classname!@::_@!fieldname!@ field.",
"inline",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@.getValue();",
"}",
"",
"//! Set the value of the @!Classname!@::_@!fieldname!@ field.",
"inline",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    _@!fieldname!@.setValue(value);",
"}",
"",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"//! Get the value of the \\a index element the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(const OSG::UInt32 index)",
"{",
"    return _@!fieldname!@[index];",
"}",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return _@!fieldname!@;",
"}",
"",
"//! Get the @!Classname!@::_@!fieldname!@ field.",
"inline",
"const @!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return _@!fieldname!@;",
"}",
"",
"@@EndMFFieldLoop@@",
"@@endif",
"@@else",
"/*------------------------- decorator get ------------------------------*/",
"", 
"@@if Decorator",
"inline",
"SF@!Parent!@Ptr *@!Classname!@Base::getSFDecoratee(void)",
"{",
"    return &_sfDecoratee;",
"}",
"",
"inline",
"@!Parent!@Ptr &@!Classname!@Base::getDecoratee(void)",
"{",
"    return _sfDecoratee.getValue();",
"}",
"",
"inline",
"const @!Parent!@Ptr &@!Classname!@Base::getDecoratee(void) const",
"{",
"    return _sfDecoratee.getValue();",
"}",
"",
"inline",
"void @!Classname!@Base::setDecoratee(const @!Parent!@Ptr &value)",
"{",
"    _sfDecoratee.setValue(value);",
"}",
"@@endif",
"",
"@@BeginFieldLoop@@",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ *@!Classname!@Base::get"
"@!CARDINALITY!@@!Fieldname!@(void)",
"{",
"    return getDecoratee()->get@!CARDINALITY!@@!Fieldname!@();",
"}",
"",
"@@EndFieldLoop@@",
"",
"@@BeginSFFieldLoop@@",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return getDecoratee()->get@!Fieldname!@();",
"}",
"",
"inline",
"const @!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return getDecoratee()->get@!Fieldname!@();",
"}",
"",
"inline",
"void @!Classname!@Base::set@!Fieldname!@(const @!Fieldtype!@ &value)",
"{",
"    beginEditCP(getDecoratee(), @!Fieldname!@FieldMask);",
"    getDecoratee()->set@!Fieldname!@(value);",
"    endEditCP  (getDecoratee(), @!Fieldname!@FieldMask);",
"}",
"",
"@@EndSFFieldLoop@@",
"",
"@@BeginMFFieldLoop@@",
"inline",
"@!Fieldtype!@ &@!Classname!@Base::get@!Fieldname!@(OSG::UInt32 index)",
"{",
"    return getDecoratee()->get@!Fieldname!@(index);",
"}",
"",
"inline",
"@!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void)",
"{",
"    return getDecoratee()->get@!Fieldname!@();",
"}",
"",
"inline",
"const @!CARDINALITY!@@!CapsFieldtypeClean!@ &@!Classname!@Base::get@!Fieldname!@(void) const",
"{",
"    return getDecoratee()->get@!Fieldname!@();",
"}",
"",
"@@EndMFFieldLoop@@",
"@@endif",
"KE_END_NAMESPACE",
"",
NULL};
