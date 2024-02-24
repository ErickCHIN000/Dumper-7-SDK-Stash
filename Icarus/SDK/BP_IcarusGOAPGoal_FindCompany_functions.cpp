#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPGoal_FindCompany.BP_IcarusGOAPGoal_FindCompany_C
// (None)

class UClass* UBP_IcarusGOAPGoal_FindCompany_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPGoal_FindCompany_C");

	return Clss;
}


// BP_IcarusGOAPGoal_FindCompany_C BP_IcarusGOAPGoal_FindCompany.Default__BP_IcarusGOAPGoal_FindCompany_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPGoal_FindCompany_C* UBP_IcarusGOAPGoal_FindCompany_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPGoal_FindCompany_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPGoal_FindCompany_C*>(UBP_IcarusGOAPGoal_FindCompany_C::StaticClass()->DefaultObject);

	return Default;
}

}


