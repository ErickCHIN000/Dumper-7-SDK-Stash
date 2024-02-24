#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Achievement_RoomUpdate.BP_Achievement_RoomUpdate_C
// (Actor)

class UClass* ABP_Achievement_RoomUpdate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Achievement_RoomUpdate_C");

	return Clss;
}


// BP_Achievement_RoomUpdate_C BP_Achievement_RoomUpdate.Default__BP_Achievement_RoomUpdate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Achievement_RoomUpdate_C* ABP_Achievement_RoomUpdate_C::GetDefaultObj()
{
	static class ABP_Achievement_RoomUpdate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Achievement_RoomUpdate_C*>(ABP_Achievement_RoomUpdate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Achievement_RoomUpdate.BP_Achievement_RoomUpdate_C.HasMetRequirements
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsClient                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsMainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bIsIsland                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetUnlockedStretchGoalNum_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_Achievement_RoomUpdate_C::HasMetRequirements(bool bIsClient, bool bIsMainMenu, bool bIsIsland, bool CallFunc_Not_PreBool_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetUnlockedStretchGoalNum_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomUpdate_C", "HasMetRequirements");

	Params::ABP_Achievement_RoomUpdate_C_HasMetRequirements_Params Parms{};

	Parms.bIsClient = bIsClient;
	Parms.bIsMainMenu = bIsMainMenu;
	Parms.bIsIsland = bIsIsland;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetUnlockedStretchGoalNum_ReturnValue = CallFunc_GetUnlockedStretchGoalNum_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_Achievement_RoomUpdate.BP_Achievement_RoomUpdate_C.OnAchievementInitialize
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Achievement_RoomUpdate_C::OnAchievementInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomUpdate_C", "OnAchievementInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Achievement_RoomUpdate.BP_Achievement_RoomUpdate_C.OnGoalUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCastleStretchGoal*        UnlockedGoal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Achievement_RoomUpdate_C::OnGoalUnlocked(class AGGCastleStretchGoal* UnlockedGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomUpdate_C", "OnGoalUnlocked");

	Params::ABP_Achievement_RoomUpdate_C_OnGoalUnlocked_Params Parms{};

	Parms.UnlockedGoal = UnlockedGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Achievement_RoomUpdate.BP_Achievement_RoomUpdate_C.ExecuteUbergraph_BP_Achievement_RoomUpdate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCastleStretchGoal*        K2Node_CustomEvent_UnlockedGoal                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGAchievementSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Achievement_RoomUpdate_C::ExecuteUbergraph_BP_Achievement_RoomUpdate(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class AGGCastleStretchGoal* K2Node_CustomEvent_UnlockedGoal, class UGGAchievementSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Achievement_RoomUpdate_C", "ExecuteUbergraph_BP_Achievement_RoomUpdate");

	Params::ABP_Achievement_RoomUpdate_C_ExecuteUbergraph_BP_Achievement_RoomUpdate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_CustomEvent_UnlockedGoal = K2Node_CustomEvent_UnlockedGoal;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


