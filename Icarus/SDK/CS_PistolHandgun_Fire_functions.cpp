#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_PistolHandgun_Fire.CS_PistolHandgun_Fire_C
// (None)

class UClass* UCS_PistolHandgun_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_PistolHandgun_Fire_C");

	return Clss;
}


// CS_PistolHandgun_Fire_C CS_PistolHandgun_Fire.Default__CS_PistolHandgun_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_PistolHandgun_Fire_C* UCS_PistolHandgun_Fire_C::GetDefaultObj()
{
	static class UCS_PistolHandgun_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_PistolHandgun_Fire_C*>(UCS_PistolHandgun_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


