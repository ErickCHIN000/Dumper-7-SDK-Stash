#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C
// (None)

class UClass* UBP_ActionableBehaviour_Binoculars_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionableBehaviour_Binoculars_C");

	return Clss;
}


// BP_ActionableBehaviour_Binoculars_C BP_ActionableBehaviour_Binoculars.Default__BP_ActionableBehaviour_Binoculars_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionableBehaviour_Binoculars_C* UBP_ActionableBehaviour_Binoculars_C::GetDefaultObj()
{
	static class UBP_ActionableBehaviour_Binoculars_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionableBehaviour_Binoculars_C*>(UBP_ActionableBehaviour_Binoculars_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.SetOverlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetBPIcarusPlayerController_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_C*        K2Node_DynamicCast_AsUMG_User_Interface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Binoculars_C::SetOverlay(enum class ESlateVisibility InVisibility, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetBPIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UUMG_UserInterface_C* K2Node_DynamicCast_AsUMG_User_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "SetOverlay");

	Params::UBP_ActionableBehaviour_Binoculars_C_SetOverlay_Params Parms{};

	Parms.InVisibility = InVisibility;
	Parms.CallFunc_GetBPIcarusPlayerController_ReturnValue = CallFunc_GetBPIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_User_Interface = K2Node_DynamicCast_AsUMG_User_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.SetFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FOV                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Binoculars_C::SetFOV(float FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "SetFOV");

	Params::UBP_ActionableBehaviour_Binoculars_C_SetFOV_Params Parms{};

	Parms.FOV = FOV;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwningActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_ActionableBehaviour_Binoculars_C::Setup(class AActor* OwningActor, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "Setup");

	Params::UBP_ActionableBehaviour_Binoculars_C_Setup_Params Parms{};

	Parms.OwningActor = OwningActor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.PerformAction
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      InvokingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    OnActionType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      ActionTrigger                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Binoculars_C::PerformAction(class AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "PerformAction");

	Params::UBP_ActionableBehaviour_Binoculars_C_PerformAction_Params Parms{};

	Parms.InvokingActor = InvokingActor;
	Parms.OnActionType = OnActionType;
	Parms.ActionTrigger = ActionTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Binoculars_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "ReceiveEndPlay");

	Params::UBP_ActionableBehaviour_Binoculars_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_ActionableBehaviour_Binoculars_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ActionableBehaviour_Binoculars.BP_ActionableBehaviour_Binoculars_C.ExecuteUbergraph_BP_ActionableBehaviour_Binoculars
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_InvokingActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_Event_OnActionType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_Event_ActionTrigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFieldOfView_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionableBehaviour_Binoculars_C::ExecuteUbergraph_BP_ActionableBehaviour_Binoculars(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class AActor* K2Node_Event_InvokingActor, enum class EActionableEventType K2Node_Event_OnActionType, enum class EActionableTrigger K2Node_Event_ActionTrigger, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetFieldOfView_ReturnValue, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings_1, float CallFunc_GetFieldOfView_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ActionableBehaviour_Binoculars_C", "ExecuteUbergraph_BP_ActionableBehaviour_Binoculars");

	Params::UBP_ActionableBehaviour_Binoculars_C_ExecuteUbergraph_BP_ActionableBehaviour_Binoculars_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_InvokingActor = K2Node_Event_InvokingActor;
	Parms.K2Node_Event_OnActionType = K2Node_Event_OnActionType;
	Parms.K2Node_Event_ActionTrigger = K2Node_Event_ActionTrigger;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings_1 = CallFunc_Get_Icarus_Game_User_Settings_Settings_1;
	Parms.CallFunc_GetFieldOfView_ReturnValue_1 = CallFunc_GetFieldOfView_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


