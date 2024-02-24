#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Kunai_Fire.Kunai_Fire_C
// (Actor)

class UClass* AKunai_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Kunai_Fire_C");

	return Clss;
}


// Kunai_Fire_C Kunai_Fire.Default__Kunai_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AKunai_Fire_C* AKunai_Fire_C::GetDefaultObj()
{
	static class AKunai_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AKunai_Fire_C*>(AKunai_Fire_C::StaticClass()->DefaultObject);

	return Default;
}

}


