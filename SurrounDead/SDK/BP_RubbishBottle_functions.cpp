#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RubbishBottle.BP_RubbishBottle_C
// (Actor)

class UClass* ABP_RubbishBottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RubbishBottle_C");

	return Clss;
}


// BP_RubbishBottle_C BP_RubbishBottle.Default__BP_RubbishBottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RubbishBottle_C* ABP_RubbishBottle_C::GetDefaultObj()
{
	static class ABP_RubbishBottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RubbishBottle_C*>(ABP_RubbishBottle_C::StaticClass()->DefaultObject);

	return Default;
}

}


