#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Recurve_Bow_Fire.CS_Recurve_Bow_Fire_C
// (None)

class UClass* UCS_Recurve_Bow_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Recurve_Bow_Fire_C");

	return Clss;
}


// CS_Recurve_Bow_Fire_C CS_Recurve_Bow_Fire.Default__CS_Recurve_Bow_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Recurve_Bow_Fire_C* UCS_Recurve_Bow_Fire_C::GetDefaultObj()
{
	static class UCS_Recurve_Bow_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Recurve_Bow_Fire_C*>(UCS_Recurve_Bow_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


