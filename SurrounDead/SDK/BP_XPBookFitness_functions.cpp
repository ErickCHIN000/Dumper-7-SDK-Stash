#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookFitness.BP_XPBookFitness_C
// (Actor)

class UClass* ABP_XPBookFitness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookFitness_C");

	return Clss;
}


// BP_XPBookFitness_C BP_XPBookFitness.Default__BP_XPBookFitness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookFitness_C* ABP_XPBookFitness_C::GetDefaultObj()
{
	static class ABP_XPBookFitness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookFitness_C*>(ABP_XPBookFitness_C::StaticClass()->DefaultObject);

	return Default;
}

}


