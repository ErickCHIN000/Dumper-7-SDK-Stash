#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Text_ButtonHovered_Light.CS_Text_ButtonHovered_Light_C
// (None)

class UClass* UCS_Text_ButtonHovered_Light_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Text_ButtonHovered_Light_C");

	return Clss;
}


// CS_Text_ButtonHovered_Light_C CS_Text_ButtonHovered_Light.Default__CS_Text_ButtonHovered_Light_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Text_ButtonHovered_Light_C* UCS_Text_ButtonHovered_Light_C::GetDefaultObj()
{
	static class UCS_Text_ButtonHovered_Light_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Text_ButtonHovered_Light_C*>(UCS_Text_ButtonHovered_Light_C::StaticClass()->DefaultObject);

	return Default;
}

}


