#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPGoal_SatisfyThirst.BP_IcarusGOAPGoal_SatisfyThirst_C
// (None)

class UClass* UBP_IcarusGOAPGoal_SatisfyThirst_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPGoal_SatisfyThirst_C");

	return Clss;
}


// BP_IcarusGOAPGoal_SatisfyThirst_C BP_IcarusGOAPGoal_SatisfyThirst.Default__BP_IcarusGOAPGoal_SatisfyThirst_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPGoal_SatisfyThirst_C* UBP_IcarusGOAPGoal_SatisfyThirst_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPGoal_SatisfyThirst_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPGoal_SatisfyThirst_C*>(UBP_IcarusGOAPGoal_SatisfyThirst_C::StaticClass()->DefaultObject);

	return Default;
}

}


