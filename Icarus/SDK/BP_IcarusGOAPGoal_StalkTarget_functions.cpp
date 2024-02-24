#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPGoal_StalkTarget.BP_IcarusGOAPGoal_StalkTarget_C
// (None)

class UClass* UBP_IcarusGOAPGoal_StalkTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPGoal_StalkTarget_C");

	return Clss;
}


// BP_IcarusGOAPGoal_StalkTarget_C BP_IcarusGOAPGoal_StalkTarget.Default__BP_IcarusGOAPGoal_StalkTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPGoal_StalkTarget_C* UBP_IcarusGOAPGoal_StalkTarget_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPGoal_StalkTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPGoal_StalkTarget_C*>(UBP_IcarusGOAPGoal_StalkTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}


