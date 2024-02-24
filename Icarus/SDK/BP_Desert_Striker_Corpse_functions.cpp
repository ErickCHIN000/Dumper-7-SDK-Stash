#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Desert_Striker_Corpse.BP_Desert_Striker_Corpse_C
// (Actor)

class UClass* ABP_Desert_Striker_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Desert_Striker_Corpse_C");

	return Clss;
}


// BP_Desert_Striker_Corpse_C BP_Desert_Striker_Corpse.Default__BP_Desert_Striker_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Desert_Striker_Corpse_C* ABP_Desert_Striker_Corpse_C::GetDefaultObj()
{
	static class ABP_Desert_Striker_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Desert_Striker_Corpse_C*>(ABP_Desert_Striker_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Desert_Striker_Corpse.BP_Desert_Striker_Corpse_C.IsSkeletonUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Desert_Striker_Corpse_C::IsSkeletonUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Desert_Striker_Corpse_C", "IsSkeletonUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Desert_Striker_Corpse.BP_Desert_Striker_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Desert_Striker_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Desert_Striker_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}


