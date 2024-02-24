#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConcentrateBlue.ConcentrateBlue_C
// (Actor)

class UClass* AConcentrateBlue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcentrateBlue_C");

	return Clss;
}


// ConcentrateBlue_C ConcentrateBlue.Default__ConcentrateBlue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConcentrateBlue_C* AConcentrateBlue_C::GetDefaultObj()
{
	static class AConcentrateBlue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConcentrateBlue_C*>(AConcentrateBlue_C::StaticClass()->DefaultObject);

	return Default;
}

}


