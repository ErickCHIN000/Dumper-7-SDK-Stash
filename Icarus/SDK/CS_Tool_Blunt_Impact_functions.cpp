#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Tool_Blunt_Impact.CS_Tool_Blunt_Impact_C
// (None)

class UClass* UCS_Tool_Blunt_Impact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Tool_Blunt_Impact_C");

	return Clss;
}


// CS_Tool_Blunt_Impact_C CS_Tool_Blunt_Impact.Default__CS_Tool_Blunt_Impact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Tool_Blunt_Impact_C* UCS_Tool_Blunt_Impact_C::GetDefaultObj()
{
	static class UCS_Tool_Blunt_Impact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Tool_Blunt_Impact_C*>(UCS_Tool_Blunt_Impact_C::StaticClass()->DefaultObject);

	return Default;
}

}


