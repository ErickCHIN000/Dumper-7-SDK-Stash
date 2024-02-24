#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SnowLeopard_Corpse.BP_SnowLeopard_Corpse_C
// (Actor)

class UClass* ABP_SnowLeopard_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SnowLeopard_Corpse_C");

	return Clss;
}


// BP_SnowLeopard_Corpse_C BP_SnowLeopard_Corpse.Default__BP_SnowLeopard_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SnowLeopard_Corpse_C* ABP_SnowLeopard_Corpse_C::GetDefaultObj()
{
	static class ABP_SnowLeopard_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SnowLeopard_Corpse_C*>(ABP_SnowLeopard_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SnowLeopard_Corpse.BP_SnowLeopard_Corpse_C.OnCorpseFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsThirdPerson                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SnowLeopard_Corpse_C::OnCorpseFocused(bool IsThirdPerson)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowLeopard_Corpse_C", "OnCorpseFocused");

	Params::ABP_SnowLeopard_Corpse_C_OnCorpseFocused_Params Parms{};

	Parms.IsThirdPerson = IsThirdPerson;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SnowLeopard_Corpse.BP_SnowLeopard_Corpse_C.OnSkinnedStateUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SnowLeopard_Corpse_C::OnSkinnedStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SnowLeopard_Corpse_C", "OnSkinnedStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}

}


