#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Text_Dark_Italic.CS_Text_Dark_Italic_C
// (None)

class UClass* UCS_Text_Dark_Italic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Text_Dark_Italic_C");

	return Clss;
}


// CS_Text_Dark_Italic_C CS_Text_Dark_Italic.Default__CS_Text_Dark_Italic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Text_Dark_Italic_C* UCS_Text_Dark_Italic_C::GetDefaultObj()
{
	static class UCS_Text_Dark_Italic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Text_Dark_Italic_C*>(UCS_Text_Dark_Italic_C::StaticClass()->DefaultObject);

	return Default;
}

}


