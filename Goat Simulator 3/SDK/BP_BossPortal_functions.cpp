#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BossPortal.BP_BossPortal_C
// (Actor)

class UClass* ABP_BossPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BossPortal_C");

	return Clss;
}


// BP_BossPortal_C BP_BossPortal.Default__BP_BossPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BossPortal_C* ABP_BossPortal_C::GetDefaultObj()
{
	static class ABP_BossPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BossPortal_C*>(ABP_BossPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BossPortal.BP_BossPortal_C.GetTriggersWithPlayersNum
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ActiveTriggers                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesTriggerHavePlayer_Has_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForActivation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_BossPortal_C::GetTriggersWithPlayersNum(int32 ActiveTriggers, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_DoesTriggerHavePlayer_Has_Player, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsReadyForActivation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "GetTriggersWithPlayersNum");

	Params::ABP_BossPortal_C_GetTriggersWithPlayersNum_Params Parms{};

	Parms.ActiveTriggers = ActiveTriggers;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DoesTriggerHavePlayer_Has_Player = CallFunc_DoesTriggerHavePlayer_Has_Player;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsReadyForActivation_ReturnValue = CallFunc_IsReadyForActivation_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BossPortal.BP_BossPortal_C.CanActivateTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanActivate                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTriggerHavePlayer_Has_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForActivation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BossPortal_C::CanActivateTrigger(class AGGGoat* Goat, bool* CanActivate, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DoesTriggerHavePlayer_Has_Player, bool CallFunc_IsReadyForActivation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "CanActivateTrigger");

	Params::ABP_BossPortal_C_CanActivateTrigger_Params Parms{};

	Parms.Goat = Goat;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DoesTriggerHavePlayer_Has_Player = CallFunc_DoesTriggerHavePlayer_Has_Player;
	Parms.CallFunc_IsReadyForActivation_ReturnValue = CallFunc_IsReadyForActivation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanActivate != nullptr)
		*CanActivate = Parms.CanActivate;

}


// Function BP_BossPortal.BP_BossPortal_C.IsSplitScreen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSplitScreenActive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_BossPortal_C::IsSplitScreen(class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsSplitScreenActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "IsSplitScreen");

	Params::ABP_BossPortal_C_IsSplitScreen_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsSplitScreenActive_ReturnValue = CallFunc_IsSplitScreenActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BossPortal.BP_BossPortal_C.Update Triggers Able To Activate SG
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanActivate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState_1          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BossPortal_C::Update_Triggers_Able_To_Activate_SG(bool CanActivate, bool AnimateLids, int32 Temp_int_Loop_Counter_Variable, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState, bool CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "Update Triggers Able To Activate SG");

	Params::ABP_BossPortal_C_Update_Triggers_Able_To_Activate_SG_Params Parms{};

	Parms.CanActivate = CanActivate;
	Parms.AnimateLids = AnimateLids;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState = CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState;
	Parms.CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState_1 = CallFunc_Set_Can_Activate_SG_Button_WasAlreadyInState_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.TeleportPlayersOnTriggers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BossPortal_C::TeleportPlayersOnTriggers(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "TeleportPlayersOnTriggers");

	Params::ABP_BossPortal_C_TeleportPlayersOnTriggers_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.Update Triggers Able to Activate Boss
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanActivate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState_1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BossPortal_C::Update_Triggers_Able_to_Activate_Boss(bool CanActivate, bool AnimateLids, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState, bool CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "Update Triggers Able to Activate Boss");

	Params::ABP_BossPortal_C_Update_Triggers_Able_to_Activate_Boss_Params Parms{};

	Parms.CanActivate = CanActivate;
	Parms.AnimateLids = AnimateLids;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState = CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState;
	Parms.CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState_1 = CallFunc_Set_Can_Activate_Portal_Button_WasAlreadyInState_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.SetCanPortalActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanPortalActivate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BossPortal_C::SetCanPortalActivate(bool CanPortalActivate, bool AnimateLids, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "SetCanPortalActivate");

	Params::ABP_BossPortal_C_SetCanPortalActivate_Params Parms{};

	Parms.CanPortalActivate = CanPortalActivate;
	Parms.AnimateLids = AnimateLids;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.AllActiveTrigersHavePlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllTriggersAreActive                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ActiveTriggers                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllTriggersActive                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AGGPlayerController*> CallFunc_GetAllGGPlayerControllers_ReturnValue                   (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesTriggerHavePlayer_Has_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForActivation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_BossPortal_C::AllActiveTrigersHavePlayers(bool* AllTriggersAreActive, int32 ActiveTriggers, bool AllTriggersActive, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, TArray<class AGGPlayerController*>& CallFunc_GetAllGGPlayerControllers_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_DoesTriggerHavePlayer_Has_Player, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsReadyForActivation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "AllActiveTrigersHavePlayers");

	Params::ABP_BossPortal_C_AllActiveTrigersHavePlayers_Params Parms{};

	Parms.ActiveTriggers = ActiveTriggers;
	Parms.AllTriggersActive = AllTriggersActive;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetAllGGPlayerControllers_ReturnValue = CallFunc_GetAllGGPlayerControllers_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_DoesTriggerHavePlayer_Has_Player = CallFunc_DoesTriggerHavePlayer_Has_Player;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsReadyForActivation_ReturnValue = CallFunc_IsReadyForActivation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AllTriggersAreActive != nullptr)
		*AllTriggersAreActive = Parms.AllTriggersAreActive;

}


