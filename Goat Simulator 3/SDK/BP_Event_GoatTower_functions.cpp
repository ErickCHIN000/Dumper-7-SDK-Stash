#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Event_GoatTower.BP_Event_GoatTower_C
// (Actor)

class UClass* ABP_Event_GoatTower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Event_GoatTower_C");

	return Clss;
}


// BP_Event_GoatTower_C BP_Event_GoatTower.Default__BP_Event_GoatTower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Event_GoatTower_C* ABP_Event_GoatTower_C::GetDefaultObj()
{
	static class ABP_Event_GoatTower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Event_GoatTower_C*>(ABP_Event_GoatTower_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.ThroneRoomOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_GoatTower_C::ThroneRoomOpened(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "ThroneRoomOpened");

	Params::ABP_Event_GoatTower_C_ThroneRoomOpened_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.GoatTowerSynched
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_GoatTower_C::GoatTowerSynched(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "GoatTowerSynched");

	Params::ABP_Event_GoatTower_C_GoatTowerSynched_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.PlayerEnteredThroneRoom
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoatTower*                GoatTower                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_GoatTower_C::PlayerEnteredThroneRoom(class AGGGoat* Goat, class AGGGoatTower* GoatTower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "PlayerEnteredThroneRoom");

	Params::ABP_Event_GoatTower_C_PlayerEnteredThroneRoom_Params Parms{};

	Parms.Goat = Goat;
	Parms.GoatTower = GoatTower;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.OnIntroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGIntro*                    Intro                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_GoatTower_C::OnIntroFinished(class AGGIntro* Intro)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "OnIntroFinished");

	Params::ABP_Event_GoatTower_C_OnIntroFinished_Params Parms{};

	Parms.Intro = Intro;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.FirstStretchgoalUnlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_GoatTower_C::FirstStretchgoalUnlocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "FirstStretchgoalUnlocked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.OnStartedSyncing
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Event_GoatTower_C::OnStartedSyncing(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "OnStartedSyncing");

	Params::ABP_Event_GoatTower_C_OnStartedSyncing_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.BindEventCallbacks
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Event_GoatTower_C::BindEventCallbacks()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "BindEventCallbacks");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.OnQuestProgressionLoadedBlueprint
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bSaveExisted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bWasCompleted                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_GoatTower_C::OnQuestProgressionLoadedBlueprint(bool bSaveExisted, bool bWasCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "OnQuestProgressionLoadedBlueprint");

	Params::ABP_Event_GoatTower_C_OnQuestProgressionLoadedBlueprint_Params Parms{};

	Parms.bSaveExisted = bSaveExisted;
	Parms.bWasCompleted = bWasCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Event_GoatTower.BP_Event_GoatTower_C.ExecuteUbergraph_BP_Event_GoatTower
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDemoBuild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDemoBuild_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_Goat_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_GoatTower_C*>     CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_Goat_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoatTower*                K2Node_CustomEvent_GoatTower                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue_1                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGIntro*                    K2Node_CustomEvent_Intro                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StretchGoal_Base_C*      K2Node_DynamicCast_AsBP_Stretch_Goal_Base                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDemoBuild_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue_2                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_ThroneRoom_Scanner_C*    K2Node_DynamicCast_AsBP_Throne_Room_Scanner                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGProgression*              CallFunc_GetPlayerProgression_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuestStepCompleted_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPrimaryGGPlayerController_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GoatTower_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSaveExisted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bWasCompleted                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasEverBeenDiscovered_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Event_GoatTower_C::ExecuteUbergraph_BP_Event_GoatTower(int32 EntryPoint, bool CallFunc_IsDemoBuild_ReturnValue, bool CallFunc_IsDemoBuild_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGGoat* K2Node_CustomEvent_Goat_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class AGGGoat* K2Node_CustomEvent_Goat_2, TArray<class ABP_GoatTower_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGGGoat* K2Node_CustomEvent_Goat_1, class AGGGoatTower* K2Node_CustomEvent_GoatTower, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_1, class AGGIntro* K2Node_CustomEvent_Intro, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class ABP_StretchGoal_Base_C* K2Node_DynamicCast_AsBP_Stretch_Goal_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDemoBuild_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGGGoat* K2Node_CustomEvent_Goat, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABP_ThroneRoom_Scanner_C* K2Node_DynamicCast_AsBP_Throne_Room_Scanner, bool K2Node_DynamicCast_bSuccess_1, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_1, bool CallFunc_IsQuestStepCompleted_ReturnValue, bool CallFunc_IsQuestStepCompleted_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsQuestStepCompleted_ReturnValue_2, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_2, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_3, bool CallFunc_IsQuestStepCompleted_ReturnValue_3, bool CallFunc_IsQuestStepCompleted_ReturnValue_4, class UGGProgression* CallFunc_GetPlayerProgression_ReturnValue_4, bool CallFunc_IsQuestStepCompleted_ReturnValue_5, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_3, class ABP_GoatTower_C* CallFunc_Array_Get_Item, bool CallFunc_HasAuthority_ReturnValue_2, bool K2Node_Event_bSaveExisted, bool K2Node_Event_bWasCompleted, bool CallFunc_HasEverBeenDiscovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Event_GoatTower_C", "ExecuteUbergraph_BP_Event_GoatTower");

	Params::ABP_Event_GoatTower_C_ExecuteUbergraph_BP_Event_GoatTower_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDemoBuild_ReturnValue = CallFunc_IsDemoBuild_ReturnValue;
	Parms.CallFunc_IsDemoBuild_ReturnValue_1 = CallFunc_IsDemoBuild_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Goat_3 = K2Node_CustomEvent_Goat_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGGPlayerState_ReturnValue = CallFunc_GetGGPlayerState_ReturnValue;
	Parms.K2Node_CustomEvent_Goat_2 = K2Node_CustomEvent_Goat_2;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Goat_1 = K2Node_CustomEvent_Goat_1;
	Parms.K2Node_CustomEvent_GoatTower = K2Node_CustomEvent_GoatTower;
	Parms.CallFunc_GetGGPlayerState_ReturnValue_1 = CallFunc_GetGGPlayerState_ReturnValue_1;
	Parms.K2Node_CustomEvent_Intro = K2Node_CustomEvent_Intro;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Stretch_Goal_Base = K2Node_DynamicCast_AsBP_Stretch_Goal_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsDemoBuild_ReturnValue_2 = CallFunc_IsDemoBuild_ReturnValue_2;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.CallFunc_GetGGPlayerState_ReturnValue_2 = CallFunc_GetGGPlayerState_ReturnValue_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Throne_Room_Scanner = K2Node_DynamicCast_AsBP_Throne_Room_Scanner;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerProgression_ReturnValue = CallFunc_GetPlayerProgression_ReturnValue;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_1 = CallFunc_GetPlayerProgression_ReturnValue_1;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue = CallFunc_IsQuestStepCompleted_ReturnValue;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue_1 = CallFunc_IsQuestStepCompleted_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue_2 = CallFunc_IsQuestStepCompleted_ReturnValue_2;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_2 = CallFunc_GetPlayerProgression_ReturnValue_2;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_3 = CallFunc_GetPlayerProgression_ReturnValue_3;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue_3 = CallFunc_IsQuestStepCompleted_ReturnValue_3;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue_4 = CallFunc_IsQuestStepCompleted_ReturnValue_4;
	Parms.CallFunc_GetPlayerProgression_ReturnValue_4 = CallFunc_GetPlayerProgression_ReturnValue_4;
	Parms.CallFunc_IsQuestStepCompleted_ReturnValue_5 = CallFunc_IsQuestStepCompleted_ReturnValue_5;
	Parms.CallFunc_GetPrimaryGGPlayerController_ReturnValue = CallFunc_GetPrimaryGGPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetGGPlayerState_ReturnValue_3 = CallFunc_GetGGPlayerState_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.K2Node_Event_bSaveExisted = K2Node_Event_bSaveExisted;
	Parms.K2Node_Event_bWasCompleted = K2Node_Event_bWasCompleted;
	Parms.CallFunc_HasEverBeenDiscovered_ReturnValue = CallFunc_HasEverBeenDiscovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


