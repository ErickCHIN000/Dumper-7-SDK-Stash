#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Text_ButtonHovered.CS_Text_ButtonHovered_C
// (None)

class UClass* UCS_Text_ButtonHovered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Text_ButtonHovered_C");

	return Clss;
}


// CS_Text_ButtonHovered_C CS_Text_ButtonHovered.Default__CS_Text_ButtonHovered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Text_ButtonHovered_C* UCS_Text_ButtonHovered_C::GetDefaultObj()
{
	static class UCS_Text_ButtonHovered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Text_ButtonHovered_C*>(UCS_Text_ButtonHovered_C::StaticClass()->DefaultObject);

	return Default;
}

}


