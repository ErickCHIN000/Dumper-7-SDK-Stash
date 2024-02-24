#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ConcentrateGreen.ConcentrateGreen_C
// (Actor)

class UClass* AConcentrateGreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConcentrateGreen_C");

	return Clss;
}


// ConcentrateGreen_C ConcentrateGreen.Default__ConcentrateGreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConcentrateGreen_C* AConcentrateGreen_C::GetDefaultObj()
{
	static class AConcentrateGreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConcentrateGreen_C*>(AConcentrateGreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


