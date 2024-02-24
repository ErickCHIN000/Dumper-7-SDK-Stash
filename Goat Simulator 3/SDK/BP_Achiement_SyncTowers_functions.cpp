#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C
// (Actor)

class UClass* ABP_Achiement_SyncTowers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achiement_SyncTowers_C");

	return Clss;
}


// BP_Achiement_SyncTowers_C BP_Achiement_SyncTowers.Default__BP_Achiement_SyncTowers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achiement_SyncTowers_C* ABP_Achiement_SyncTowers_C::GetDefaultObj()
{
	static class ABP_Achiement_SyncTowers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achiement_SyncTowers_C*>(ABP_Achiement_SyncTowers_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.HasMetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsClient                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsIsland                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGWorldSave*                CallFunc_GetWorldSave_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Achiement_SyncTowers_C::HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGGWorldSave* CallFunc_GetWorldSave_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achiement_SyncTowers_C", "HasMetRequirements");

	Params::ABP_Achiement_SyncTowers_C_HasMetRequirements_Params Parms{};

	Parms.bIsClient = bIsClient;
	Parms.bIsMainMenu = bIsMainMenu;
	Parms.bIsIsland = bIsIsland;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetWorldSave_ReturnValue = CallFunc_GetWorldSave_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achiement_SyncTowers_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achiement_SyncTowers_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.On Goat Tower Sync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoatTower*                GoatTower                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETowerSynchronizationEventSynchronizationEvent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achiement_SyncTowers_C::On_Goat_Tower_Sync(class AGGGoatTower* GoatTower, enum class ETowerSynchronizationEvent SynchronizationEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achiement_SyncTowers_C", "On Goat Tower Sync");

	Params::ABP_Achiement_SyncTowers_C_On_Goat_Tower_Sync_Params Parms{};

	Parms.GoatTower = GoatTower;
	Parms.SynchronizationEvent = SynchronizationEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achiement_SyncTowers.BP_Achiement_SyncTowers_C.ExecuteUbergraph_BP_Achiement_SyncTowers
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGWorldSave*                CallFunc_GetWorldSave_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoatTower*                K2Node_CustomEvent_GoatTower                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETowerSynchronizationEventK2Node_CustomEvent_SynchronizationEvent                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)

void ABP_Achiement_SyncTowers_C::ExecuteUbergraph_BP_Achiement_SyncTowers(int32 EntryPoint, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UGGWorldSave* CallFunc_GetWorldSave_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class AGGGoatTower* K2Node_CustomEvent_GoatTower, enum class ETowerSynchronizationEvent K2Node_CustomEvent_SynchronizationEvent, bool CallFunc_IsServer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achiement_SyncTowers_C", "ExecuteUbergraph_BP_Achiement_SyncTowers");

	Params::ABP_Achiement_SyncTowers_C_ExecuteUbergraph_BP_Achiement_SyncTowers_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetWorldSave_ReturnValue = CallFunc_GetWorldSave_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.K2Node_CustomEvent_GoatTower = K2Node_CustomEvent_GoatTower;
	Parms.K2Node_CustomEvent_SynchronizationEvent = K2Node_CustomEvent_SynchronizationEvent;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_1 = CallFunc_GetGlobalEventHandler_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


