#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_Trinkets.BP_Achievement_Trinkets_C
// (Actor)

class UClass* ABP_Achievement_Trinkets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_Trinkets_C");

	return Clss;
}


// BP_Achievement_Trinkets_C BP_Achievement_Trinkets.Default__BP_Achievement_Trinkets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_Trinkets_C* ABP_Achievement_Trinkets_C::GetDefaultObj()
{
	static class ABP_Achievement_Trinkets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_Trinkets_C*>(ABP_Achievement_Trinkets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_Trinkets.BP_Achievement_Trinkets_C.HasMetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsClient                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsIsland                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGQuestManager*             CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetGlobalQuestSet_bOutSuccess                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGQuestSet*                 CallFunc_GetGlobalQuestSet_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaximumTargetProgress_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetProgress_ReachedMaximum                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetProgress_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Achievement_Trinkets_C::HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_GetGlobalQuestSet_bOutSuccess, class AGGQuestSet* CallFunc_GetGlobalQuestSet_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetMaximumTargetProgress_ReturnValue, bool CallFunc_GetProgress_ReachedMaximum, int32 CallFunc_GetProgress_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Trinkets_C", "HasMetRequirements");

	Params::ABP_Achievement_Trinkets_C_HasMetRequirements_Params Parms{};

	Parms.bIsClient = bIsClient;
	Parms.bIsMainMenu = bIsMainMenu;
	Parms.bIsIsland = bIsIsland;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.CallFunc_GetGlobalQuestSet_bOutSuccess = CallFunc_GetGlobalQuestSet_bOutSuccess;
	Parms.CallFunc_GetGlobalQuestSet_ReturnValue = CallFunc_GetGlobalQuestSet_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetMaximumTargetProgress_ReturnValue = CallFunc_GetMaximumTargetProgress_ReturnValue;
	Parms.CallFunc_GetProgress_ReachedMaximum = CallFunc_GetProgress_ReachedMaximum;
	Parms.CallFunc_GetProgress_ReturnValue = CallFunc_GetProgress_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Achievement_Trinkets.BP_Achievement_Trinkets_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_Trinkets_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Trinkets_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_Trinkets.BP_Achievement_Trinkets_C.ExecuteUbergraph_BP_Achievement_Trinkets
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_Trinkets_C::ExecuteUbergraph_BP_Achievement_Trinkets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_Trinkets_C", "ExecuteUbergraph_BP_Achievement_Trinkets");

	Params::ABP_Achievement_Trinkets_C_ExecuteUbergraph_BP_Achievement_Trinkets_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


