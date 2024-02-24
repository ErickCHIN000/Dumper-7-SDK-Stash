#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPGoal_Rest.BP_IcarusGOAPGoal_Rest_C
// (None)

class UClass* UBP_IcarusGOAPGoal_Rest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPGoal_Rest_C");

	return Clss;
}


// BP_IcarusGOAPGoal_Rest_C BP_IcarusGOAPGoal_Rest.Default__BP_IcarusGOAPGoal_Rest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPGoal_Rest_C* UBP_IcarusGOAPGoal_Rest_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPGoal_Rest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPGoal_Rest_C*>(UBP_IcarusGOAPGoal_Rest_C::StaticClass()->DefaultObject);

	return Default;
}

}


