#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_CapraErectus.BP_Achievement_CapraErectus_C
// (Actor)

class UClass* ABP_Achievement_CapraErectus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_CapraErectus_C");

	return Clss;
}


// BP_Achievement_CapraErectus_C BP_Achievement_CapraErectus.Default__BP_Achievement_CapraErectus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_CapraErectus_C* ABP_Achievement_CapraErectus_C::GetDefaultObj()
{
	static class ABP_Achievement_CapraErectus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_CapraErectus_C*>(ABP_Achievement_CapraErectus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_CapraErectus.BP_Achievement_CapraErectus_C.HasMetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsClient                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsIsland                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGInventory*                CallFunc_GetPlayerInventory_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGearUnlockedDataAsset_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Achievement_CapraErectus_C::HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGInventory* CallFunc_GetPlayerInventory_ReturnValue, bool CallFunc_IsGearUnlockedDataAsset_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_CapraErectus_C", "HasMetRequirements");

	Params::ABP_Achievement_CapraErectus_C_HasMetRequirements_Params Parms{};

	Parms.bIsClient = bIsClient;
	Parms.bIsMainMenu = bIsMainMenu;
	Parms.bIsIsland = bIsIsland;
	Parms.CallFunc_GetPlayerInventory_ReturnValue = CallFunc_GetPlayerInventory_ReturnValue;
	Parms.CallFunc_IsGearUnlockedDataAsset_ReturnValue = CallFunc_IsGearUnlockedDataAsset_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Achievement_CapraErectus.BP_Achievement_CapraErectus_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_CapraErectus_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_CapraErectus_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_CapraErectus.BP_Achievement_CapraErectus_C.ExecuteUbergraph_BP_Achievement_CapraErectus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_CapraErectus_C::ExecuteUbergraph_BP_Achievement_CapraErectus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_CapraErectus_C", "ExecuteUbergraph_BP_Achievement_CapraErectus");

	Params::ABP_Achievement_CapraErectus_C_ExecuteUbergraph_BP_Achievement_CapraErectus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

