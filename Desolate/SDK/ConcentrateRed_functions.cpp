#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConcentrateRed.ConcentrateRed_C
// (Actor)

class UClass* AConcentrateRed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcentrateRed_C");

	return Clss;
}


// ConcentrateRed_C ConcentrateRed.Default__ConcentrateRed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConcentrateRed_C* AConcentrateRed_C::GetDefaultObj()
{
	static class AConcentrateRed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConcentrateRed_C*>(AConcentrateRed_C::StaticClass()->DefaultObject);

	return Default;
}

}