// Function BP_BossPortal.BP_BossPortal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BossPortal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BossPortal.BP_BossPortal_C.OnPlayerEnteredTrigger_Event
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::OnPlayerEnteredTrigger_Event(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnPlayerEnteredTrigger_Event");

	Params::ABP_BossPortal_C_OnPlayerEnteredTrigger_Event_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.OnPlayerLeftTrigger_Event
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::OnPlayerLeftTrigger_Event(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnPlayerLeftTrigger_Event");

	Params::ABP_BossPortal_C_OnPlayerLeftTrigger_Event_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.OnPlayerLogin
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           NewPlayerController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::OnPlayerLogin(class APlayerController* NewPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnPlayerLogin");

	Params::ABP_BossPortal_C_OnPlayerLogin_Params Parms{};

	Parms.NewPlayerController = NewPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.OnPlayerLogout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           LeavingPlayerController                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::OnPlayerLogout(class APlayerController* LeavingPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnPlayerLogout");

	Params::ABP_BossPortal_C_OnPlayerLogout_Params Parms{};

	Parms.LeavingPlayerController = LeavingPlayerController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.Multicast_PlayOpenDoorSequence
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BossPortal_C::Multicast_PlayOpenDoorSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "Multicast_PlayOpenDoorSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BossPortal.BP_BossPortal_C.OnDoorOpeningSeqFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BossPortal_C::OnDoorOpeningSeqFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnDoorOpeningSeqFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BossPortal.BP_BossPortal_C.GatherAllGoats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::GatherAllGoats(class AGGPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "GatherAllGoats");

	Params::ABP_BossPortal_C_GatherAllGoats_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.PlayerEnteredTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::PlayerEnteredTrigger(class AGGPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "PlayerEnteredTrigger");

	Params::ABP_BossPortal_C_PlayerEnteredTrigger_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.PlayerLeftTrigger
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::PlayerLeftTrigger(class AGGPlayerController* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "PlayerLeftTrigger");

	Params::ABP_BossPortal_C_PlayerLeftTrigger_Params Parms{};

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.OnCinematicStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Sequence                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::OnCinematicStarted(class ULevelSequencePlayer* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnCinematicStarted");

	Params::ABP_BossPortal_C_OnCinematicStarted_Params Parms{};

	Parms.Sequence = Sequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.SeqForAllNearbyPlayers_OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BossPortal_C::SeqForAllNearbyPlayers_OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "SeqForAllNearbyPlayers_OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BossPortal.BP_BossPortal_C.SeqForAllNearbyPlayers_OnStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BossPortal_C::SeqForAllNearbyPlayers_OnStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "SeqForAllNearbyPlayers_OnStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BossPortal.BP_BossPortal_C.ExecuteUbergraph_BP_BossPortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGLevelTravelSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     K2Node_CustomEvent_Goat_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanActivateTrigger_CanActivate                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanActivateTrigger_CanActivate_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     K2Node_CustomEvent_Goat                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           K2Node_CustomEvent_NewPlayerController                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_CustomEvent_LeavingPlayerController                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGLevelSequenceActor*       CallFunc_CreateGGLevelSequencePlayer_OutActor                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateGGLevelSequencePlayer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyValueBase               CallFunc_KeyValue_IntToKeyValue_ReturnValue                      (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateKeyValueData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTravelSettings             K2Node_MakeStruct_TravelSettings                                 (None)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Update_Active_Status_Active                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Active_Status_Active_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGameMode*                 K2Node_DynamicCast_AsGGGame_Mode                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive_1      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesTriggerHavePlayer_Has_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_7                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_CustomEvent_Player_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerController*         K2Node_CustomEvent_Player_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// int32                              CallFunc_GetPlayerColorIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class AGGPlayerController*         K2Node_CustomEvent_Player                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class AGGPlayerState*              CallFunc_GetGGPlayerState_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGatherGoatParameters       K2Node_MakeStruct_GatherGoatParameters                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// int32                              Temp_int_Array_Index_Variable_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_8                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesTriggerHavePlayer_Has_Player_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCountNotificationParametersK2Node_MakeStruct_CountNotificationParameters                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGatherEventWithID_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasGatherEventWithID_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasUnlockedAllStretchGoals_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGCastleStretchGoal*        CallFunc_GetCurrentlyActiveGoal_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// class ULevelSequencePlayer*        K2Node_CustomEvent_Sequence                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FInviteNotificationParametersK2Node_MakeStruct_InviteNotificationParameters                   (None)
// bool                               CallFunc_GatherAllGoats_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::ExecuteUbergraph_BP_BossPortal(int32 EntryPoint, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class UGGLevelTravelSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_3, class AGGGoat* K2Node_CustomEvent_Goat_1, int32 CallFunc_Array_Length_ReturnValue, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_CanActivateTrigger_CanActivate, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_1, bool CallFunc_CanActivateTrigger_CanActivate_1, class AGGGoat* K2Node_CustomEvent_Goat, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_2, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive, class APlayerController* K2Node_CustomEvent_NewPlayerController, class APlayerController* K2Node_CustomEvent_LeavingPlayerController, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_2, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FKeyValueBase& CallFunc_KeyValue_IntToKeyValue_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_UpdateKeyValueData_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTravelSettings& K2Node_MakeStruct_TravelSettings, int32 Temp_int_Array_Index_Variable_4, int32 Temp_int_Loop_Counter_Variable_5, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_4, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, class AGGGoat* CallFunc_Array_Get_Item_2, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Update_Active_Status_Active, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_4, int32 Temp_int_Array_Index_Variable_5, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_Update_Active_Status_Active_1, bool CallFunc_HasAuthority_ReturnValue_1, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class AGGGameMode* K2Node_DynamicCast_AsGGGame_Mode, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_HasAuthority_ReturnValue_2, int32 Temp_int_Array_Index_Variable_6, bool CallFunc_HasAuthority_ReturnValue_3, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_4, bool CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_DoesTriggerHavePlayer_Has_Player, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_Less_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_7, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_7, class AGGPlayerController* K2Node_CustomEvent_Player_2, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue, class AGGPlayerController* K2Node_CustomEvent_Player_1, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 CallFunc_GetPlayerColorIndex_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class AGGPlayerController* K2Node_CustomEvent_Player, class FText CallFunc_Format_ReturnValue_1, class AGGPlayerState* CallFunc_GetGGPlayerState_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_6, int32 Temp_int_Loop_Counter_Variable_7, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_6, const struct FGatherGoatParameters& K2Node_MakeStruct_GatherGoatParameters, class FText CallFunc_Conv_StringToText_ReturnValue_3, int32 Temp_int_Array_Index_Variable_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_8, bool CallFunc_DoesTriggerHavePlayer_Has_Player_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, const struct FCountNotificationParameters& K2Node_MakeStruct_CountNotificationParameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_3, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_4, bool CallFunc_HasGatherEventWithID_ReturnValue, bool CallFunc_HasGatherEventWithID_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_5, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_5, bool CallFunc_HasUnlockedAllStretchGoals_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, class FText Temp_text_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const struct FInviteNotificationParameters& K2Node_MakeStruct_InviteNotificationParameters, bool CallFunc_GatherAllGoats_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_8, bool CallFunc_Less_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_8, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_9, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Max_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "ExecuteUbergraph_BP_BossPortal");

	Params::ABP_BossPortal_C_ExecuteUbergraph_BP_BossPortal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_CustomEvent_Goat_1 = K2Node_CustomEvent_Goat_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_CanActivateTrigger_CanActivate = CallFunc_CanActivateTrigger_CanActivate;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_1 = CallFunc_GetGGPlayerController_ReturnValue_1;
	Parms.CallFunc_CanActivateTrigger_CanActivate_1 = CallFunc_CanActivateTrigger_CanActivate_1;
	Parms.K2Node_CustomEvent_Goat = K2Node_CustomEvent_Goat;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_2 = CallFunc_GetGGPlayerController_ReturnValue_2;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_3 = CallFunc_GetGGPlayerController_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive = CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive;
	Parms.K2Node_CustomEvent_NewPlayerController = K2Node_CustomEvent_NewPlayerController;
	Parms.K2Node_CustomEvent_LeavingPlayerController = K2Node_CustomEvent_LeavingPlayerController;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_CreateGGLevelSequencePlayer_OutActor = CallFunc_CreateGGLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateGGLevelSequencePlayer_ReturnValue = CallFunc_CreateGGLevelSequencePlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_KeyValue_IntToKeyValue_ReturnValue = CallFunc_KeyValue_IntToKeyValue_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_UpdateKeyValueData_ReturnValue = CallFunc_UpdateKeyValueData_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_TravelSettings = K2Node_MakeStruct_TravelSettings;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetGGPlayerController_ReturnValue_4 = CallFunc_GetGGPlayerController_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Update_Active_Status_Active = CallFunc_Update_Active_Status_Active;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Update_Active_Status_Active_1 = CallFunc_Update_Active_Status_Active_1;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGGGame_Mode = K2Node_DynamicCast_AsGGGame_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive_1 = CallFunc_AllActiveTrigersHavePlayers_AllTriggersAreActive_1;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_DoesTriggerHavePlayer_Has_Player = CallFunc_DoesTriggerHavePlayer_Has_Player;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_CustomEvent_Player_2 = K2Node_CustomEvent_Player_2;
	Parms.CallFunc_GetGGPlayerState_ReturnValue = CallFunc_GetGGPlayerState_ReturnValue;
	Parms.K2Node_CustomEvent_Player_1 = K2Node_CustomEvent_Player_1;
	Parms.CallFunc_GetGGPlayerState_ReturnValue_1 = CallFunc_GetGGPlayerState_ReturnValue_1;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_GetPlayerColorIndex_ReturnValue = CallFunc_GetPlayerColorIndex_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_CustomEvent_Player = K2Node_CustomEvent_Player;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_GetGGPlayerState_ReturnValue_2 = CallFunc_GetGGPlayerState_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.K2Node_MakeStruct_GatherGoatParameters = K2Node_MakeStruct_GatherGoatParameters;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_8 = Temp_int_Array_Index_Variable_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Array_Get_Item_8 = CallFunc_Array_Get_Item_8;
	Parms.CallFunc_DoesTriggerHavePlayer_Has_Player_1 = CallFunc_DoesTriggerHavePlayer_Has_Player_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeStruct_CountNotificationParameters = K2Node_MakeStruct_CountNotificationParameters;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_3 = CallFunc_GetWorldSubsystem_ReturnValue_3;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_4 = CallFunc_GetWorldSubsystem_ReturnValue_4;
	Parms.CallFunc_HasGatherEventWithID_ReturnValue = CallFunc_HasGatherEventWithID_ReturnValue;
	Parms.CallFunc_HasGatherEventWithID_ReturnValue_1 = CallFunc_HasGatherEventWithID_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue_5 = CallFunc_HasAuthority_ReturnValue_5;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_5 = CallFunc_GetWorldSubsystem_ReturnValue_5;
	Parms.CallFunc_HasUnlockedAllStretchGoals_ReturnValue = CallFunc_HasUnlockedAllStretchGoals_ReturnValue;
	Parms.CallFunc_GetCurrentlyActiveGoal_ReturnValue = CallFunc_GetCurrentlyActiveGoal_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_CustomEvent_Sequence = K2Node_CustomEvent_Sequence;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_InviteNotificationParameters = K2Node_MakeStruct_InviteNotificationParameters;
	Parms.CallFunc_GatherAllGoats_ReturnValue = CallFunc_GatherAllGoats_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_1 = CallFunc_GetGlobalEventHandler_ReturnValue_1;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_2 = CallFunc_GetGlobalEventHandler_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_8 = Temp_int_Loop_Counter_Variable_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_9 = CallFunc_Array_Get_Item_9;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BossPortal.BP_BossPortal_C.OnAllGoatsTeleported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BossPortal_C::OnAllGoatsTeleported__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnAllGoatsTeleported__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BossPortal.BP_BossPortal_C.OnPlayerTeleported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BossPortal_C::OnPlayerTeleported__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BossPortal_C", "OnPlayerTeleported__DelegateSignature");

	Params::ABP_BossPortal_C_OnPlayerTeleported__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


