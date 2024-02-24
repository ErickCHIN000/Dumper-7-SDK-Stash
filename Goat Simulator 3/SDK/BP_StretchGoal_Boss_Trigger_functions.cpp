#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C
// (Actor)

class UClass* ABP_StretchGoal_Boss_Trigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StretchGoal_Boss_Trigger_C");

	return Clss;
}


// BP_StretchGoal_Boss_Trigger_C BP_StretchGoal_Boss_Trigger.Default__BP_StretchGoal_Boss_Trigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StretchGoal_Boss_Trigger_C* ABP_StretchGoal_Boss_Trigger_C::GetDefaultObj()
{
	static class ABP_StretchGoal_Boss_Trigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StretchGoal_Boss_Trigger_C*>(ABP_StretchGoal_Boss_Trigger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.IsReadyForActivation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCastleStretchGoal*        CallFunc_GetCurrentlyActiveGoal_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCastleStretchGoal*        CallFunc_GetCurrentlyActiveGoal_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyGoalUnlocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_StretchGoal_Boss_Trigger_C::IsReadyForActivation(bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue_1, bool CallFunc_IsAnyGoalUnlocking_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "IsReadyForActivation");

	Params::ABP_StretchGoal_Boss_Trigger_C_IsReadyForActivation_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentlyActiveGoal_ReturnValue = CallFunc_GetCurrentlyActiveGoal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.CallFunc_GetCurrentlyActiveGoal_ReturnValue_1 = CallFunc_GetCurrentlyActiveGoal_ReturnValue_1;
	Parms.CallFunc_IsAnyGoalUnlocking_ReturnValue = CallFunc_IsAnyGoalUnlocking_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.CanBeInteractedWith
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForActivation_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_StretchGoal_Boss_Trigger_C::CanBeInteractedWith(class AActor* SourceActor, bool CallFunc_IsReadyForActivation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "CanBeInteractedWith");

	Params::ABP_StretchGoal_Boss_Trigger_C_CanBeInteractedWith_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.CallFunc_IsReadyForActivation_ReturnValue = CallFunc_IsReadyForActivation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.GetInteractTextTitle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGPlayerController*         InteractingPlayerController                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              HoldDuration                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCastleStretchGoal*        CallFunc_GetCurrentlyActiveGoal_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// float                              CallFunc_GetRequiredHoldDuration_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)

class FText ABP_StretchGoal_Boss_Trigger_C::GetInteractTextTitle(class AGGPlayerController* InteractingPlayerController, float HoldDuration, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, float CallFunc_GetRequiredHoldDuration_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "GetInteractTextTitle");

	Params::ABP_StretchGoal_Boss_Trigger_C_GetInteractTextTitle_Params Parms{};

	Parms.InteractingPlayerController = InteractingPlayerController;
	Parms.HoldDuration = HoldDuration;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentlyActiveGoal_ReturnValue = CallFunc_GetCurrentlyActiveGoal_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_GetRequiredHoldDuration_ReturnValue = CallFunc_GetRequiredHoldDuration_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Interact
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeldFor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRequiredHoldDuration_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeInteractedWith_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCastleStretchGoal*        CallFunc_GetCurrentlyActiveGoal_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_StretchGoal_Boss_Trigger_C::Interact(class AActor* SourceActor, float HeldFor, float CallFunc_GetRequiredHoldDuration_ReturnValue, bool CallFunc_CanBeInteractedWith_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Interact");

	Params::ABP_StretchGoal_Boss_Trigger_C_Interact_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.HeldFor = HeldFor;
	Parms.CallFunc_GetRequiredHoldDuration_ReturnValue = CallFunc_GetRequiredHoldDuration_ReturnValue;
	Parms.CallFunc_CanBeInteractedWith_ReturnValue = CallFunc_CanBeInteractedWith_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentlyActiveGoal_ReturnValue = CallFunc_GetCurrentlyActiveGoal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetCanBeInteractedWith
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::SetCanBeInteractedWith(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetCanBeInteractedWith");

	Params::ABP_StretchGoal_Boss_Trigger_C_SetCanBeInteractedWith_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnRep_ShouldStretchGoalBeActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OnRep_ShouldStretchGoalBeActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnRep_ShouldStretchGoalBeActive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnRep_CanActivatePortal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OnRep_CanActivatePortal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnRep_CanActivatePortal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnRep_ShouldShowActiveFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OnRep_ShouldShowActiveFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnRep_ShouldShowActiveFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnRep_CanActivateStretchGoal
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OnRep_CanActivateStretchGoal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnRep_CanActivateStretchGoal");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Can Activate SG Button
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Should_ActivateSG                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasAlreadyInState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Set_Can_Activate_SG_Button(bool Should_ActivateSG, bool AnimateLids, bool* WasAlreadyInState, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Set Can Activate SG Button");

	Params::ABP_StretchGoal_Boss_Trigger_C_Set_Can_Activate_SG_Button_Params Parms{};

	Parms.Should_ActivateSG = Should_ActivateSG;
	Parms.AnimateLids = AnimateLids;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WasAlreadyInState != nullptr)
		*WasAlreadyInState = Parms.WasAlreadyInState;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Activateable Visuals SG
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Activateable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAnimateLids                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsActivatable                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Set_Activateable_Visuals_SG(bool Activateable, bool AnimateLids, bool ShouldAnimateLids, bool IsActivatable, bool CallFunc_GetIsLoaded_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Set Activateable Visuals SG");

	Params::ABP_StretchGoal_Boss_Trigger_C_Set_Activateable_Visuals_SG_Params Parms{};

	Parms.Activateable = Activateable;
	Parms.AnimateLids = AnimateLids;
	Parms.ShouldAnimateLids = ShouldAnimateLids;
	Parms.IsActivatable = IsActivatable;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Update Active Status
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGCastleStretchGoal*        CallFunc_GetCurrentlyActiveGoal_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Update_Active_Status(bool* Active, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AGGCastleStretchGoal* CallFunc_GetCurrentlyActiveGoal_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Update Active Status");

	Params::ABP_StretchGoal_Boss_Trigger_C_Update_Active_Status_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetCurrentlyActiveGoal_ReturnValue = CallFunc_GetCurrentlyActiveGoal_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetButtonActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::SetButtonActive(bool NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetButtonActive");

	Params::ABP_StretchGoal_Boss_Trigger_C_SetButtonActive_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetActiveFXEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldBeEnabled                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::SetActiveFXEnabled(bool bEnabled, bool ShouldBeEnabled, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetActiveFXEnabled");

	Params::ABP_StretchGoal_Boss_Trigger_C_SetActiveFXEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.ShouldBeEnabled = ShouldBeEnabled;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.UnlockTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::UnlockTrigger(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "UnlockTrigger");

	Params::ABP_StretchGoal_Boss_Trigger_C_UnlockTrigger_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.LockTrigger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::LockTrigger(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "LockTrigger");

	Params::ABP_StretchGoal_Boss_Trigger_C_LockTrigger_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetLidsOpened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionEnabled       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionEnabled       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::SetLidsOpened(bool Open, enum class ECollisionEnabled Temp_byte_Variable, enum class ECollisionEnabled Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ECollisionEnabled K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetLidsOpened");

	Params::ABP_StretchGoal_Boss_Trigger_C_SetLidsOpened_Params Parms{};

	Parms.Open = Open;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Activateable Visuals Boss
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PortalActivateable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShouldAnimateLids                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsPortalActivatable                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstance*           CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Set_Activateable_Visuals_Boss(bool PortalActivateable, bool AnimateLids, bool ShouldAnimateLids, bool IsPortalActivatable, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue, class UMaterialInstance* CallFunc_GetLoadedAsset_ReturnValue_1, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_2, bool CallFunc_GetIsLoaded_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Set Activateable Visuals Boss");

	Params::ABP_StretchGoal_Boss_Trigger_C_Set_Activateable_Visuals_Boss_Params Parms{};

	Parms.PortalActivateable = PortalActivateable;
	Parms.AnimateLids = AnimateLids;
	Parms.ShouldAnimateLids = ShouldAnimateLids;
	Parms.IsPortalActivatable = IsPortalActivatable;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_2 = CallFunc_GetLoadedAsset_ReturnValue_2;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Triggered Visuals Boss
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterial*                   CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterial*                   CallFunc_GetLoadedAsset_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Set_Triggered_Visuals_Boss(bool Active, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMaterial* CallFunc_GetLoadedAsset_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UMaterial* CallFunc_GetLoadedAsset_ReturnValue_2, bool CallFunc_GetIsLoaded_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Set Triggered Visuals Boss");

	Params::ABP_StretchGoal_Boss_Trigger_C_Set_Triggered_Visuals_Boss_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.CallFunc_GetIsLoaded_ReturnValue_1 = CallFunc_GetIsLoaded_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_2 = CallFunc_GetLoadedAsset_ReturnValue_2;
	Parms.CallFunc_GetIsLoaded_ReturnValue_2 = CallFunc_GetIsLoaded_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Set Can Activate Portal Button
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanActivatePortal                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AnimateLids                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasAlreadyInState                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Set_Can_Activate_Portal_Button(bool CanActivatePortal, bool AnimateLids, bool* WasAlreadyInState, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Set Can Activate Portal Button");

	Params::ABP_StretchGoal_Boss_Trigger_C_Set_Can_Activate_Portal_Button_Params Parms{};

	Parms.CanActivatePortal = CanActivatePortal;
	Parms.AnimateLids = AnimateLids;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WasAlreadyInState != nullptr)
		*WasAlreadyInState = Parms.WasAlreadyInState;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.DoesTriggerHavePlayer
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Has_Player                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               TriggerHasPlayer                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UPrimitiveComponent*> CallFunc_GetOverlappingComponents_OutOverlappingComponents       (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsGoat                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::DoesTriggerHavePlayer(class AGGGoat* Goat, bool* Has_Player, bool TriggerHasPlayer, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UPrimitiveComponent*>& CallFunc_GetOverlappingComponents_OutOverlappingComponents, int32 CallFunc_Array_Length_ReturnValue, class UPrimitiveComponent* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "DoesTriggerHavePlayer");

	Params::ABP_StretchGoal_Boss_Trigger_C_DoesTriggerHavePlayer_Params Parms{};

	Parms.Goat = Goat;
	Parms.TriggerHasPlayer = TriggerHasPlayer;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOverlappingComponents_OutOverlappingComponents = CallFunc_GetOverlappingComponents_OutOverlappingComponents;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsCompGoat_IsGoat = CallFunc_IsCompGoat_IsGoat;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent = CallFunc_IsCompGoat_IsCapsuleComponent;
	Parms.CallFunc_IsCompGoat_IsMeshComponent = CallFunc_IsCompGoat_IsMeshComponent;
	Parms.CallFunc_IsCompGoat_ReturnValue = CallFunc_IsCompGoat_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Player != nullptr)
		*Has_Player = Parms.Has_Player;

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OpenLid_Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OpenLid_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OpenLid_Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OpenLid_Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OpenLid_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OpenLid_Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnLoaded_55D6FF4846FB0812D869AC80B7004F02
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnLoaded_55D6FF4846FB0812D869AC80B7004F02(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnLoaded_55D6FF4846FB0812D869AC80B7004F02");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnLoaded_55D6FF4846FB0812D869AC80B7004F02_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnLoaded_6227C4B049F3B3A07665EE8A836EA64D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnLoaded_6227C4B049F3B3A07665EE8A836EA64D(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnLoaded_6227C4B049F3B3A07665EE8A836EA64D");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnLoaded_6227C4B049F3B3A07665EE8A836EA64D_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.ActivateTriggeredFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::ActivateTriggeredFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "ActivateTriggeredFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.DeactivateTriggeredFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::DeactivateTriggeredFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "DeactivateTriggeredFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_3_OnDynamicLoadingFinished__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UGGDynamicAssetHoldingComponent*DynAssetComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature(class UGGDynamicAssetHoldingComponent* DynAssetComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_GGDynamicAssetHolding_K2Node_ComponentBoundEvent_4_OnLostSignificance__DelegateSignature_Params Parms{};

	Parms.DynAssetComp = DynAssetComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.TeleportPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::TeleportPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "TeleportPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OpenLidTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OpenLidTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OpenLidTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.CloseLidsTimeline
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::CloseLidsTimeline()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "CloseLidsTimeline");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnCurrentGoalUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGCastleStretchGoal*        UpdatedGoal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnCurrentGoalUpdated(class AGGCastleStretchGoal* UpdatedGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnCurrentGoalUpdated");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnCurrentGoalUpdated_Params Parms{};

	Parms.UpdatedGoal = UpdatedGoal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetPlateCircleMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldUseActiveMaterial                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::SetPlateCircleMaterial(bool ShouldUseActiveMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetPlateCircleMaterial");

	Params::ABP_StretchGoal_Boss_Trigger_C_SetPlateCircleMaterial_Params Parms{};

	Parms.ShouldUseActiveMaterial = ShouldUseActiveMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetPlateEyeMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldUseActiveMaterial                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::SetPlateEyeMaterial(bool ShouldUseActiveMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetPlateEyeMaterial");

	Params::ABP_StretchGoal_Boss_Trigger_C_SetPlateEyeMaterial_Params Parms{};

	Parms.ShouldUseActiveMaterial = ShouldUseActiveMaterial;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.DisableCooldown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::DisableCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "DisableCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.ActivateCooldown
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::ActivateCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "ActivateCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.PlayActivationSound
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::PlayActivationSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "PlayActivationSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SetSounds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::SetSounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SetSounds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.PlayActiveLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::PlayActiveLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "PlayActiveLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.StopActiveLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::StopActiveLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "StopActiveLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Multicast_SetActiveFXEnabled
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StretchGoal_Boss_Trigger_C::Multicast_SetActiveFXEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Multicast_SetActiveFXEnabled");

	Params::ABP_StretchGoal_Boss_Trigger_C_Multicast_SetActiveFXEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Multicast_PlayActivationFX
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::Multicast_PlayActivationFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Multicast_PlayActivationFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_StretchGoal_Boss_Trigger_C::BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_BndEvt__BP_BossPortal_PlayerTrigger_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Multicast_ReplayBossSequence
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::Multicast_ReplayBossSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Multicast_ReplayBossSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnDoorOpeningSeqFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::OnDoorOpeningSeqFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnDoorOpeningSeqFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.Multicast_PadStepSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::Multicast_PadStepSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "Multicast_PadStepSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnCinematicStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelSequencePlayer*        Sequence                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnCinematicStarted(class ULevelSequencePlayer* Sequence)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnCinematicStarted");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnCinematicStarted_Params Parms{};

	Parms.Sequence = Sequence;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SeqForAllNearbyPlayers_OnFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::SeqForAllNearbyPlayers_OnFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SeqForAllNearbyPlayers_OnFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.SeqForAllNearbyPlayers_OnStop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StretchGoal_Boss_Trigger_C::SeqForAllNearbyPlayers_OnStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "SeqForAllNearbyPlayers_OnStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.ExecuteUbergraph_BP_StretchGoal_Boss_Trigger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGDynamicAssetHoldingComponent*K2Node_ComponentBoundEvent_DynAssetComp                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesTriggerHavePlayer_Has_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetPlayerControllerFromActor_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TeleportLoc_C*           K2Node_DynamicCast_AsBP_Teleport_Loc                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLoadingScreenParameters    K2Node_MakeStruct_LoadingScreenParameters                        (None)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTeleportParameters         K2Node_MakeStruct_TeleportParameters                             (NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AGGCastleStretchGoal*        K2Node_CustomEvent_UpdatedGoal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ShouldUseActiveMaterial_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShouldUseActiveMaterial                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UMaterialInstance>K2Node_Select_Default                                            (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bEnabled                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsLoaded_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGoatCastleSubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Active_Status_Active                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetLoadedAsset_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Active_Status_Active_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompGoat_IsGoat                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCompGoat_IsGoat_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsCapsuleComponent_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCompGoat_IsMeshComponent_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_IsCompGoat_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class AGGLevelSequenceActor*       CallFunc_CreateGGLevelSequencePlayer_OutActor                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_CreateGGLevelSequencePlayer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKeyValueBase               CallFunc_KeyValue_IntToKeyValue_ReturnValue                      (None)
// bool                               CallFunc_UpdateKeyValueData_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FColor                      K2Node_MakeStruct_Color                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTravelSettings             K2Node_MakeStruct_TravelSettings                                 (None)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundCue*                   CallFunc_GetLoadedAsset_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsLoaded_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGGoat*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class UGGGatherGoatsSubsystem*     CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasGatherEventWithID_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGPlayerController*         CallFunc_GetGGPlayerController_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGGGoat*                     Temp_object_Variable_2                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ULevelSequencePlayer*        K2Node_CustomEvent_Sequence                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGLevelTravelSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGGlobalEventHandler*       CallFunc_GetGlobalEventHandler_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UMaterialInstance>K2Node_Select_Default_1                                          (HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           K2Node_DynamicCast_AsMaterial_Instance_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_StretchGoal_Boss_Trigger_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::ExecuteUbergraph_BP_StretchGoal_Boss_Trigger(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp_1, class UGGDynamicAssetHoldingComponent* K2Node_ComponentBoundEvent_DynAssetComp, bool CallFunc_DoesTriggerHavePlayer_Has_Player, bool CallFunc_HasAuthority_ReturnValue_1, class AGGGoat* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AGGPlayerController* CallFunc_GetPlayerControllerFromActor_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ABP_TeleportLoc_C* K2Node_DynamicCast_AsBP_Teleport_Loc, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLoadingScreenParameters& K2Node_MakeStruct_LoadingScreenParameters, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FTeleportParameters& K2Node_MakeStruct_TeleportParameters, float CallFunc_Lerp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AGGCastleStretchGoal* K2Node_CustomEvent_UpdatedGoal, bool K2Node_CustomEvent_ShouldUseActiveMaterial_1, bool K2Node_CustomEvent_ShouldUseActiveMaterial, TSoftObjectPtr<class UMaterialInstance> K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_CustomEvent_bEnabled, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsLoaded_ReturnValue, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_2, class UGGGoatCastleSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded_1, bool CallFunc_Update_Active_Status_Active, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_3, class UParticleSystem* CallFunc_GetLoadedAsset_ReturnValue_4, bool CallFunc_Update_Active_Status_Active_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UObject* Temp_object_Variable, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsCompGoat_IsGoat, bool CallFunc_IsCompGoat_IsCapsuleComponent, bool CallFunc_IsCompGoat_IsMeshComponent, class AGGGoat* CallFunc_IsCompGoat_ReturnValue, bool CallFunc_IsCompGoat_IsGoat_1, bool CallFunc_IsCompGoat_IsCapsuleComponent_1, bool CallFunc_IsCompGoat_IsMeshComponent_1, class AGGGoat* CallFunc_IsCompGoat_ReturnValue_1, bool CallFunc_Array_RemoveItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AGGLevelSequenceActor* CallFunc_CreateGGLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateGGLevelSequencePlayer_ReturnValue, const struct FKeyValueBase& CallFunc_KeyValue_IntToKeyValue_ReturnValue, bool CallFunc_UpdateKeyValueData_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FColor& K2Node_MakeStruct_Color, bool CallFunc_Less_IntInt_ReturnValue, const struct FTravelSettings& K2Node_MakeStruct_TravelSettings, bool CallFunc_IsValid_ReturnValue_3, class USoundCue* CallFunc_GetLoadedAsset_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_4, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, bool CallFunc_GetIsLoaded_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_1, class AGGGoat* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class UGGGatherGoatsSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_HasGatherEventWithID_ReturnValue, class AGGGoat* CallFunc_Array_Get_Item_3, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class AGGPlayerController* CallFunc_GetGGPlayerController_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class AGGGoat* Temp_object_Variable_1, bool CallFunc_Array_RemoveItem_ReturnValue_1, class AGGGoat* Temp_object_Variable_2, bool CallFunc_Array_RemoveItem_ReturnValue_2, class ULevelSequencePlayer* K2Node_CustomEvent_Sequence, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_1, class UGGLevelTravelSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue_2, bool Temp_bool_Variable_1, TSoftObjectPtr<class UMaterialInstance> K2Node_Select_Default_1, class UObject* Temp_object_Variable_3, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance_1, bool K2Node_DynamicCast_bSuccess_2, class ABP_StretchGoal_Boss_Trigger_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class UObject* K2Node_CustomEvent_Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "ExecuteUbergraph_BP_StretchGoal_Boss_Trigger");

	Params::ABP_StretchGoal_Boss_Trigger_C_ExecuteUbergraph_BP_StretchGoal_Boss_Trigger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp_1 = K2Node_ComponentBoundEvent_DynAssetComp_1;
	Parms.K2Node_ComponentBoundEvent_DynAssetComp = K2Node_ComponentBoundEvent_DynAssetComp;
	Parms.CallFunc_DoesTriggerHavePlayer_Has_Player = CallFunc_DoesTriggerHavePlayer_Has_Player;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerControllerFromActor_ReturnValue = CallFunc_GetPlayerControllerFromActor_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Teleport_Loc = K2Node_DynamicCast_AsBP_Teleport_Loc;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_LoadingScreenParameters = K2Node_MakeStruct_LoadingScreenParameters;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_TeleportParameters = K2Node_MakeStruct_TeleportParameters;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_UpdatedGoal = K2Node_CustomEvent_UpdatedGoal;
	Parms.K2Node_CustomEvent_ShouldUseActiveMaterial_1 = K2Node_CustomEvent_ShouldUseActiveMaterial_1;
	Parms.K2Node_CustomEvent_ShouldUseActiveMaterial = K2Node_CustomEvent_ShouldUseActiveMaterial;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_HasAuthority_ReturnValue_2 = CallFunc_HasAuthority_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue = CallFunc_GetLoadedAsset_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_1 = CallFunc_GetLoadedAsset_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_bEnabled = K2Node_CustomEvent_bEnabled;
	Parms.CallFunc_HasAuthority_ReturnValue_3 = CallFunc_HasAuthority_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetIsLoaded_ReturnValue = CallFunc_GetIsLoaded_ReturnValue;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_2 = CallFunc_GetLoadedAsset_ReturnValue_2;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_Update_Active_Status_Active = CallFunc_Update_Active_Status_Active;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_3 = CallFunc_GetLoadedAsset_ReturnValue_3;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_4 = CallFunc_GetLoadedAsset_ReturnValue_4;
	Parms.CallFunc_Update_Active_Status_Active_1 = CallFunc_Update_Active_Status_Active_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsMaterial_Instance = K2Node_DynamicCast_AsMaterial_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent_1 = K2Node_ComponentBoundEvent_OverlappedComponent_1;
	Parms.K2Node_ComponentBoundEvent_OtherActor_1 = K2Node_ComponentBoundEvent_OtherActor_1;
	Parms.K2Node_ComponentBoundEvent_OtherComp_1 = K2Node_ComponentBoundEvent_OtherComp_1;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex_1 = K2Node_ComponentBoundEvent_OtherBodyIndex_1;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.CallFunc_IsCompGoat_IsGoat = CallFunc_IsCompGoat_IsGoat;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent = CallFunc_IsCompGoat_IsCapsuleComponent;
	Parms.CallFunc_IsCompGoat_IsMeshComponent = CallFunc_IsCompGoat_IsMeshComponent;
	Parms.CallFunc_IsCompGoat_ReturnValue = CallFunc_IsCompGoat_ReturnValue;
	Parms.CallFunc_IsCompGoat_IsGoat_1 = CallFunc_IsCompGoat_IsGoat_1;
	Parms.CallFunc_IsCompGoat_IsCapsuleComponent_1 = CallFunc_IsCompGoat_IsCapsuleComponent_1;
	Parms.CallFunc_IsCompGoat_IsMeshComponent_1 = CallFunc_IsCompGoat_IsMeshComponent_1;
	Parms.CallFunc_IsCompGoat_ReturnValue_1 = CallFunc_IsCompGoat_ReturnValue_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_CreateGGLevelSequencePlayer_OutActor = CallFunc_CreateGGLevelSequencePlayer_OutActor;
	Parms.CallFunc_CreateGGLevelSequencePlayer_ReturnValue = CallFunc_CreateGGLevelSequencePlayer_ReturnValue;
	Parms.CallFunc_KeyValue_IntToKeyValue_ReturnValue = CallFunc_KeyValue_IntToKeyValue_ReturnValue;
	Parms.CallFunc_UpdateKeyValueData_ReturnValue = CallFunc_UpdateKeyValueData_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_Color = K2Node_MakeStruct_Color;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_TravelSettings = K2Node_MakeStruct_TravelSettings;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetLoadedAsset_ReturnValue_5 = CallFunc_GetLoadedAsset_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_GetIsLoaded_ReturnValue_1 = CallFunc_GetIsLoaded_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_4 = CallFunc_HasAuthority_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_HasGatherEventWithID_ReturnValue = CallFunc_HasGatherEventWithID_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetGGPlayerController_ReturnValue = CallFunc_GetGGPlayerController_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.K2Node_CustomEvent_Sequence = K2Node_CustomEvent_Sequence;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue = CallFunc_GetGlobalEventHandler_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_1 = CallFunc_GetGlobalEventHandler_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGlobalEventHandler_ReturnValue_2 = CallFunc_GetGlobalEventHandler_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_DynamicCast_AsMaterial_Instance_1 = K2Node_DynamicCast_AsMaterial_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnInteracted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnInteracted__DelegateSignature(class AActor* SourceActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnInteracted__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnInteracted__DelegateSignature_Params Parms{};

	Parms.SourceActor = SourceActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnGoatTeleported__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnGoatTeleported__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnGoatTeleported__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnGoatTeleported__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnPlayerLeftTrigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnPlayerLeftTrigger__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnPlayerLeftTrigger__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnPlayerLeftTrigger__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StretchGoal_Boss_Trigger.BP_StretchGoal_Boss_Trigger_C.OnPlayerEnteredTrigger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGGGoat*                     Goat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StretchGoal_Boss_Trigger_C::OnPlayerEnteredTrigger__DelegateSignature(class AGGGoat* Goat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StretchGoal_Boss_Trigger_C", "OnPlayerEnteredTrigger__DelegateSignature");

	Params::ABP_StretchGoal_Boss_Trigger_C_OnPlayerEnteredTrigger__DelegateSignature_Params Parms{};

	Parms.Goat = Goat;

	UObject::ProcessEvent(Func, &Parms);

}

}


