#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C
// (Actor, Pawn)

class UClass* ABP_IcarusPlayerCharacterSurvival_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusPlayerCharacterSurvival_C");

	return Clss;
}


// BP_IcarusPlayerCharacterSurvival_C BP_IcarusPlayerCharacterSurvival.Default__BP_IcarusPlayerCharacterSurvival_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IcarusPlayerCharacterSurvival_C* ABP_IcarusPlayerCharacterSurvival_C::GetDefaultObj()
{
	static class ABP_IcarusPlayerCharacterSurvival_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IcarusPlayerCharacterSurvival_C*>(ABP_IcarusPlayerCharacterSurvival_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateCamera
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     InLocation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    InRotation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              InFOV                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceUpdate                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     OutLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              OutFOV                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IICameraInterface_C>CallFunc_UpdateCamera_self_CastInput                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_UpdateCamera_OutLocation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_UpdateCamera_OutRotation                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_UpdateCamera_OutFOV                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UpdateCamera_Return                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateCamera(const struct FVector& InLocation, const struct FRotator& InRotation, float InFOV, bool ForceUpdate, struct FVector* OutLocation, struct FRotator* OutRotation, float* OutFOV, bool* Return, TScriptInterface<class IICameraInterface_C> CallFunc_UpdateCamera_self_CastInput, const struct FVector& CallFunc_UpdateCamera_OutLocation, const struct FRotator& CallFunc_UpdateCamera_OutRotation, float CallFunc_UpdateCamera_OutFOV, bool CallFunc_UpdateCamera_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateCamera");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateCamera_Params Parms{};

	Parms.InLocation = InLocation;
	Parms.InRotation = InRotation;
	Parms.InFOV = InFOV;
	Parms.ForceUpdate = ForceUpdate;
	Parms.CallFunc_UpdateCamera_self_CastInput = CallFunc_UpdateCamera_self_CastInput;
	Parms.CallFunc_UpdateCamera_OutLocation = CallFunc_UpdateCamera_OutLocation;
	Parms.CallFunc_UpdateCamera_OutRotation = CallFunc_UpdateCamera_OutRotation;
	Parms.CallFunc_UpdateCamera_OutFOV = CallFunc_UpdateCamera_OutFOV;
	Parms.CallFunc_UpdateCamera_Return = CallFunc_UpdateCamera_Return;

	UObject::ProcessEvent(Func, &Parms);

	if (OutLocation != nullptr)
		*OutLocation = std::move(Parms.OutLocation);

	if (OutRotation != nullptr)
		*OutRotation = std::move(Parms.OutRotation);

	if (OutFOV != nullptr)
		*OutFOV = Parms.OutFOV;

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetLightSlotItemActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusItem*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusItem* ABP_IcarusPlayerCharacterSurvival_C::GetLightSlotItemActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetLightSlotItemActor");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetLightSlotItemActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.AttemptHideShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::AttemptHideShield(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemMatchesQuery_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "AttemptHideShield");

	Params::ABP_IcarusPlayerCharacterSurvival_C_AttemptHideShield_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue_1 = CallFunc_ItemMatchesQuery_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue_2 = CallFunc_ItemMatchesQuery_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Miasma Check
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UModifierStateComponent*     CallFunc_GetModifierStateByUID_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindItemSlotInfo>   CallFunc_FindItemsWithTag_ReturnValue                            (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFindItemSlotInfo           CallFunc_Array_Get_Item                                          (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Miasma_Check(int32 Count, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class UModifierStateComponent* CallFunc_GetModifierStateByUID_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, TArray<struct FFindItemSlotInfo>& CallFunc_FindItemsWithTag_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFindItemSlotInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Miasma Check");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Miasma_Check_Params Parms{};

	Parms.Count = Count;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetModifierStateByUID_ReturnValue = CallFunc_GetModifierStateByUID_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_FindItemsWithTag_ReturnValue = CallFunc_FindItemsWithTag_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetCurrentUtilitySlotActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusItem*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusItem* ABP_IcarusPlayerCharacterSurvival_C::GetCurrentUtilitySlotActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetCurrentUtilitySlotActor");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetCurrentUtilitySlotActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetSecondaryFocusedItemSlot
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_IcarusPlayerCharacterSurvival_C::GetSecondaryFocusedItemSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetSecondaryFocusedItemSlot");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetSecondaryFocusedItemSlot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ToggleCrouchLedgeSafety
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::ToggleCrouchLedgeSafety(bool Value, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ToggleCrouchLedgeSafety");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ToggleCrouchLedgeSafety_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Get Underwater PP Settings Component
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      WaterActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       Component                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasTag_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Night_Time_NightTime                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Get_Underwater_PP_Settings_Component(class AActor* WaterActor, class UPostProcessComponent** Component, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasTag_ReturnValue_1, bool CallFunc_Is_Night_Time_NightTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Get Underwater PP Settings Component");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Get_Underwater_PP_Settings_Component_Params Parms{};

	Parms.WaterActor = WaterActor;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue_1 = CallFunc_HasTag_ReturnValue_1;
	Parms.CallFunc_Is_Night_Time_NightTime = CallFunc_Is_Night_Time_NightTime;

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Is Night Time
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               NightTime                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeOfDay_Total                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeOfDay_Normalized                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeOfDay_Realtime                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              CallFunc_FFloor64_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_Int64Int64_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_Int64Int64_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Is_Night_Time(bool* NightTime, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_GetTimeOfDay_Total, float CallFunc_GetTimeOfDay_Normalized, float CallFunc_GetTimeOfDay_Realtime, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, bool CallFunc_LessEqual_Int64Int64_ReturnValue, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Is Night Time");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Is_Night_Time_Params Parms{};

	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetTimeOfDay_Total = CallFunc_GetTimeOfDay_Total;
	Parms.CallFunc_GetTimeOfDay_Normalized = CallFunc_GetTimeOfDay_Normalized;
	Parms.CallFunc_GetTimeOfDay_Realtime = CallFunc_GetTimeOfDay_Realtime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FFloor64_ReturnValue = CallFunc_FFloor64_ReturnValue;
	Parms.CallFunc_LessEqual_Int64Int64_ReturnValue = CallFunc_LessEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_GreaterEqual_Int64Int64_ReturnValue = CallFunc_GreaterEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NightTime != nullptr)
		*NightTime = Parms.NightTime;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetUnderwaterPPEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      WaterActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostProcessComponent*       CallFunc_Get_Underwater_PP_Settings_Component_Component          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetUnderwaterPPEnabled(bool Enabled, class AActor* WaterActor, class UPostProcessComponent* CallFunc_Get_Underwater_PP_Settings_Component_Component, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetUnderwaterPPEnabled");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetUnderwaterPPEnabled_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.WaterActor = WaterActor;
	Parms.CallFunc_Get_Underwater_PP_Settings_Component_Component = CallFunc_Get_Underwater_PP_Settings_Component_Component;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TraceForCameraUnderwater
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUnderwater                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      HitActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::TraceForCameraUnderwater(bool* IsUnderwater, class AActor** HitActor, TArray<class AActor*>& Temp_object_Variable, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TraceForCameraUnderwater");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TraceForCameraUnderwater_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (IsUnderwater != nullptr)
		*IsUnderwater = Parms.IsUnderwater;

	if (HitActor != nullptr)
		*HitActor = Parms.HitActor;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TickWaterPP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TraceForCameraUnderwater_IsUnderwater                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_TraceForCameraUnderwater_HitActor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetBPIcarusPlayerController_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TickWaterPP(bool CallFunc_TraceForCameraUnderwater_IsUnderwater, class AActor* CallFunc_TraceForCameraUnderwater_HitActor, bool CallFunc_NotEqual_BoolBool_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetBPIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TickWaterPP");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TickWaterPP_Params Parms{};

	Parms.CallFunc_TraceForCameraUnderwater_IsUnderwater = CallFunc_TraceForCameraUnderwater_IsUnderwater;
	Parms.CallFunc_TraceForCameraUnderwater_HitActor = CallFunc_TraceForCameraUnderwater_HitActor;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetBPIcarusPlayerController_ReturnValue = CallFunc_GetBPIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_OffHandFocusedSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_OffHandFocusedSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_OffHandFocusedSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.DestroySecondaryItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFocusableComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::DestroySecondaryItem(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths, class UFocusableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "DestroySecondaryItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_DestroySecondaryItem_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InitialisationComplete
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// class UProspectSubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTestProspectActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::InitialisationComplete(bool CallFunc_Not_PreBool_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_IsTestProspectActive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InitialisationComplete");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InitialisationComplete_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_IsTestProspectActive_ReturnValue = CallFunc_IsTestProspectActive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ResetOffHandFocusedSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::ResetOffHandFocusedSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ResetOffHandFocusedSlot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetOffHandFocusedSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OffHandFocusedSlot                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerCharacterSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::GetOffHandFocusedSlot(int32* OffHandFocusedSlot, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetOffHandFocusedSlot");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetOffHandFocusedSlot_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (OffHandFocusedSlot != nullptr)
		*OffHandFocusedSlot = Parms.OffHandFocusedSlot;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetCurrentSecondarySlotActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusItem*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusItem* ABP_IcarusPlayerCharacterSurvival_C::GetCurrentSecondarySlotActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetCurrentSecondarySlotActor");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetCurrentSecondarySlotActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UnfocusingLogic
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Future_Item_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ToDestroy                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   Future_Item_Data                                                 (Parm, OutParm, ContainsInstancedReference)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Can_Equip_with_Off_Hand_IsLHWep                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::UnfocusingLogic(int32 Future_Item_Location, bool* ToDestroy, struct FItemData* Future_Item_Data, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Can_Equip_with_Off_Hand_IsLHWep, bool CallFunc_ItemMatchesQuery_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UnfocusingLogic");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UnfocusingLogic_Params Parms{};

	Parms.Future_Item_Location = Future_Item_Location;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Can_Equip_with_Off_Hand_IsLHWep = CallFunc_Can_Equip_with_Off_Hand_IsLHWep;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue_1 = CallFunc_ItemMatchesQuery_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ToDestroy != nullptr)
		*ToDestroy = Parms.ToDestroy;

	if (Future_Item_Data != nullptr)
		*Future_Item_Data = std::move(Parms.Future_Item_Data);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Can Equip with Off Hand
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               IsLHWep                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusableData              CallFunc_GetFocusableStruct_Focusable                            (None)
// enum class EValid                  CallFunc_GetFocusableStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Can_Equip_with_Off_Hand(struct FItemData& ItemData, bool* IsLHWep, bool CallFunc_ItemMatchesQuery_ReturnValue, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFocusableData& CallFunc_GetFocusableStruct_Focusable, enum class EValid CallFunc_GetFocusableStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Can Equip with Off Hand");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Can_Equip_with_Off_Hand_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetFocusableStruct_Focusable = CallFunc_GetFocusableStruct_Focusable;
	Parms.CallFunc_GetFocusableStruct_Paths = CallFunc_GetFocusableStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLHWep != nullptr)
		*IsLHWep = Parms.IsLHWep;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_SecondaryFocusedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_SecondaryFocusedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_SecondaryFocusedItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SurfaceIsLiquid
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPhysicalSurface        Surface                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLiquid                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SurfaceIsLiquid(enum class EPhysicalSurface Surface, bool* IsLiquid, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SurfaceIsLiquid");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SurfaceIsLiquid_Params Parms{};

	Parms.Surface = Surface;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsLiquid != nullptr)
		*IsLiquid = Parms.IsLiquid;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetCurrentUtilityActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusItem*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusItem* ABP_IcarusPlayerCharacterSurvival_C::GetCurrentUtilityActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetCurrentUtilityActor");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetCurrentUtilityActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateLastGroundedLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTerrainAnchorValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMovementBaseActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALandscapeProxy*             K2Node_DynamicCast_AsLandscape_Proxy                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALandscapeStreamingProxy*    K2Node_DynamicCast_AsLandscape_Streaming_Proxy                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateLastGroundedLocation(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTerrainAnchorValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetMovementBaseActor_ReturnValue, class ALandscapeProxy* K2Node_DynamicCast_AsLandscape_Proxy, bool K2Node_DynamicCast_bSuccess, class ALandscapeStreamingProxy* K2Node_DynamicCast_AsLandscape_Streaming_Proxy, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateLastGroundedLocation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateLastGroundedLocation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsTerrainAnchorValid_ReturnValue = CallFunc_IsTerrainAnchorValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetMovementBaseActor_ReturnValue = CallFunc_GetMovementBaseActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsLandscape_Proxy = K2Node_DynamicCast_AsLandscape_Proxy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsLandscape_Streaming_Proxy = K2Node_DynamicCast_AsLandscape_Streaming_Proxy;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.CheckPlayerFallingOutOfWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              MinimumTimeBetweenGroundedTeleports                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeSpentFalling                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FallTimeBeforeTeleport                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTerrainAnchorValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               CallFunc_NotEqualExactly_VectorVector_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue_1                         (None)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPointBelowLevel_BelowLevel                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::CheckPlayerFallingOutOfWorld(float MinimumTimeBetweenGroundedTeleports, float TimeSpentFalling, float FallTimeBeforeTeleport, bool CallFunc_IsTerrainAnchorValid_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Conv_ObjectToText_ReturnValue_1, const struct FVector& Temp_wildcard_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_IsPointBelowLevel_BelowLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "CheckPlayerFallingOutOfWorld");

	Params::ABP_IcarusPlayerCharacterSurvival_C_CheckPlayerFallingOutOfWorld_Params Parms{};

	Parms.MinimumTimeBetweenGroundedTeleports = MinimumTimeBetweenGroundedTeleports;
	Parms.TimeSpentFalling = TimeSpentFalling;
	Parms.FallTimeBeforeTeleport = FallTimeBeforeTeleport;
	Parms.CallFunc_IsTerrainAnchorValid_ReturnValue = CallFunc_IsTerrainAnchorValid_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_2 = CallFunc_GetGameTimeInSeconds_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation = CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_NotEqualExactly_VectorVector_ReturnValue = CallFunc_NotEqualExactly_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue_1 = CallFunc_Conv_ObjectToText_ReturnValue_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_IsPointBelowLevel_BelowLevel = CallFunc_IsPointBelowLevel_BelowLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayArmourBrokeSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayArmourBrokeSound(const struct FItemsStaticRowHandle& Item, class FName Temp_name_Variable, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FName Temp_name_Variable_1, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool Temp_bool_Variable_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_Select_Default, class USceneComponent* K2Node_Select_Default_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayArmourBrokeSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayArmourBrokeSound_Params Parms{};

	Parms.Item = Item;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.HasItemInLightSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasItemInLightSlot                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::HasItemInLightSlot(bool* HasItemInLightSlot, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "HasItemInLightSlot");

	Params::ABP_IcarusPlayerCharacterSurvival_C_HasItemInLightSlot_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasItemInLightSlot != nullptr)
		*HasItemInLightSlot = Parms.HasItemInLightSlot;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Update Light Slot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// TScriptInterface<class IBPI_LightSlotAttachInfoProvider_C>K2Node_DynamicCast_AsBPI_Light_Slot_Attach_Info_Provider         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ELightSlotAttachPoint   CallFunc_GetLightSlotAttachPoint_AttachPoint                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMeshableData               CallFunc_GetMeshableData_MeshableData                            (None)
// enum class EDataValid              CallFunc_GetMeshableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetRootMeshComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Update_Light_Slot(const struct FItemData& ItemData, TScriptInterface<class IBPI_LightSlotAttachInfoProvider_C> K2Node_DynamicCast_AsBPI_Light_Slot_Attach_Info_Provider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, enum class ELightSlotAttachPoint CallFunc_GetLightSlotAttachPoint_AttachPoint, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Update Light Slot");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Update_Light_Slot_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.K2Node_DynamicCast_AsBPI_Light_Slot_Attach_Info_Provider = K2Node_DynamicCast_AsBPI_Light_Slot_Attach_Info_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_GetLightSlotAttachPoint_AttachPoint = CallFunc_GetLightSlotAttachPoint_AttachPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetMeshableData_MeshableData = CallFunc_GetMeshableData_MeshableData;
	Parms.CallFunc_GetMeshableData_Paths = CallFunc_GetMeshableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetRootMeshComponent_ReturnValue = CallFunc_GetRootMeshComponent_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateBackpackVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class USkeletalMeshComponent*>BackpackMeshes                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourComponentData        CallFunc_Map_Find_Value                                          (ContainsInstancedReference)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourRowHandle            CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_GetArmourStruct_Armour                                  (None)
// enum class EValid                  CallFunc_GetArmourStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateBackpackVisibility(const TArray<class USkeletalMeshComponent*>& BackpackMeshes, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<int32>& CallFunc_Map_Keys_Keys, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Array_Get_Item_1, const struct FArmourComponentData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FArmourRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, const struct FArmourData& CallFunc_GetArmourStruct_Armour, enum class EValid CallFunc_GetArmourStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateBackpackVisibility");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateBackpackVisibility_Params Parms{};

	Parms.BackpackMeshes = BackpackMeshes;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetArmourStruct_Armour = CallFunc_GetArmourStruct_Armour;
	Parms.CallFunc_GetArmourStruct_Paths = CallFunc_GetArmourStruct_Paths;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_BackpackMeshHidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_BackpackMeshHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_BackpackMeshHidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TryHideBackpackMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowBackpack                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USkeletalMeshComponent*>BackpackMeshes                                                   (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTagQueriesRowHandle        CallFunc_MakeLiteralTagQueries_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFindItemSlotInfo>   CallFunc_GetItems_ReturnValue                                    (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TryHideBackpackMesh(bool ShowBackpack, const TArray<class USkeletalMeshComponent*>& BackpackMeshes, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_1, bool CallFunc_ItemMatchesQuery_ReturnValue_1, const struct FTagQueriesRowHandle& CallFunc_MakeLiteralTagQueries_ReturnValue, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFindItemSlotInfo>& CallFunc_GetItems_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TryHideBackpackMesh");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TryHideBackpackMesh_Params Parms{};

	Parms.ShowBackpack = ShowBackpack;
	Parms.BackpackMeshes = BackpackMeshes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue_1 = CallFunc_ItemMatchesQuery_ReturnValue_1;
	Parms.CallFunc_MakeLiteralTagQueries_ReturnValue = CallFunc_MakeLiteralTagQueries_ReturnValue;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItems_ReturnValue = CallFunc_GetItems_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.HasCraftingRequirements
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               FailedFlagCheck                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleNone_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFlagsMultiRowHandle        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// enum class EFlagsTableType         CallFunc_Break_OutEnum                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Break_OutName                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterFlagsRowHandle    CallFunc_MakeCharacterFlags_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFlagSubsystem*              CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUnlockAllRecipesEnabled_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_Const_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface_Const* CallFunc_GetModel_Const_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentModelData            CallFunc_GetTalentState_OutData                                  (NoDestructor)
// bool                               CallFunc_GetTalentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasCharacterFlagPlayer_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::HasCraftingRequirements(const struct FTalentsRowHandle& Talent, bool FailedFlagCheck, int32 Temp_int_Loop_Counter_Variable, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsRowHandleNone_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFlagsMultiRowHandle& CallFunc_Array_Get_Item, enum class EFlagsTableType CallFunc_Break_OutEnum, class FName CallFunc_Break_OutName, const struct FCharacterFlagsRowHandle& CallFunc_MakeCharacterFlags_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UFlagSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_IsUnlockAllRecipesEnabled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanOR_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_Const_self_CastInput, class UTalentModelInterface_Const* CallFunc_GetModel_Const_ReturnValue, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue, bool CallFunc_HasCharacterFlagPlayer_ReturnValue, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "HasCraftingRequirements");

	Params::ABP_IcarusPlayerCharacterSurvival_C_HasCraftingRequirements_Params Parms{};

	Parms.Talent = Talent;
	Parms.FailedFlagCheck = FailedFlagCheck;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsRowHandleNone_ReturnValue = CallFunc_IsRowHandleNone_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Break_OutEnum = CallFunc_Break_OutEnum;
	Parms.CallFunc_Break_OutName = CallFunc_Break_OutName;
	Parms.CallFunc_MakeCharacterFlags_ReturnValue = CallFunc_MakeCharacterFlags_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsUnlockAllRecipesEnabled_ReturnValue = CallFunc_IsUnlockAllRecipesEnabled_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetModel_Const_self_CastInput = CallFunc_GetModel_Const_self_CastInput;
	Parms.CallFunc_GetModel_Const_ReturnValue = CallFunc_GetModel_Const_ReturnValue;
	Parms.CallFunc_GetTalentState_OutData = CallFunc_GetTalentState_OutData;
	Parms.CallFunc_GetTalentState_ReturnValue = CallFunc_GetTalentState_ReturnValue;
	Parms.CallFunc_HasCharacterFlagPlayer_ReturnValue = CallFunc_HasCharacterFlagPlayer_ReturnValue;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetThermalVisionActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::GetThermalVisionActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetThermalVisionActive");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetThermalVisionActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventoryID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// struct FInventoryIDEnum            CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FItemData ABP_IcarusPlayerCharacterSurvival_C::GetItem(int32 InventoryID, int32 InventorySlot, const struct FInventoryIDEnum& CallFunc_IntToStruct_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetItem_Params Parms{};

	Parms.InventoryID = InventoryID;
	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetLoadout
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemData>           ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<struct FItemData>           CallFunc_GetLoadout_ReturnValue                                  (ReferenceParm, ContainsInstancedReference)

TArray<struct FItemData> ABP_IcarusPlayerCharacterSurvival_C::GetLoadout(TArray<struct FItemData>& CallFunc_GetLoadout_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetLoadout");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetLoadout_Params Parms{};

	Parms.CallFunc_GetLoadout_ReturnValue = CallFunc_GetLoadout_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFirstPersonCamera
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UCameraComponent*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UCameraComponent* ABP_IcarusPlayerCharacterSurvival_C::GetFirstPersonCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFirstPersonCamera");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFirstPersonCamera_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetCurrentInventoryWeight
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_IcarusPlayerCharacterSurvival_C::GetCurrentInventoryWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetCurrentInventoryWeight");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetCurrentInventoryWeight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetItemManipulationComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UItemManipulationComponent*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UItemManipulationComponent* ABP_IcarusPlayerCharacterSurvival_C::GetItemManipulationComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetItemManipulationComponent");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetItemManipulationComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Debug_GetGOAPWorldStatsActive
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::Debug_GetGOAPWorldStatsActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Debug_GetGOAPWorldStatsActive");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Debug_GetGOAPWorldStatsActive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetHoldTimer
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FKeybindingsRowHandle       KeyBind                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                TimerHandle                                                      (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               bValid                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_Map_Find_Value                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::GetHoldTimer(const struct FKeybindingsRowHandle& KeyBind, struct FTimerHandle* TimerHandle, bool* bValid, const struct FTimerHandle& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetHoldTimer");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetHoldTimer_Params Parms{};

	Parms.KeyBind = KeyBind;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TimerHandle != nullptr)
		*TimerHandle = std::move(Parms.TimerHandle);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ResolveGracePeriod
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::ResolveGracePeriod(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ResolveGracePeriod");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ResolveGracePeriod_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetGracePeriodState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               State                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetGracePeriodState(bool State, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_RemoveModifierState_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetGracePeriodState");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetGracePeriodState_Params Parms{};

	Parms.State = State;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetIsInCave
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::GetIsInCave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetIsInCave");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetIsInCave_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFPCameraOrientation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     OutPosition                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutForward                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::GetFPCameraOrientation(struct FVector* OutPosition, struct FVector* OutForward, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFPCameraOrientation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFPCameraOrientation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);

	if (OutForward != nullptr)
		*OutForward = std::move(Parms.OutForward);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFocusedItem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusItem*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusItem* ABP_IcarusPlayerCharacterSurvival_C::GetFocusedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFocusedItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFocusedItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.CheckPlayerOutOfWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WorldLength                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTerrainAnchorValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldDataRowHandle         CallFunc_GetWorldData_WorldData                                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetWorldData_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPointInBox_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWorldData                  CallFunc_GetWorldDataStruct_WorldData                            (None)
// enum class EValid                  CallFunc_GetWorldDataStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Sqrt_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::CheckPlayerOutOfWorld(float WorldLength, bool CallFunc_IsTerrainAnchorValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FWorldDataRowHandle& CallFunc_GetWorldData_WorldData, bool CallFunc_GetWorldData_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, bool CallFunc_IsPointInBox_ReturnValue, const struct FWorldData& CallFunc_GetWorldDataStruct_WorldData, enum class EValid CallFunc_GetWorldDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Sqrt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "CheckPlayerOutOfWorld");

	Params::ABP_IcarusPlayerCharacterSurvival_C_CheckPlayerOutOfWorld_Params Parms{};

	Parms.WorldLength = WorldLength;
	Parms.CallFunc_IsTerrainAnchorValid_ReturnValue = CallFunc_IsTerrainAnchorValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetWorldData_WorldData = CallFunc_GetWorldData_WorldData;
	Parms.CallFunc_GetWorldData_ReturnValue = CallFunc_GetWorldData_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_IsPointInBox_ReturnValue = CallFunc_IsPointInBox_ReturnValue;
	Parms.CallFunc_GetWorldDataStruct_WorldData = CallFunc_GetWorldDataStruct_WorldData;
	Parms.CallFunc_GetWorldDataStruct_Paths = CallFunc_GetWorldDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Sqrt_ReturnValue = CallFunc_Sqrt_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ToggleSpintChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::ToggleSpintChanged(bool NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ToggleSpintChanged");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ToggleSpintChanged_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ReportPerceivedFootstepNoise
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        Surface                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      Stance                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepType           FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSurfacesRowHandle          CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSurfacesData               CallFunc_GetSurfacesStruct_Surfaces                              (None)
// enum class EValid                  CallFunc_GetSurfacesStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ReportPerceivedFootstepNoise(enum class EPhysicalSurface& Surface, enum class EPlayerAudioStance Stance, enum class EFootstepType FootstepType, enum class EFootstepType Temp_byte_Variable, const struct FSurfacesRowHandle& CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue, float Temp_float_Variable, const struct FSurfacesData& CallFunc_GetSurfacesStruct_Surfaces, enum class EValid CallFunc_GetSurfacesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, float Temp_float_Variable_1, enum class EPlayerAudioStance Temp_byte_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_wildcard_Variable, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ReportPerceivedFootstepNoise");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ReportPerceivedFootstepNoise_Params Parms{};

	Parms.Surface = Surface;
	Parms.Stance = Stance;
	Parms.FootstepType = FootstepType;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue = CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetSurfacesStruct_Surfaces = CallFunc_GetSurfacesStruct_Surfaces;
	Parms.CallFunc_GetSurfacesStruct_Paths = CallFunc_GetSurfacesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetCaveStateImpl
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInCave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CaveActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifierStatesRowHandle    CallFunc_MakeLiteralModifierStates_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetCaveStateImpl(bool IsInCave, class AActor* CaveActor, bool Temp_bool_Variable, class AActor* Temp_object_Variable, class AActor* K2Node_Select_Default, bool CallFunc_IsServer_ReturnValue, const struct FModifierStatesRowHandle& CallFunc_MakeLiteralModifierStates_ReturnValue, const struct FModifier& K2Node_MakeStruct_Modifier, bool CallFunc_RemoveModifierState_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetCaveStateImpl");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetCaveStateImpl_Params Parms{};

	Parms.IsInCave = IsInCave;
	Parms.CaveActor = CaveActor;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_MakeLiteralModifierStates_ReturnValue = CallFunc_MakeLiteralModifierStates_ReturnValue;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetCurrentProspectLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EProspectLocation       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FBiomeAudioDataRowHandleFBiomeAudioDataRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAtmospheresEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class EProspectLocation ABP_IcarusPlayerCharacterSurvival_C::GetCurrentProspectLocation(bool CallFunc_IsValid_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_FBiomeAudioDataRowHandleFBiomeAudioDataRowHandle_ReturnValue, const struct FAtmospheresEnum& CallFunc_RowHandleToStruct_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetCurrentProspectLocation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetCurrentProspectLocation_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_FBiomeAudioDataRowHandleFBiomeAudioDataRowHandle_ReturnValue = CallFunc_EqualEqual_FBiomeAudioDataRowHandleFBiomeAudioDataRowHandle_ReturnValue;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayItemUseFailedSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FUsesRowHandle              Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayItemUseFailedSound(const struct FItemsStaticRowHandle& ItemData, const struct FUsesRowHandle& Use, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, const struct FUsesEnum& CallFunc_RowHandleToStruct_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchRowEnum_CmpSuccess, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayItemUseFailedSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayItemUseFailedSound_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Use = Use;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFirstPersonBodyMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_IcarusPlayerCharacterSurvival_C::GetFirstPersonBodyMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFirstPersonBodyMesh");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFirstPersonBodyMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TryPlayDeleteBuildingFailSound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  FMODEvent_DeleteBuildingFail                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TryPlayDeleteBuildingFailSound(class UFMODEvent* FMODEvent_DeleteBuildingFail, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TryPlayDeleteBuildingFailSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TryPlayDeleteBuildingFailSound_Params Parms{};

	Parms.FMODEvent_DeleteBuildingFail = FMODEvent_DeleteBuildingFail;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayJumpFailedSound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  FMODEvent_JumpFailed                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayJumpFailedSound(class UFMODEvent* FMODEvent_JumpFailed, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayJumpFailedSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayJumpFailedSound_Params Parms{};

	Parms.FMODEvent_JumpFailed = FMODEvent_JumpFailed;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayCraftedRecipeSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              CountInQueue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessingRowHandle        Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFMODEvent>   Temp_wildcard_Variable                                           (HasGetValueTypeHash)
// struct FCraftingAudioData          CallFunc_GetCraftingAudioDataStruct_CraftingAudioData            (None)
// enum class EValid                  CallFunc_GetCraftingAudioDataStruct_Paths                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFMODEvent>   CallFunc_Map_Find_Value                                          (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::PlayCraftedRecipeSound(const struct FProcessorRecipesRowHandle& Recipe, int32 CountInQueue, const struct FProcessingRowHandle& Temp_struct_Variable, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UFMODEvent> Temp_wildcard_Variable, const struct FCraftingAudioData& CallFunc_GetCraftingAudioDataStruct_CraftingAudioData, enum class EValid CallFunc_GetCraftingAudioDataStruct_Paths, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UFMODEvent> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayCraftedRecipeSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayCraftedRecipeSound_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.CountInQueue = CountInQueue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetCraftingAudioDataStruct_CraftingAudioData = CallFunc_GetCraftingAudioDataStruct_CraftingAudioData;
	Parms.CallFunc_GetCraftingAudioDataStruct_Paths = CallFunc_GetCraftingAudioDataStruct_Paths;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnProcessingCompleted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessingItem             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnProcessingCompleted(const struct FProcessingItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnProcessingCompleted");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnProcessingCompleted_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetHoldTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKeybindingsRowHandle       Keybinding                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                Timer_Handle                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetHoldTimer(const struct FKeybindingsRowHandle& Keybinding, const struct FTimerHandle& Timer_Handle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetHoldTimer");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetHoldTimer_Params Parms{};

	Parms.Keybinding = Keybinding;
	Parms.Timer_Handle = Timer_Handle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_IsDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_IsDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_IsDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetupCharacterCustomisation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::SetupCharacterCustomisation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetupCharacterCustomisation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Grant Loadout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemTemplateRowHandle      CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ManuallyPlaceItem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Grant_Loadout(bool CallFunc_IsServer_ReturnValue, const struct FItemTemplateRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ManuallyPlaceItem_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AController* CallFunc_GetController_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Grant Loadout");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Grant_Loadout_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ManuallyPlaceItem_ReturnValue = CallFunc_ManuallyPlaceItem_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.IsPlayerCovered
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Covered                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetActorUpVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::IsPlayerCovered(bool* Covered, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetActorUpVector_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "IsPlayerCovered");

	Params::ABP_IcarusPlayerCharacterSurvival_C_IsPlayerCovered_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetActorUpVector_ReturnValue = CallFunc_GetActorUpVector_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Covered != nullptr)
		*Covered = Parms.Covered;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_CurrentWeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_CurrentWeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_CurrentWeight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateStaminaAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Stamina                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateStaminaAudio(float Stamina, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateStaminaAudio");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateStaminaAudio_Params Parms{};

	Parms.Stamina = Stamina;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_TryPlayVocalisation_ReturnValue = CallFunc_TryPlayVocalisation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetDropTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// float                              DropDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class AIcarusItem>     CallFunc_GetItemDataContextParams_OutActorClass                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UStreamableRenderAsset>CallFunc_GetItemDataContextParams_OutMeshPtr                     (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetItemDataContextParams_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMesh*                 K2Node_DynamicCast_AsStatic_Mesh                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            CallFunc_GetBounds_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            K2Node_MakeStruct_BoxSphereBounds                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBoxSphereBounds            Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetViewTraceStartEndPoints_OutStart                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetViewTraceStartEndPoints_OutEnd                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_BoxTraceSingle_OutHit                                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BoxTraceSingle_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

struct FTransform ABP_IcarusPlayerCharacterSurvival_C::GetDropTransform(const struct FItemData& ItemData, float DropDistance, enum class EDataValid CallFunc_ItemDataValid_Paths, TSubclassOf<class AIcarusItem> CallFunc_GetItemDataContextParams_OutActorClass, TSoftObjectPtr<class UStreamableRenderAsset> CallFunc_GetItemDataContextParams_OutMeshPtr, bool CallFunc_GetItemDataContextParams_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess_1, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue, const struct FBoxSphereBounds& CallFunc_GetBounds_ReturnValue_1, const struct FBoxSphereBounds& Temp_wildcard_Variable, const struct FBoxSphereBounds& K2Node_MakeStruct_BoxSphereBounds, const struct FBoxSphereBounds& Temp_wildcard_Variable_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FVector& CallFunc_GetViewTraceStartEndPoints_OutStart, const struct FVector& CallFunc_GetViewTraceStartEndPoints_OutEnd, const struct FHitResult& CallFunc_BoxTraceSingle_OutHit, bool CallFunc_BoxTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetDropTransform");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetDropTransform_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.DropDistance = DropDistance;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_GetItemDataContextParams_OutActorClass = CallFunc_GetItemDataContextParams_OutActorClass;
	Parms.CallFunc_GetItemDataContextParams_OutMeshPtr = CallFunc_GetItemDataContextParams_OutMeshPtr;
	Parms.CallFunc_GetItemDataContextParams_ReturnValue = CallFunc_GetItemDataContextParams_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStatic_Mesh = K2Node_DynamicCast_AsStatic_Mesh;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBounds_ReturnValue = CallFunc_GetBounds_ReturnValue;
	Parms.CallFunc_GetBounds_ReturnValue_1 = CallFunc_GetBounds_ReturnValue_1;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.K2Node_MakeStruct_BoxSphereBounds = K2Node_MakeStruct_BoxSphereBounds;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetViewTraceStartEndPoints_OutStart = CallFunc_GetViewTraceStartEndPoints_OutStart;
	Parms.CallFunc_GetViewTraceStartEndPoints_OutEnd = CallFunc_GetViewTraceStartEndPoints_OutEnd;
	Parms.CallFunc_BoxTraceSingle_OutHit = CallFunc_BoxTraceSingle_OutHit;
	Parms.CallFunc_BoxTraceSingle_ReturnValue = CallFunc_BoxTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetDamageVocalisation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVocalisationsRowHandle     Vocalisation                                                     (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// int32                              SizeThreshold                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVocalisationsRowHandle     Creature                                                         (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FVocalisationsRowHandle     GenericSmall                                                     (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FVocalisationsRowHandle     GenericBig                                                       (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FVocalisationsRowHandle     Fire                                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// struct FVocalisationsRowHandle     Fall                                                             (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCGOAPCharacter*     K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::GetDamageVocalisation(class AActor* DamageCauser, enum class EIcarusDamageType DamageType, int32 DamageAmount, struct FVocalisationsRowHandle* Vocalisation, int32 SizeThreshold, const struct FVocalisationsRowHandle& Creature, const struct FVocalisationsRowHandle& GenericSmall, const struct FVocalisationsRowHandle& GenericBig, const struct FVocalisationsRowHandle& Fire, const struct FVocalisationsRowHandle& Fall, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetDamageVocalisation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetDamageVocalisation_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.DamageType = DamageType;
	Parms.DamageAmount = DamageAmount;
	Parms.SizeThreshold = SizeThreshold;
	Parms.Creature = Creature;
	Parms.GenericSmall = GenericSmall;
	Parms.GenericBig = GenericBig;
	Parms.Fire = Fire;
	Parms.Fall = Fall;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter = K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Vocalisation != nullptr)
		*Vocalisation = std::move(Parms.Vocalisation);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_CharacterCosmetics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_CharacterCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_CharacterCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SFX_HitSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerTypeFMODParam    CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SFX_HitSuccess(class AActor* HitActor, class AActor* DamageCauser, bool CallFunc_NotEqual_ObjectObject_ReturnValue, enum class EPlayerTypeFMODParam CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SFX_HitSuccess");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SFX_HitSuccess_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.DamageCauser = DamageCauser;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam = CallFunc_GetPlayerTypeFMODParam_PlayerTypeFMODParam;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayConsumableExpiredSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayConsumableExpiredSound(const struct FItemsStaticRowHandle& ItemData, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayConsumableExpiredSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayConsumableExpiredSound_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayItemUsedSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FUsesRowHandle              Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  SeedPouchOpenAudio                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFMODEvent>   Temp_wildcard_Variable                                           (HasGetValueTypeHash)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayItemUsedSound(const struct FItemsStaticRowHandle& ItemData, const struct FUsesRowHandle& Use, class UFMODEvent* SeedPouchOpenAudio, const struct FUsesEnum& CallFunc_RowHandleToStruct_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TSoftObjectPtr<class UFMODEvent> Temp_wildcard_Variable, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayItemUsedSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayItemUsedSound_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Use = Use;
	Parms.SeedPouchOpenAudio = SeedPouchOpenAudio;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateCharacterCustomisation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerCharacterID          CallFunc_GetPlayerCharacterID_ReturnValue                        (ConstParm, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// class FString                      CallFunc_ToString_PlayerCharacterID_ReturnValue                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterVoicesRowHandle   CallFunc_MakeCharacterVoices_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HashToName_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationDataRowHandleCallFunc_MakeCharacterCreationData_ReturnValue_1                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FCharacterCreationDataRowHandle>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FCharacterCreationDataRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCreationData      CallFunc_GetCharacterCreationDataStruct_CharacterCreationData    (None)
// enum class EValid                  CallFunc_GetCharacterCreationDataStruct_Paths                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate_1                    (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryInfo              CallFunc_GetInventoryData_OutData                                (None)
// bool                               CallFunc_GetInventoryData_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventorySlotOverride      CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetItem_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateCharacterCustomisation(int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FPlayerCharacterID& CallFunc_GetPlayerCharacterID_ReturnValue, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, const class FString& CallFunc_ToString_PlayerCharacterID_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_HashToName_ReturnValue, const struct FCharacterVoicesRowHandle& CallFunc_MakeCharacterVoices_ReturnValue, class FName CallFunc_HashToName_ReturnValue_1, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue, class FName CallFunc_HashToName_ReturnValue_2, const struct FCharacterCreationDataRowHandle& CallFunc_MakeCharacterCreationData_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, TArray<struct FCharacterCreationDataRowHandle>& K2Node_MakeArray_Array, const struct FCharacterCreationDataRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FCharacterCreationData& CallFunc_GetCharacterCreationDataStruct_CharacterCreationData, enum class EValid CallFunc_GetCharacterCreationDataStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate_1, enum class EValid CallFunc_GetItemTemplateStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FInventoryInfo& CallFunc_GetInventoryData_OutData, bool CallFunc_GetInventoryData_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FInventorySlotOverride& CallFunc_Array_Get_Item_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SetItem_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateCharacterCustomisation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateCharacterCustomisation_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetPlayerCharacterID_ReturnValue = CallFunc_GetPlayerCharacterID_ReturnValue;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_ToString_PlayerCharacterID_ReturnValue = CallFunc_ToString_PlayerCharacterID_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_HashToName_ReturnValue = CallFunc_HashToName_ReturnValue;
	Parms.CallFunc_MakeCharacterVoices_ReturnValue = CallFunc_MakeCharacterVoices_ReturnValue;
	Parms.CallFunc_HashToName_ReturnValue_1 = CallFunc_HashToName_ReturnValue_1;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue = CallFunc_MakeCharacterCreationData_ReturnValue;
	Parms.CallFunc_HashToName_ReturnValue_2 = CallFunc_HashToName_ReturnValue_2;
	Parms.CallFunc_MakeCharacterCreationData_ReturnValue_1 = CallFunc_MakeCharacterCreationData_ReturnValue_1;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCharacterCreationDataStruct_CharacterCreationData = CallFunc_GetCharacterCreationDataStruct_CharacterCreationData;
	Parms.CallFunc_GetCharacterCreationDataStruct_Paths = CallFunc_GetCharacterCreationDataStruct_Paths;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate_1 = CallFunc_GetItemTemplateStruct_ItemTemplate_1;
	Parms.CallFunc_GetItemTemplateStruct_Paths_1 = CallFunc_GetItemTemplateStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetInventoryData_OutData = CallFunc_GetInventoryData_OutData;
	Parms.CallFunc_GetInventoryData_ReturnValue = CallFunc_GetInventoryData_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SetItem_ReturnValue = CallFunc_SetItem_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFocusedItemActor
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AIcarusItem*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AIcarusItem* ABP_IcarusPlayerCharacterSurvival_C::GetFocusedItemActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFocusedItemActor");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFocusedItemActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Grant MetaItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharacterLoadout           Loadout                                                          (Edit, BlueprintVisible)
// struct FItemData                   Suit                                                             (Edit, BlueprintVisible, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::Grant_MetaItems(const struct FCharacterLoadout& Loadout, const struct FItemData& Suit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Grant MetaItems");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Grant_MetaItems_Params Parms{};

	Parms.Loadout = Loadout;
	Parms.Suit = Suit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayDamagedSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                DamageEvent                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       DamageType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDamageTypeFMODParam    CallFunc_GetDamageTypeFMODParam_FMODParamValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       CallFunc_GetDamageTypeFromEvent_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  CallFunc_GetDamageAudioAsset_FMODEvent                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVocalisationsRowHandle     CallFunc_GetDamageVocalisation_Vocalisation                      (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayDamagedSound(class AActor* DamageCauser, const struct FDamageEvent& DamageEvent, int32 DamageAmount, enum class EIcarusDamageType DamageType, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EDamageTypeFMODParam CallFunc_GetDamageTypeFMODParam_FMODParamValue, enum class EIcarusDamageType CallFunc_GetDamageTypeFromEvent_ReturnValue, class UFMODEvent* CallFunc_GetDamageAudioAsset_FMODEvent, const struct FVector& Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, const struct FVocalisationsRowHandle& CallFunc_GetDamageVocalisation_Vocalisation, bool CallFunc_IsRowHandleValid_ReturnValue, enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& Temp_wildcard_Variable_1, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayDamagedSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayDamagedSound_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.DamageEvent = DamageEvent;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetDamageTypeFMODParam_FMODParamValue = CallFunc_GetDamageTypeFMODParam_FMODParamValue;
	Parms.CallFunc_GetDamageTypeFromEvent_ReturnValue = CallFunc_GetDamageTypeFromEvent_ReturnValue;
	Parms.CallFunc_GetDamageAudioAsset_FMODEvent = CallFunc_GetDamageAudioAsset_FMODEvent;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDamageVocalisation_Vocalisation = CallFunc_GetDamageVocalisation_Vocalisation;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_TryPlayVocalisation_ReturnValue = CallFunc_TryPlayVocalisation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetDamageAudioAsset
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EIcarusDamageType       DamageType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FMODEvent                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  PoisonDamageEvent                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueriesRowHandle        OtherPlayerTagQuery                                              (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  CreatureDamageEvent                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  CollisionDamageEvent                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FallDamageEvent                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  FireDamageEvent                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  OtherPlayerDamageEvent                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  GenericDamageEvent                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTagQueries                 CallFunc_GetTagQueriesStruct_TagQueries                          (None)
// enum class EValid                  CallFunc_GetTagQueriesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusActor*                K2Node_DynamicCast_AsIcarus_Actor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_GetGameplayTagContainer_OutContainer                    (None)
// bool                               CallFunc_GetGameplayTagContainer_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusNPCCharacter*         K2Node_DynamicCast_AsIcarus_NPCCharacter                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesContainerMatchTagQuery_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::GetDamageAudioAsset(class AActor* DamageCauser, enum class EIcarusDamageType DamageType, class UFMODEvent** FMODEvent, class UFMODEvent* PoisonDamageEvent, const struct FTagQueriesRowHandle& OtherPlayerTagQuery, class UFMODEvent* CreatureDamageEvent, class UFMODEvent* CollisionDamageEvent, class UFMODEvent* FallDamageEvent, class UFMODEvent* FireDamageEvent, class UFMODEvent* OtherPlayerDamageEvent, class UFMODEvent* GenericDamageEvent, const struct FTagQueries& CallFunc_GetTagQueriesStruct_TagQueries, enum class EValid CallFunc_GetTagQueriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class AIcarusActor* K2Node_DynamicCast_AsIcarus_Actor, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainer_OutContainer, bool CallFunc_GetGameplayTagContainer_ReturnValue, class AIcarusNPCCharacter* K2Node_DynamicCast_AsIcarus_NPCCharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesContainerMatchTagQuery_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetDamageAudioAsset");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetDamageAudioAsset_Params Parms{};

	Parms.DamageCauser = DamageCauser;
	Parms.DamageType = DamageType;
	Parms.PoisonDamageEvent = PoisonDamageEvent;
	Parms.OtherPlayerTagQuery = OtherPlayerTagQuery;
	Parms.CreatureDamageEvent = CreatureDamageEvent;
	Parms.CollisionDamageEvent = CollisionDamageEvent;
	Parms.FallDamageEvent = FallDamageEvent;
	Parms.FireDamageEvent = FireDamageEvent;
	Parms.OtherPlayerDamageEvent = OtherPlayerDamageEvent;
	Parms.GenericDamageEvent = GenericDamageEvent;
	Parms.CallFunc_GetTagQueriesStruct_TagQueries = CallFunc_GetTagQueriesStruct_TagQueries;
	Parms.CallFunc_GetTagQueriesStruct_Paths = CallFunc_GetTagQueriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Actor = K2Node_DynamicCast_AsIcarus_Actor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameplayTagContainer_OutContainer = CallFunc_GetGameplayTagContainer_OutContainer;
	Parms.CallFunc_GetGameplayTagContainer_ReturnValue = CallFunc_GetGameplayTagContainer_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_NPCCharacter = K2Node_DynamicCast_AsIcarus_NPCCharacter;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_DoesContainerMatchTagQuery_ReturnValue = CallFunc_DoesContainerMatchTagQuery_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FMODEvent != nullptr)
		*FMODEvent = Parms.FMODEvent;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnUnFocusItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemLocation                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UnfocusingLogic_ToDestroy                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_UnfocusingLogic_Future_Item_Data                        (ContainsInstancedReference)
// bool                               CallFunc_OnUnFocusItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_Can_Equip_with_Off_Hand_IsLHWep                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFocusableComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::OnUnFocusItem(int32 ItemLocation, bool CallFunc_UnfocusingLogic_ToDestroy, const struct FItemData& CallFunc_UnfocusingLogic_Future_Item_Data, bool CallFunc_OnUnFocusItem_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_Can_Equip_with_Off_Hand_IsLHWep, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, enum class EValid CallFunc_GetTrait_Paths, class UFocusableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnUnFocusItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnUnFocusItem_Params Parms{};

	Parms.ItemLocation = ItemLocation;
	Parms.CallFunc_UnfocusingLogic_ToDestroy = CallFunc_UnfocusingLogic_ToDestroy;
	Parms.CallFunc_UnfocusingLogic_Future_Item_Data = CallFunc_UnfocusingLogic_Future_Item_Data;
	Parms.CallFunc_OnUnFocusItem_ReturnValue = CallFunc_OnUnFocusItem_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_Can_Equip_with_Off_Hand_IsLHWep = CallFunc_Can_Equip_with_Off_Hand_IsLHWep;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnFocusItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   InventoryItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OnFocusItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusableData              CallFunc_GetFocusableData_FocusableData                          (None)
// enum class EDataValid              CallFunc_GetFocusableData_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Can_Equip_with_Off_Hand_IsLHWep                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Equals_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFocusableData              CallFunc_GetFocusableData_FocusableData_1                        (None)
// enum class EDataValid              CallFunc_GetFocusableData_Paths_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFocusableComponent*         CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_IcarusPlayerCharacterSurvival_C::OnFocusItem(struct FItemData& InventoryItem, bool CallFunc_OnFocusItem_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemMatchesQuery_ReturnValue, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFocusableData& CallFunc_GetFocusableData_FocusableData, enum class EDataValid CallFunc_GetFocusableData_Paths, bool CallFunc_Can_Equip_with_Off_Hand_IsLHWep, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_Equals_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool Temp_wildcard_Variable, const struct FFocusableData& CallFunc_GetFocusableData_FocusableData_1, enum class EDataValid CallFunc_GetFocusableData_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsValid_ReturnValue_1, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, enum class EValid CallFunc_GetTrait_Paths, class UFocusableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnFocusItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnFocusItem_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_OnFocusItem_ReturnValue = CallFunc_OnFocusItem_ReturnValue;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1 = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1 = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity_1 = CallFunc_GetFocusedItemInventoryAndSlot_Validity_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetFocusableData_FocusableData = CallFunc_GetFocusableData_FocusableData;
	Parms.CallFunc_GetFocusableData_Paths = CallFunc_GetFocusableData_Paths;
	Parms.CallFunc_Can_Equip_with_Off_Hand_IsLHWep = CallFunc_Can_Equip_with_Off_Hand_IsLHWep;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_Equals_ReturnValue = CallFunc_Equals_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetFocusableData_FocusableData_1 = CallFunc_GetFocusableData_FocusableData_1;
	Parms.CallFunc_GetFocusableData_Paths_1 = CallFunc_GetFocusableData_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TryPlaySwimStrokeSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  SwimIdleSound                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  SwimMovingSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VelocityThreshold                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TryPlaySwimStrokeSound(class UFMODEvent* SwimIdleSound, class UFMODEvent* SwimMovingSound, float VelocityThreshold, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UFMODEvent* K2Node_Select_Default, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TryPlaySwimStrokeSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TryPlaySwimStrokeSound_Params Parms{};

	Parms.SwimIdleSound = SwimIdleSound;
	Parms.SwimMovingSound = SwimMovingSound;
	Parms.VelocityThreshold = VelocityThreshold;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayItemDroppedSound
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAudioDataRowHandle     ItemAudio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DropLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayItemDroppedSound(const struct FItemAudioDataRowHandle& ItemAudio, const struct FVector& DropLocation, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayItemDroppedSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayItemDroppedSound_Params Parms{};

	Parms.ItemAudio = ItemAudio;
	Parms.DropLocation = DropLocation;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.MoveCharacterToLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSeated_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::MoveCharacterToLocation(const struct FVector& Location, bool CallFunc_IsSeated_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "MoveCharacterToLocation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_MoveCharacterToLocation_Params Parms{};

	Parms.Location = Location;
	Parms.CallFunc_IsSeated_ReturnValue = CallFunc_IsSeated_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ToggleCrouchUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggle                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::ToggleCrouchUpdated(bool Toggle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ToggleCrouchUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ToggleCrouchUpdated_Params Parms{};

	Parms.Toggle = Toggle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetupGameUserSetttings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_GetCrouchLedgeSafety_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetToggleSprint_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetToggleCrouch_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetupGameUserSetttings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_GetCrouchLedgeSafety_ReturnValue, bool CallFunc_GetToggleSprint_ReturnValue, bool CallFunc_GetToggleCrouch_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetupGameUserSetttings");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetupGameUserSetttings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetCrouchLedgeSafety_ReturnValue = CallFunc_GetCrouchLedgeSafety_ReturnValue;
	Parms.CallFunc_GetToggleSprint_ReturnValue = CallFunc_GetToggleSprint_ReturnValue;
	Parms.CallFunc_GetToggleCrouch_ReturnValue = CallFunc_GetToggleCrouch_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFirstPersonMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_IcarusPlayerCharacterSurvival_C::GetFirstPersonMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFirstPersonMesh");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFirstPersonMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_IsInDropship
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_IsInDropship()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_IsInDropship");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetThirdPersonMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_IcarusPlayerCharacterSurvival_C::GetThirdPersonMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetThirdPersonMesh");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetThirdPersonMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetupWaterPP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable_1                            (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables_1                           (None)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetupWaterPP(const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable_1, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array_1, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetupWaterPP");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetupWaterPP_Params Parms{};

	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeStruct_WeightedBlendable_1 = K2Node_MakeStruct_WeightedBlendable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_WeightedBlendables_1 = K2Node_MakeStruct_WeightedBlendables_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.CheckForLandscape
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::CheckForLandscape(bool* Found, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "CheckForLandscape");

	Params::ABP_IcarusPlayerCharacterSurvival_C_CheckForLandscape_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayItemBrokenSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFMODEvent*                  FMODEvent                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_wildcard_Variable                                           (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemAttachmentData         CallFunc_GetFocusableAttachmentData_AttachmentData               (None)
// enum class EDataValid              CallFunc_GetFocusableAttachmentData_Paths                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemAudioData              CallFunc_GetItemAudioDataStruct_ItemAudioData                    (None)
// enum class EValid                  CallFunc_GetItemAudioDataStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_wildcard_Variable_1                                         (IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::PlayItemBrokenSound(class UFMODEvent* FMODEvent, const struct FTransform& Temp_wildcard_Variable, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemAttachmentData& CallFunc_GetFocusableAttachmentData_AttachmentData, enum class EDataValid CallFunc_GetFocusableAttachmentData_Paths, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& Temp_wildcard_Variable_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetIsThirdPerson_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayItemBrokenSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayItemBrokenSound_Params Parms{};

	Parms.FMODEvent = FMODEvent;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFocusableAttachmentData_AttachmentData = CallFunc_GetFocusableAttachmentData_AttachmentData;
	Parms.CallFunc_GetFocusableAttachmentData_Paths = CallFunc_GetFocusableAttachmentData_Paths;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemAudioDataStruct_ItemAudioData = CallFunc_GetItemAudioDataStruct_ItemAudioData;
	Parms.CallFunc_GetItemAudioDataStruct_Paths = CallFunc_GetItemAudioDataStruct_Paths;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TryPlayFootstepSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepType           FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      PlayerStance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DoServerOnlyGameplayLogic                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        Surface                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerAudioStance      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerCharacter_IsValid                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerCharacter*      CallFunc_GetIcarusPlayerCharacter_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFootstepType           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerStanceFMODParam  Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPhysicalSurface        CallFunc_GetCurrentSurface_Surface                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentSurface_WaterDepth                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentSurface_SlopeAngle                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentSurface_HitActor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetCurrentSurface_HitLocation                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFootstepReceiverInterface>K2Node_DynamicCast_AsFootstep_Receiver_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UFMODEvent>   CallFunc_GetFootstepAudioAsset_Event_Asset_Pointer               (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerStanceFMODParam  Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerStanceFMODParam  Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFMODValid              CallFunc_PlayEventAttached_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFMODAudioComponent*         CallFunc_PlayEventAttached_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerStanceFMODParam  Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMovingOnGround_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerStanceFMODParam  K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TryPlayFootstepSound(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance, bool DoServerOnlyGameplayLogic, enum class EPhysicalSurface Surface, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EPlayerAudioStance Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EFootstepType Temp_byte_Variable_1, bool CallFunc_IsLocallyControlled_ReturnValue, class FName K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EPlayerStanceFMODParam Temp_byte_Variable_2, bool CallFunc_IsServer_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetCurrentSurface_Surface, float CallFunc_GetCurrentSurface_WaterDepth, float CallFunc_GetCurrentSurface_SlopeAngle, class AActor* CallFunc_GetCurrentSurface_HitActor, const struct FVector& CallFunc_GetCurrentSurface_HitLocation, const struct FVector& CallFunc_GetVelocity_ReturnValue, TScriptInterface<class IFootstepReceiverInterface> K2Node_DynamicCast_AsFootstep_Receiver_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, TSoftObjectPtr<class UFMODEvent> CallFunc_GetFootstepAudioAsset_Event_Asset_Pointer, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, enum class EPlayerStanceFMODParam Temp_byte_Variable_3, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, enum class EPlayerStanceFMODParam Temp_byte_Variable_4, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EPlayerStanceFMODParam Temp_byte_Variable_5, bool CallFunc_IsMovingOnGround_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class EPlayerStanceFMODParam K2Node_Select_Default_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TryPlayFootstepSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TryPlayFootstepSound_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.PlayerStance = PlayerStance;
	Parms.DoServerOnlyGameplayLogic = DoServerOnlyGameplayLogic;
	Parms.Surface = Surface;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_GetIcarusPlayerCharacter_IsValid = CallFunc_GetIcarusPlayerCharacter_IsValid;
	Parms.CallFunc_GetIcarusPlayerCharacter_ReturnValue = CallFunc_GetIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetCurrentSurface_Surface = CallFunc_GetCurrentSurface_Surface;
	Parms.CallFunc_GetCurrentSurface_WaterDepth = CallFunc_GetCurrentSurface_WaterDepth;
	Parms.CallFunc_GetCurrentSurface_SlopeAngle = CallFunc_GetCurrentSurface_SlopeAngle;
	Parms.CallFunc_GetCurrentSurface_HitActor = CallFunc_GetCurrentSurface_HitActor;
	Parms.CallFunc_GetCurrentSurface_HitLocation = CallFunc_GetCurrentSurface_HitLocation;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.K2Node_DynamicCast_AsFootstep_Receiver_Interface = K2Node_DynamicCast_AsFootstep_Receiver_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetFootstepAudioAsset_Event_Asset_Pointer = CallFunc_GetFootstepAudioAsset_Event_Asset_Pointer;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_PlayEventAttached_IsValid = CallFunc_PlayEventAttached_IsValid;
	Parms.CallFunc_PlayEventAttached_ReturnValue = CallFunc_PlayEventAttached_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_IsMovingOnGround_ReturnValue = CallFunc_IsMovingOnGround_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateMetaResourceCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateMetaResourceCount(int32 NewWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateMetaResourceCount");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateMetaResourceCount_Params Parms{};

	Parms.NewWeight = NewWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ConsumeFocusedItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              OldStack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_RemoveItem_ReturnValue                                  (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_IcarusPlayerCharacterSurvival_C::ConsumeFocusedItem(int32 Amount, int32 OldStack, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_RemoveItem_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ConsumeFocusedItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ConsumeFocusedItem_Params Parms{};

	Parms.Amount = Amount;
	Parms.OldStack = OldStack;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RemoveItem_ReturnValue = CallFunc_RemoveItem_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ForceSyncFocusedItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldStack                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemData_Validity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetFocusedItemData_ReturnValue                          (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemableComponent*          CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Equals_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::ForceSyncFocusedItem(int32 OldStack, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_Equals_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ForceSyncFocusedItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ForceSyncFocusedItem_Params Parms{};

	Parms.OldStack = OldStack;
	Parms.CallFunc_GetFocusedItemData_Validity = CallFunc_GetFocusedItemData_Validity;
	Parms.CallFunc_GetFocusedItemData_ReturnValue = CallFunc_GetFocusedItemData_ReturnValue;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.CallFunc_Equals_ReturnValue = CallFunc_Equals_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.IsClothSimEnabled
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetClothSimulation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::IsClothSimEnabled(class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool CallFunc_GetClothSimulation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "IsClothSimEnabled");

	Params::ABP_IcarusPlayerCharacterSurvival_C_IsClothSimEnabled_Params Parms{};

	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_GetClothSimulation_ReturnValue = CallFunc_GetClothSimulation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateEquipmentClothSim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateEquipmentClothSim(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateEquipmentClothSim");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateEquipmentClothSim_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.DrawArmourComponentDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    FPAdd                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    FullAdd                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    SimpAdd                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    FullUnder                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    SimpUnder                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_3             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_4             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FArmourComponentData>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FArmourComponentData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumMaterials_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNumMaterials_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::DrawArmourComponentDebug(class UMaterialInstanceDynamic* FPAdd, class UMaterialInstanceDynamic* FullAdd, class UMaterialInstanceDynamic* SimpAdd, class UMaterialInstanceDynamic* FullUnder, class UMaterialInstanceDynamic* SimpUnder, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_3, int32 Temp_int_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, TArray<struct FArmourComponentData>& CallFunc_Map_Values_Values, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FArmourComponentData& CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetNumMaterials_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, int32 CallFunc_GetNumMaterials_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_3, int32 CallFunc_Subtract_IntInt_ReturnValue_1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_2, int32 CallFunc_GetNumMaterials_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_GetNumMaterials_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 Temp_int_Variable_4, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_3, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue_4, bool CallFunc_NotEqual_ObjectObject_ReturnValue_3, bool CallFunc_NotEqual_ObjectObject_ReturnValue_4, int32 CallFunc_GetNumMaterials_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue_3, bool CallFunc_LessEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "DrawArmourComponentDebug");

	Params::ABP_IcarusPlayerCharacterSurvival_C_DrawArmourComponentDebug_Params Parms{};

	Parms.FPAdd = FPAdd;
	Parms.FullAdd = FullAdd;
	Parms.SimpAdd = SimpAdd;
	Parms.FullUnder = FullUnder;
	Parms.SimpUnder = SimpUnder;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_3 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_3;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_4 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_4;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetNumMaterials_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue_1 = CallFunc_GetMaterial_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_GetNumMaterials_ReturnValue_1 = CallFunc_GetNumMaterials_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetMaterial_ReturnValue_2 = CallFunc_GetMaterial_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_2 = CallFunc_NotEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_GetNumMaterials_ReturnValue_2 = CallFunc_GetNumMaterials_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_GetNumMaterials_ReturnValue_3 = CallFunc_GetNumMaterials_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_GetMaterial_ReturnValue_3 = CallFunc_GetMaterial_ReturnValue_3;
	Parms.CallFunc_GetMaterial_ReturnValue_4 = CallFunc_GetMaterial_ReturnValue_4;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_3 = CallFunc_NotEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_4 = CallFunc_NotEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_GetNumMaterials_ReturnValue_4 = CallFunc_GetNumMaterials_ReturnValue_4;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_4 = CallFunc_Subtract_IntInt_ReturnValue_4;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_3 = CallFunc_LessEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_4 = CallFunc_LessEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnArmourUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              LoadedClasses                                                    (Edit, BlueprintVisible)
// TArray<class UObject*>             LoadedAssets                                                     (Edit, BlueprintVisible)
// class UClass*                      FPEnvirosuitAnimBPClass                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               FPEnvirosuitMesh                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterCosmetics         Cosmetics                                                        (Edit, BlueprintVisible, NoDestructor)
// class UClass*                      TPEnvirosuitAnimBPClass                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               TPEnvirosuitMesh                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOnlineProfileCharacter     CallFunc_GetActiveCharacter_ReturnValue                          (ConstParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FArmourComponentData>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// struct FArmourComponentData        CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourRowHandle            CallFunc_Array_Get_Item_5                                        (NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_GetArmourStruct_Armour                                  (None)
// enum class EValid                  CallFunc_GetArmourStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftClassPtr<class UAnimInstance>>K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TSoftClassPtr<class UAnimInstance> CallFunc_Array_Get_Item_6                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_LoadClassAsset_Blocking_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UObject>         CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<TSoftObjectPtr<class USkeletalMesh>>K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class USkeletalMesh>CallFunc_Array_Get_Item_7                                        (HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               K2Node_DynamicCast_AsSkeletal_Mesh_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnArmourUpdated(const TArray<class UClass*>& LoadedClasses, const TArray<class UObject*>& LoadedAssets, class UClass* FPEnvirosuitAnimBPClass, class USkeletalMesh* FPEnvirosuitMesh, const struct FCharacterCosmetics& Cosmetics, class UClass* TPEnvirosuitAnimBPClass, class USkeletalMesh* TPEnvirosuitMesh, int32 Temp_int_Array_Index_Variable, class USkeletalMesh* Temp_object_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_2, class USkeletalMesh* Temp_object_Variable_1, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 Temp_int_Loop_Counter_Variable_5, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 Temp_int_Array_Index_Variable_4, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_5, int32 Temp_int_Loop_Counter_Variable_6, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 Temp_int_Array_Index_Variable_6, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, int32 Temp_int_Loop_Counter_Variable_7, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_7, const class FString& CallFunc_GetUserID_ReturnValue, int32 Temp_int_Array_Index_Variable_7, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class UPrimitiveComponent*>& K2Node_MakeArray_Array, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, bool CallFunc_NotEqual_ClassClass_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool Temp_bool_Variable_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class USkeletalMesh* K2Node_Select_Default, TArray<struct FArmourComponentData>& CallFunc_Map_Values_Values, const struct FArmourComponentData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, class USkeletalMeshComponent* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4, const struct FArmourRowHandle& CallFunc_Array_Get_Item_5, const struct FArmourData& CallFunc_GetArmourStruct_Armour, enum class EValid CallFunc_GetArmourStruct_Paths, int32 CallFunc_Array_Length_ReturnValue_5, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess, TArray<TSoftClassPtr<class UAnimInstance>>& K2Node_MakeArray_Array_1, TSoftClassPtr<class UAnimInstance> CallFunc_Array_Get_Item_6, int32 CallFunc_Array_Length_ReturnValue_6, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_2, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance_1, bool K2Node_ClassDynamicCast_bSuccess_1, bool CallFunc_IsValidSoftClassReference_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_4, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance_2, bool K2Node_ClassDynamicCast_bSuccess_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UClass* K2Node_Select_Default_1, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, TArray<TSoftObjectPtr<class USkeletalMesh>>& K2Node_MakeArray_Array_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, TSoftObjectPtr<class USkeletalMesh> CallFunc_Array_Get_Item_7, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class USkeletalMesh* K2Node_DynamicCast_AsSkeletal_Mesh_2, bool K2Node_DynamicCast_bSuccess_2, class USkeletalMesh* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnArmourUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnArmourUpdated_Params Parms{};

	Parms.LoadedClasses = LoadedClasses;
	Parms.LoadedAssets = LoadedAssets;
	Parms.FPEnvirosuitAnimBPClass = FPEnvirosuitAnimBPClass;
	Parms.FPEnvirosuitMesh = FPEnvirosuitMesh;
	Parms.Cosmetics = Cosmetics;
	Parms.TPEnvirosuitAnimBPClass = TPEnvirosuitAnimBPClass;
	Parms.TPEnvirosuitMesh = TPEnvirosuitMesh;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_7 = Temp_int_Loop_Counter_Variable_7;
	Parms.CallFunc_GetActiveCharacter_ReturnValue = CallFunc_GetActiveCharacter_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_7 = Temp_int_Array_Index_Variable_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_1 = CallFunc_IsValidClass_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue_1 = CallFunc_GetObjectClass_ReturnValue_1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue_1 = CallFunc_NotEqual_ClassClass_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GetArmourStruct_Armour = CallFunc_GetArmourStruct_Armour;
	Parms.CallFunc_GetArmourStruct_Paths = CallFunc_GetArmourStruct_Paths;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance = K2Node_ClassDynamicCast_AsAnim_Instance;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_LoadClassAsset_Blocking_ReturnValue = CallFunc_LoadClassAsset_Blocking_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue_2 = CallFunc_IsValidClass_ReturnValue_2;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_1;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance_1 = K2Node_ClassDynamicCast_AsAnim_Instance_1;
	Parms.K2Node_ClassDynamicCast_bSuccess_1 = K2Node_ClassDynamicCast_bSuccess_1;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2 = CallFunc_Conv_SoftClassReferenceToClass_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance_2 = K2Node_ClassDynamicCast_AsAnim_Instance_2;
	Parms.K2Node_ClassDynamicCast_bSuccess_2 = K2Node_ClassDynamicCast_bSuccess_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh = K2Node_DynamicCast_AsSkeletal_Mesh;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidClass_ReturnValue_3 = CallFunc_IsValidClass_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_1 = K2Node_DynamicCast_AsSkeletal_Mesh_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_7 = CallFunc_Less_IntInt_ReturnValue_7;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSkeletal_Mesh_2 = K2Node_DynamicCast_AsSkeletal_Mesh_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetFootstepAudioAsset
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPhysicalSurface        Surface                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepType           Footstep_Type                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WaterDepth                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UFMODEvent>   Event_Asset_Pointer                                              (Parm, OutParm, HasGetValueTypeHash)
// enum class EFootstepType           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SurfaceIsLiquid_IsLiquid                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSurfacesRowHandle          CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSurfacesData               CallFunc_GetSurfacesStruct_Surfaces                              (None)
// enum class EValid                  CallFunc_GetSurfacesStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerFootstepAudioData    CallFunc_GetPlayerFootstepAudioDataStruct_PlayerFootstepAudioData(None)
// enum class EValid                  CallFunc_GetPlayerFootstepAudioDataStruct_Paths                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFMODEvent>   K2Node_Select_Default                                            (HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::GetFootstepAudioAsset(enum class EPhysicalSurface Surface, enum class EFootstepType Footstep_Type, float WaterDepth, TSoftObjectPtr<class UFMODEvent>* Event_Asset_Pointer, enum class EFootstepType Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_SurfaceIsLiquid_IsLiquid, const struct FSurfacesRowHandle& CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSurfacesData& CallFunc_GetSurfacesStruct_Surfaces, enum class EValid CallFunc_GetSurfacesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FPlayerFootstepAudioData& CallFunc_GetPlayerFootstepAudioDataStruct_PlayerFootstepAudioData, enum class EValid CallFunc_GetPlayerFootstepAudioDataStruct_Paths, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanAND_ReturnValue_1, TSoftObjectPtr<class UFMODEvent> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetFootstepAudioAsset");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetFootstepAudioAsset_Params Parms{};

	Parms.Surface = Surface;
	Parms.Footstep_Type = Footstep_Type;
	Parms.WaterDepth = WaterDepth;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_SurfaceIsLiquid_IsLiquid = CallFunc_SurfaceIsLiquid_IsLiquid;
	Parms.CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue = CallFunc_MakeSurfacesRowFromSurfaceType_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSurfacesStruct_Surfaces = CallFunc_GetSurfacesStruct_Surfaces;
	Parms.CallFunc_GetSurfacesStruct_Paths = CallFunc_GetSurfacesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerFootstepAudioDataStruct_PlayerFootstepAudioData = CallFunc_GetPlayerFootstepAudioDataStruct_PlayerFootstepAudioData;
	Parms.CallFunc_GetPlayerFootstepAudioDataStruct_Paths = CallFunc_GetPlayerFootstepAudioDataStruct_Paths;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Event_Asset_Pointer != nullptr)
		*Event_Asset_Pointer = Parms.Event_Asset_Pointer;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateHiddenTPBones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGFurComponent*              FurComponent                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsThirdPerson                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                TPHideBones                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EArmourType>     K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FArmourData                 CallFunc_GetArmourDataForGFurComponent_OutArmourData             (None)
// bool                               CallFunc_GetArmourDataForGFurComponent_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetThirdPersonMesh_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGFurComponent*              K2Node_DynamicCast_AsgFur                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FArmourComponentData>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// struct FArmourComponentData        CallFunc_Array_Get_Item_1                                        (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     K2Node_DynamicCast_AsIcarus_Player_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateHiddenTPBones(class UGFurComponent* FurComponent, bool IsThirdPerson, const TArray<class FName>& TPHideBones, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, TArray<class FName>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Array_Index_Variable_3, TArray<enum class EArmourType>& K2Node_MakeArray_Array_1, const struct FArmourData& CallFunc_GetArmourDataForGFurComponent_OutArmourData, bool CallFunc_GetArmourDataForGFurComponent_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, class USkeletalMeshComponent* CallFunc_GetThirdPersonMesh_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, int32 CallFunc_Add_IntInt_ReturnValue_3, class USceneComponent* CallFunc_Array_Get_Item, class UGFurComponent* K2Node_DynamicCast_AsgFur, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_wildcard_Variable, TArray<struct FArmourComponentData>& CallFunc_Map_Values_Values, const struct FArmourComponentData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_ObjectToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsThirdPerson_ReturnValue, class FName CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue_3, class FText CallFunc_Format_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateHiddenTPBones");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateHiddenTPBones_Params Parms{};

	Parms.FurComponent = FurComponent;
	Parms.IsThirdPerson = IsThirdPerson;
	Parms.TPHideBones = TPHideBones;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetArmourDataForGFurComponent_OutArmourData = CallFunc_GetArmourDataForGFurComponent_OutArmourData;
	Parms.CallFunc_GetArmourDataForGFurComponent_ReturnValue = CallFunc_GetArmourDataForGFurComponent_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_GetThirdPersonMesh_ReturnValue = CallFunc_GetThirdPersonMesh_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsgFur = K2Node_DynamicCast_AsgFur;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller = K2Node_DynamicCast_AsIcarus_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetVisibleCharacterMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_IcarusPlayerCharacterSurvival_C::GetVisibleCharacterMesh(bool Temp_bool_Variable, bool Temp_wildcard_Variable, bool CallFunc_IsLocallyControlled_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, class USkeletalMeshComponent* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetVisibleCharacterMesh");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetVisibleCharacterMesh_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.StatsUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::StatsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "StatsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.WeightUpdated
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   Modifier                                                         (Edit, BlueprintVisible, NoDestructor)
// bool                               CallFunc_RemoveModifierState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTotalWeight_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::WeightUpdated(int32 NewWeight, const struct FModifier& Modifier, bool CallFunc_RemoveModifierState_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetTotalWeight_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "WeightUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_WeightUpdated_Params Parms{};

	Parms.NewWeight = NewWeight;
	Parms.Modifier = Modifier;
	Parms.CallFunc_RemoveModifierState_ReturnValue = CallFunc_RemoveModifierState_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetTotalWeight_ReturnValue = CallFunc_GetTotalWeight_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateMeshVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ArmourWantsFPHidden                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsThirdPerson                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              Temp_wildcard_Variable                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_GetRootMeshComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetRootMeshComponent_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSeated_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FArmourComponentData>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourComponentData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourRowHandle            CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// struct FArmourData                 CallFunc_GetArmourStruct_Armour                                  (None)
// enum class EValid                  CallFunc_GetArmourStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              K2Node_DynamicCast_AsMesh_Component                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FArmourComponentData>CallFunc_Map_Values_Values_1                                     (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FArmourComponentData        CallFunc_Array_Get_Item_4                                        (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_7                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsThirdPerson_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateMeshVisibility(bool ArmourWantsFPHidden, bool IsThirdPerson, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UMeshComponent* Temp_wildcard_Variable, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_IsValid_ReturnValue_2, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool Temp_wildcard_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_4, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32 Temp_int_Array_Index_Variable_4, bool CallFunc_IsSeated_ReturnValue, TArray<struct FArmourComponentData>& CallFunc_Map_Values_Values, class AController* CallFunc_GetController_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable_5, bool CallFunc_IsValid_ReturnValue_5, const struct FArmourComponentData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_NotEqual_BoolBool_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, int32 Temp_int_Array_Index_Variable_6, bool CallFunc_GetIsThirdPerson_ReturnValue, const struct FArmourRowHandle& CallFunc_Array_Get_Item_1, const struct FArmourData& CallFunc_GetArmourStruct_Armour, enum class EValid CallFunc_GetArmourStruct_Paths, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, bool K2Node_SwitchEnum_CmpSuccess, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item_3, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_5, TArray<struct FArmourComponentData>& CallFunc_Map_Values_Values_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FArmourComponentData& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_3, class USkeletalMeshComponent* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_4, class USkeletalMeshComponent* CallFunc_Array_Get_Item_6, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, int32 CallFunc_Array_Length_ReturnValue_5, class USkeletalMeshComponent* CallFunc_Array_Get_Item_7, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_5, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, bool CallFunc_GetIsThirdPerson_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_6, bool CallFunc_Less_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateMeshVisibility");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateMeshVisibility_Params Parms{};

	Parms.ArmourWantsFPHidden = ArmourWantsFPHidden;
	Parms.IsThirdPerson = IsThirdPerson;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetRootMeshComponent_ReturnValue = CallFunc_GetRootMeshComponent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetRootMeshComponent_ReturnValue_1 = CallFunc_GetRootMeshComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_IsSeated_ReturnValue = CallFunc_IsSeated_ReturnValue;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_5 = Temp_int_Array_Index_Variable_5;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue_1 = CallFunc_NotEqual_BoolBool_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_6 = Temp_int_Array_Index_Variable_6;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue = CallFunc_GetIsThirdPerson_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetArmourStruct_Armour = CallFunc_GetArmourStruct_Armour;
	Parms.CallFunc_GetArmourStruct_Paths = CallFunc_GetArmourStruct_Paths;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.K2Node_DynamicCast_AsMesh_Component = K2Node_DynamicCast_AsMesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_5 = Temp_int_Loop_Counter_Variable_5;
	Parms.CallFunc_Map_Values_Values_1 = CallFunc_Map_Values_Values_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_7 = CallFunc_Array_Get_Item_7;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_GetIsThirdPerson_ReturnValue_1 = CallFunc_GetIsThirdPerson_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_6 = Temp_int_Loop_Counter_Variable_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_6 = CallFunc_Less_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InitialiseInventories
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InitialiseInventories(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_3, class UInventory* CallFunc_GetInventory_ReturnValue_4, class UInventory* CallFunc_GetInventory_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InitialiseInventories");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InitialiseInventories_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue_1 = CallFunc_GetInventory_ReturnValue_1;
	Parms.CallFunc_GetInventory_ReturnValue_2 = CallFunc_GetInventory_ReturnValue_2;
	Parms.CallFunc_GetInventory_ReturnValue_3 = CallFunc_GetInventory_ReturnValue_3;
	Parms.CallFunc_GetInventory_ReturnValue_4 = CallFunc_GetInventory_ReturnValue_4;
	Parms.CallFunc_GetInventory_ReturnValue_5 = CallFunc_GetInventory_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnDamageEffects
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorStateIn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DamageTaken                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDamageEvent                DamageEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class AController*                 Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      PawnDamageCauser                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     Temp_wildcard_Variable_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledWithMountResolve_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScreenHitEffectsStrength_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_wildcard_Variable_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorEyesViewPoint_OutLocation                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorEyesViewPoint_OutRotation                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClampAxis_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnDamageEffects(class UActorState* ActorStateIn, int32 DamageTaken, struct FDamageEvent& DamageEvent, class AController* Instigator, class AActor* DamageCauser, class AActor* PawnDamageCauser, const struct FVector& Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& Temp_wildcard_Variable_1, bool CallFunc_IsLocallyControlledWithMountResolve_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, float CallFunc_GetScreenHitEffectsStrength_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_GetGameTimeInSeconds_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, class AActor* Temp_wildcard_Variable_2, const struct FVector& CallFunc_GetActorEyesViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorEyesViewPoint_OutRotation, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_ClampAxis_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnDamageEffects");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnDamageEffects_Params Parms{};

	Parms.ActorStateIn = ActorStateIn;
	Parms.DamageTaken = DamageTaken;
	Parms.DamageEvent = DamageEvent;
	Parms.Instigator = Instigator;
	Parms.DamageCauser = DamageCauser;
	Parms.PawnDamageCauser = PawnDamageCauser;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPawn = K2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.CallFunc_IsLocallyControlledWithMountResolve_ReturnValue = CallFunc_IsLocallyControlledWithMountResolve_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.CallFunc_GetScreenHitEffectsStrength_ReturnValue = CallFunc_GetScreenHitEffectsStrength_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.Temp_wildcard_Variable_2 = Temp_wildcard_Variable_2;
	Parms.CallFunc_GetActorEyesViewPoint_OutLocation = CallFunc_GetActorEyesViewPoint_OutLocation;
	Parms.CallFunc_GetActorEyesViewPoint_OutRotation = CallFunc_GetActorEyesViewPoint_OutRotation;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = CallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue_1 = CallFunc_NormalizedDeltaRotator_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_ClampAxis_ReturnValue = CallFunc_ClampAxis_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TickPostProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              HeartbeatIntensity                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakePulsatingValue_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Percent_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::TickPostProcessing(float DeltaTime, float HeartbeatIntensity, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_MakePulsatingValue_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, float CallFunc_GetFloatValue_ReturnValue, float CallFunc_Lerp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TickPostProcessing");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TickPostProcessing_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.HeartbeatIntensity = HeartbeatIntensity;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_MakePulsatingValue_ReturnValue = CallFunc_MakePulsatingValue_ReturnValue;
	Parms.CallFunc_Percent_FloatFloat_ReturnValue = CallFunc_Percent_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InitPostProcessing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// TScriptInterface<class IBlendableInterface>CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1      (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)

void ABP_IcarusPlayerCharacterSurvival_C::InitPostProcessing(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput, TScriptInterface<class IBlendableInterface> CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InitPostProcessing");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InitPostProcessing_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput;
	Parms.CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1 = CallFunc_AddOrUpdateBlendable_InBlendableObject_CastInput_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetInventoryById
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventoryID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Inventory                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryIDEnum            CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetInventory_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::GetInventoryById(int32 InventoryID, class UInventory** Inventory, const struct FInventoryIDEnum& CallFunc_IntToStruct_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetInventoryById");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetInventoryById_Params Parms{};

	Parms.InventoryID = InventoryID;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_GetInventory_ReturnValue = CallFunc_GetInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Inventory != nullptr)
		*Inventory = Parms.Inventory;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TryCreate2DDamageIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Attacker                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DamageIndicator_C*      ExistingWidget                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AlreadyExists                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DamageIndicator_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DamageIndicator_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TryCreate2DDamageIndicator(class AActor* Attacker, class UUMG_DamageIndicator_C* ExistingWidget, bool AlreadyExists, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_DamageIndicator_C* CallFunc_Create_ReturnValue, class UUMG_DamageIndicator_C* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TryCreate2DDamageIndicator");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TryCreate2DDamageIndicator_Params Parms{};

	Parms.Attacker = Attacker;
	Parms.ExistingWidget = ExistingWidget;
	Parms.AlreadyExists = AlreadyExists;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TickDamageIndicators
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_DamageIndicator_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TickDamageIndicators(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUMG_DamageIndicator_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TickDamageIndicators");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TickDamageIndicators_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateFirstPersonMeshRotation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRotator                    Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NormalizedDeltaRotator_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateFirstPersonMeshRotation(const struct FRotator& Temp_wildcard_Variable, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_GetCurveValue_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateFirstPersonMeshRotation");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateFirstPersonMeshRotation_Params Parms{};

	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_NormalizedDeltaRotator_ReturnValue = CallFunc_NormalizedDeltaRotator_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue_1 = CallFunc_GetControlRotation_ReturnValue_1;
	Parms.CallFunc_BreakRotator_Roll_1 = CallFunc_BreakRotator_Roll_1;
	Parms.CallFunc_BreakRotator_Pitch_1 = CallFunc_BreakRotator_Pitch_1;
	Parms.CallFunc_BreakRotator_Yaw_1 = CallFunc_BreakRotator_Yaw_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnInteractableLineTraceHit
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::OnInteractableLineTraceHit(struct FHitResult& HitResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EValid CallFunc_GetTrait_Paths, class UInteractableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnInteractableLineTraceHit");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnInteractableLineTraceHit_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.GetBPIcarusPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ABP_IcarusPlayerControllerSurvival_C*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class ABP_IcarusPlayerControllerSurvival_C* ABP_IcarusPlayerCharacterSurvival_C::GetBPIcarusPlayerController(class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "GetBPIcarusPlayerController");

	Params::ABP_IcarusPlayerCharacterSurvival_C_GetBPIcarusPlayerController_Params Parms{};

	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Quickbar Inventory Updated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSecondaryFocusedItemSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Quickbar_Inventory_Updated(class UInventory* Inventory, int32 Location, int32 CallFunc_GetSecondaryFocusedItemSlot_ReturnValue, int32 Temp_wildcard_Variable, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Quickbar Inventory Updated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Quickbar_Inventory_Updated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;
	Parms.CallFunc_GetSecondaryFocusedItemSlot_ReturnValue = CallFunc_GetSecondaryFocusedItemSlot_ReturnValue;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateUtilitySlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   ItemData                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMeshableData               CallFunc_GetMeshableData_MeshableData                            (None)
// enum class EDataValid              CallFunc_GetMeshableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStreamableRenderAsset*      K2Node_DynamicCast_AsStreamable_Render_Asset                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// struct FItemAttachmentData         CallFunc_GetFocusableAttachmentData_AttachmentData               (None)
// enum class EDataValid              CallFunc_GetFocusableAttachmentData_Paths                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue_1                                   (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::UpdateUtilitySlot(const struct FItemData& ItemData, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMeshableData& CallFunc_GetMeshableData_MeshableData, enum class EDataValid CallFunc_GetMeshableData_Paths, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UStreamableRenderAsset* K2Node_DynamicCast_AsStreamable_Render_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, const struct FItemData& CallFunc_GetItem_ReturnValue, const struct FItemAttachmentData& CallFunc_GetFocusableAttachmentData_AttachmentData, enum class EDataValid CallFunc_GetFocusableAttachmentData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateUtilitySlot");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UpdateUtilitySlot_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetMeshableData_MeshableData = CallFunc_GetMeshableData_MeshableData;
	Parms.CallFunc_GetMeshableData_Paths = CallFunc_GetMeshableData_Paths;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsStreamable_Render_Asset = K2Node_DynamicCast_AsStreamable_Render_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_GetFocusableAttachmentData_AttachmentData = CallFunc_GetFocusableAttachmentData_AttachmentData;
	Parms.CallFunc_GetFocusableAttachmentData_Paths = CallFunc_GetFocusableAttachmentData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue_1 = CallFunc_GetItem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetFocusedSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewFocused                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForceSet                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetSecondaryFocusedItemSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetFocusedSlot(int32 NewFocused, bool ForceSet, int32 CallFunc_GetSecondaryFocusedItemSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetFocusedSlot");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetFocusedSlot_Params Parms{};

	Parms.NewFocused = NewFocused;
	Parms.ForceSet = ForceSet;
	Parms.CallFunc_GetSecondaryFocusedItemSlot_ReturnValue = CallFunc_GetSecondaryFocusedItemSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetClientAuthority
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldHaveAuthority                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetClientAuthority(bool ShouldHaveAuthority, const class FString& CallFunc_MakeLiteralString_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetClientAuthority");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetClientAuthority_Params Parms{};

	Parms.ShouldHaveAuthority = ShouldHaveAuthority;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.CheckListenServerDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_IcarusPlayerCharacterSurvival_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerCharacterSurvival_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::CheckListenServerDistance(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_IcarusPlayerCharacterSurvival_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_IcarusPlayerCharacterSurvival_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "CheckListenServerDistance");

	Params::ABP_IcarusPlayerCharacterSurvival_C_CheckListenServerDistance_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_IsLocalCrafting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_IsLocalCrafting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_IsLocalCrafting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnProcessingStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EProcessorStoppedReason Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnProcessingStopped(enum class EProcessorStoppedReason Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnProcessingStopped");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnProcessingStopped_Params Parms{};

	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetMeshMontagePlayRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetMeshMontagePlayRate(class USkeletalMeshComponent* Mesh, float PlayRate, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetMeshMontagePlayRate");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetMeshMontagePlayRate_Params Parms{};

	Parms.Mesh = Mesh;
	Parms.PlayRate = PlayRate;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_FocusedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDurableComponent*           CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMeshComponent*              CallFunc_GetRootMeshComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusCharacterAnimInstance*K2Node_DynamicCast_AsIcarus_Character_Anim_Instance              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusCharacterAnimInstance*K2Node_DynamicCast_AsIcarus_Character_Anim_Instance_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_FocusedItem(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UDurableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UMeshComponent* CallFunc_GetRootMeshComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UIcarusCharacterAnimInstance* K2Node_DynamicCast_AsIcarus_Character_Anim_Instance, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UIcarusCharacterAnimInstance* K2Node_DynamicCast_AsIcarus_Character_Anim_Instance_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_FocusedItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnRep_FocusedItem_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetRootMeshComponent_ReturnValue = CallFunc_GetRootMeshComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Character_Anim_Instance = K2Node_DynamicCast_AsIcarus_Character_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIcarus_Character_Anim_Instance_1 = K2Node_DynamicCast_AsIcarus_Character_Anim_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.DropItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   InventoryItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FIcarusItemConstructionParametersK2Node_MakeStruct_IcarusItemConstructionParameters               (None)
// bool                               CallFunc_DropItem_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemStaticData             CallFunc_GetStaticItemData_StaticData                            (None)
// enum class EDataValid              CallFunc_GetStaticItemData_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusItemSpawnParameters  K2Node_MakeStruct_IcarusItemSpawnParameters                      (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDataValid              CallFunc_ItemDataValid_Paths                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetDropTransform_ReturnValue                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusItem*                 CallFunc_SpawnItemActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_IcarusPlayerCharacterSurvival_C::DropItem(struct FItemData& InventoryItem, const struct FIcarusItemConstructionParameters& K2Node_MakeStruct_IcarusItemConstructionParameters, bool CallFunc_DropItem_ReturnValue, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, bool K2Node_SwitchEnum_CmpSuccess, enum class EDataValid CallFunc_ItemDataValid_Paths, const struct FTransform& CallFunc_GetDropTransform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "DropItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_DropItem_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.K2Node_MakeStruct_IcarusItemConstructionParameters = K2Node_MakeStruct_IcarusItemConstructionParameters;
	Parms.CallFunc_DropItem_ReturnValue = CallFunc_DropItem_ReturnValue;
	Parms.CallFunc_GetStaticItemData_StaticData = CallFunc_GetStaticItemData_StaticData;
	Parms.CallFunc_GetStaticItemData_Paths = CallFunc_GetStaticItemData_Paths;
	Parms.K2Node_MakeStruct_IcarusItemSpawnParameters = K2Node_MakeStruct_IcarusItemSpawnParameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemDataValid_Paths = CallFunc_ItemDataValid_Paths;
	Parms.CallFunc_GetDropTransform_ReturnValue = CallFunc_GetDropTransform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SpawnItemActor_ReturnValue = CallFunc_SpawnItemActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnRep_CurrentFocusedGrid
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnRep_CurrentFocusedGrid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnRep_CurrentFocusedGrid");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PickupItem
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusItem*                 Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FItemData                   ItemInfo                                                         (Edit, BlueprintVisible, ContainsInstancedReference)
// class ABP_IcarusPlayerControllerSurvival_C*CallFunc_GetBPIcarusPlayerController_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_SerializeItemData_OutItemData                           (ContainsInstancedReference)
// bool                               CallFunc_OnPickedUp_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABP_IcarusPlayerCharacterSurvival_C::PickupItem(class AIcarusItem* Item, const struct FItemData& ItemInfo, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetBPIcarusPlayerController_ReturnValue, const struct FItemData& CallFunc_SerializeItemData_OutItemData, bool CallFunc_OnPickedUp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PickupItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PickupItem_Params Parms{};

	Parms.Item = Item;
	Parms.ItemInfo = ItemInfo;
	Parms.CallFunc_GetBPIcarusPlayerController_ReturnValue = CallFunc_GetBPIcarusPlayerController_ReturnValue;
	Parms.CallFunc_SerializeItemData_OutItemData = CallFunc_SerializeItemData_OutItemData;
	Parms.CallFunc_OnPickedUp_ReturnValue = CallFunc_OnPickedUp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PP_EnterWater__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PP_EnterWater__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PP_EnterWater__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PP_EnterWater__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PP_EnterWater__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PP_EnterWater__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PP_ExitWater__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PP_ExitWater__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PP_ExitWater__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PP_ExitWater__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PP_ExitWater__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PP_ExitWater__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_DestroyBuildingPiece_K2Node_InputActionEvent_26
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_DestroyBuildingPiece_K2Node_InputActionEvent_26(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_DestroyBuildingPiece_K2Node_InputActionEvent_26");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_DestroyBuildingPiece_K2Node_InputActionEvent_26_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_UnfocusGrid_K2Node_InputActionEvent_25
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_UnfocusGrid_K2Node_InputActionEvent_25(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_UnfocusGrid_K2Node_InputActionEvent_25");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_UnfocusGrid_K2Node_InputActionEvent_25_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_24
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_24(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_24");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_24_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_23
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_23(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_23");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_23_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_LowerGridOffset_K2Node_InputActionEvent_22
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_LowerGridOffset_K2Node_InputActionEvent_22(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_LowerGridOffset_K2Node_InputActionEvent_22");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_LowerGridOffset_K2Node_InputActionEvent_22_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_LowerGridOffset_K2Node_InputActionEvent_21
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_LowerGridOffset_K2Node_InputActionEvent_21(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_LowerGridOffset_K2Node_InputActionEvent_21");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_LowerGridOffset_K2Node_InputActionEvent_21_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_DisableGridFocus_K2Node_InputActionEvent_20
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_DisableGridFocus_K2Node_InputActionEvent_20(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_DisableGridFocus_K2Node_InputActionEvent_20");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_DisableGridFocus_K2Node_InputActionEvent_20_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_DropItem_K2Node_InputActionEvent_19
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_DropItem_K2Node_InputActionEvent_19(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_DropItem_K2Node_InputActionEvent_19");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_DropItem_K2Node_InputActionEvent_19_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Fire_K2Node_InputActionEvent_18
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Fire_K2Node_InputActionEvent_18(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Fire_K2Node_InputActionEvent_18");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Fire_K2Node_InputActionEvent_18_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Fire_K2Node_InputActionEvent_17
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Fire_K2Node_InputActionEvent_17(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Fire_K2Node_InputActionEvent_17");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Fire_K2Node_InputActionEvent_17_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnNotifyEnd_73A9C6B443141D46AED12983C3AE154D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnNotifyEnd_73A9C6B443141D46AED12983C3AE154D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnNotifyEnd_73A9C6B443141D46AED12983C3AE154D");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnNotifyEnd_73A9C6B443141D46AED12983C3AE154D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnNotifyBegin_73A9C6B443141D46AED12983C3AE154D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnNotifyBegin_73A9C6B443141D46AED12983C3AE154D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnNotifyBegin_73A9C6B443141D46AED12983C3AE154D");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnNotifyBegin_73A9C6B443141D46AED12983C3AE154D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnInterrupted_73A9C6B443141D46AED12983C3AE154D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnInterrupted_73A9C6B443141D46AED12983C3AE154D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnInterrupted_73A9C6B443141D46AED12983C3AE154D");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnInterrupted_73A9C6B443141D46AED12983C3AE154D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnBlendOut_73A9C6B443141D46AED12983C3AE154D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnBlendOut_73A9C6B443141D46AED12983C3AE154D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnBlendOut_73A9C6B443141D46AED12983C3AE154D");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnBlendOut_73A9C6B443141D46AED12983C3AE154D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnCompleted_73A9C6B443141D46AED12983C3AE154D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnCompleted_73A9C6B443141D46AED12983C3AE154D(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnCompleted_73A9C6B443141D46AED12983C3AE154D");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnCompleted_73A9C6B443141D46AED12983C3AE154D_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnNotifyEnd_A821C3C945D48F8C05AB66B9866C4D58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnNotifyEnd_A821C3C945D48F8C05AB66B9866C4D58(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnNotifyEnd_A821C3C945D48F8C05AB66B9866C4D58");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnNotifyEnd_A821C3C945D48F8C05AB66B9866C4D58_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnNotifyBegin_A821C3C945D48F8C05AB66B9866C4D58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnNotifyBegin_A821C3C945D48F8C05AB66B9866C4D58(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnNotifyBegin_A821C3C945D48F8C05AB66B9866C4D58");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnNotifyBegin_A821C3C945D48F8C05AB66B9866C4D58_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnInterrupted_A821C3C945D48F8C05AB66B9866C4D58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnInterrupted_A821C3C945D48F8C05AB66B9866C4D58(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnInterrupted_A821C3C945D48F8C05AB66B9866C4D58");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnInterrupted_A821C3C945D48F8C05AB66B9866C4D58_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnBlendOut_A821C3C945D48F8C05AB66B9866C4D58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnBlendOut_A821C3C945D48F8C05AB66B9866C4D58(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnBlendOut_A821C3C945D48F8C05AB66B9866C4D58");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnBlendOut_A821C3C945D48F8C05AB66B9866C4D58_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnCompleted_A821C3C945D48F8C05AB66B9866C4D58
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Notify                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnCompleted_A821C3C945D48F8C05AB66B9866C4D58(class FName NotifyName, class UAnimNotify* Notify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnCompleted_A821C3C945D48F8C05AB66B9866C4D58");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnCompleted_A821C3C945D48F8C05AB66B9866C4D58_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.Notify = Notify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Sprint_K2Node_InputActionEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Sprint_K2Node_InputActionEvent_16(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Sprint_K2Node_InputActionEvent_16");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Sprint_K2Node_InputActionEvent_16_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Sprint_K2Node_InputActionEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Sprint_K2Node_InputActionEvent_15(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Sprint_K2Node_InputActionEvent_15");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Sprint_K2Node_InputActionEvent_15_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_AltFire_K2Node_InputActionEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_AltFire_K2Node_InputActionEvent_14(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_AltFire_K2Node_InputActionEvent_14");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_AltFire_K2Node_InputActionEvent_14_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_AltFire_K2Node_InputActionEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_AltFire_K2Node_InputActionEvent_13(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_AltFire_K2Node_InputActionEvent_13");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_AltFire_K2Node_InputActionEvent_13_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Interact_K2Node_InputActionEvent_12(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Interact_K2Node_InputActionEvent_12");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Interact_K2Node_InputActionEvent_12_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Interact_K2Node_InputActionEvent_11(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Interact_K2Node_InputActionEvent_11");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Interact_K2Node_InputActionEvent_11_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Reload_K2Node_InputActionEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Reload_K2Node_InputActionEvent_10(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Reload_K2Node_InputActionEvent_10");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Reload_K2Node_InputActionEvent_10_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Reload_K2Node_InputActionEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Reload_K2Node_InputActionEvent_9(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Reload_K2Node_InputActionEvent_9");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Reload_K2Node_InputActionEvent_9_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Escape_K2Node_InputActionEvent_8
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Escape_K2Node_InputActionEvent_8(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Escape_K2Node_InputActionEvent_8");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Escape_K2Node_InputActionEvent_8_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_ChangeFireMode_K2Node_InputActionEvent_7
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_ChangeFireMode_K2Node_InputActionEvent_7(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_ChangeFireMode_K2Node_InputActionEvent_7");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_ChangeFireMode_K2Node_InputActionEvent_7_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Crouch_K2Node_InputActionEvent_6
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Crouch_K2Node_InputActionEvent_6(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Crouch_K2Node_InputActionEvent_6");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Crouch_K2Node_InputActionEvent_6_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Crouch_K2Node_InputActionEvent_5
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Crouch_K2Node_InputActionEvent_5(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Crouch_K2Node_InputActionEvent_5");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Crouch_K2Node_InputActionEvent_5_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_AltInteract_K2Node_InputActionEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_AltInteract_K2Node_InputActionEvent_4(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_AltInteract_K2Node_InputActionEvent_4");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_AltInteract_K2Node_InputActionEvent_4_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_AltInteract_K2Node_InputActionEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_AltInteract_K2Node_InputActionEvent_3(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_AltInteract_K2Node_InputActionEvent_3");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_AltInteract_K2Node_InputActionEvent_3_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_Emote_K2Node_InputActionEvent_2
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_Emote_K2Node_InputActionEvent_2(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_Emote_K2Node_InputActionEvent_2");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_Emote_K2Node_InputActionEvent_2_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_1
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_1");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_1_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_0
// (BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_0(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_0");

	Params::ABP_IcarusPlayerCharacterSurvival_C_InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_0_Params Parms{};

	Parms.Key = Key;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ServerStartBuildingDestruction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABuildingBase*               BuildingToDestroy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ServerStartBuildingDestruction(class ABuildingBase* BuildingToDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ServerStartBuildingDestruction");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ServerStartBuildingDestruction_Params Parms{};

	Parms.BuildingToDestroy = BuildingToDestroy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ServerSetFocusedGrid
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Grid_Base_C*             RemoteFocusGrid                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ServerSetFocusedGrid(class ABP_Grid_Base_C* RemoteFocusGrid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ServerSetFocusedGrid");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ServerSetFocusedGrid_Params Parms{};

	Parms.RemoteFocusGrid = RemoteFocusGrid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.DeleteBuilding
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::DeleteBuilding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "DeleteBuilding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ServerDisableGridAutoFocus
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::ServerDisableGridAutoFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ServerDisableGridAutoFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnShowRepairWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnShowRepairWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnShowRepairWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ServerPlayerAction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EActionableEventType    ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      Trigger                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerActionTargetTypeEnumTarget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ServerPlayerAction(enum class EActionableEventType ActionType, enum class EActionableTrigger Trigger, enum class EPlayerActionTargetTypeEnum Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ServerPlayerAction");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ServerPlayerAction_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.Trigger = Trigger;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateDropLocation
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::UpdateDropLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateDropLocation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.QuickbarItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::QuickbarItemUpdated(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "QuickbarItemUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_QuickbarItemUpdated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayerAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EActionableEventType    ActionType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      Trigger                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerActionTargetTypeEnumTarget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::PlayerAction(enum class EActionableEventType ActionType, enum class EActionableTrigger Trigger, enum class EPlayerActionTargetTypeEnum Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayerAction");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayerAction_Params Parms{};

	Parms.ActionType = ActionType;
	Parms.Trigger = Trigger;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Inventory_BeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Inventory_BeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Inventory_BeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Update Focused Hotbar Slot
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Update_Focused_Hotbar_Slot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Update Focused Hotbar Slot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.FocusedItemCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::FocusedItemCheck(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "FocusedItemCheck");

	Params::ABP_IcarusPlayerCharacterSurvival_C_FocusedItemCheck_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.QuickBar_OnDroppingOverflowItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::QuickBar_OnDroppingOverflowItem(struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "QuickBar_OnDroppingOverflowItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_QuickBar_OnDroppingOverflowItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Backpack_OnDroppingOverflowItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::Backpack_OnDroppingOverflowItem(struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Backpack_OnDroppingOverflowItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Backpack_OnDroppingOverflowItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Upgrade_OnDroppingOverflowItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::Upgrade_OnDroppingOverflowItem(struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Upgrade_OnDroppingOverflowItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Upgrade_OnDroppingOverflowItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Vision_OnDroppingOverflowItem
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::Vision_OnDroppingOverflowItem(struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Vision_OnDroppingOverflowItem");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Vision_OnDroppingOverflowItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.VisionItemUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::VisionItemUpdated(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "VisionItemUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_VisionItemUpdated_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.EquipmentItemBroke
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::EquipmentItemBroke(class UInventory* Inventory, int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "EquipmentItemBroke");

	Params::ABP_IcarusPlayerCharacterSurvival_C_EquipmentItemBroke_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Location = Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Owner_EquipmentItemBroke
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::Owner_EquipmentItemBroke(const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Owner_EquipmentItemBroke");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Owner_EquipmentItemBroke_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ReceiveTick");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PlayMontage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FP_Montage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LockMotion                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        FP_StartingSection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlaySpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::PlayMontage(class UAnimMontage* Montage, class UAnimMontage* FP_Montage, bool LockMotion, class FName StartingSection, class FName FP_StartingSection, float PlaySpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PlayMontage");

	Params::ABP_IcarusPlayerCharacterSurvival_C_PlayMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.FP_Montage = FP_Montage;
	Parms.LockMotion = LockMotion;
	Parms.StartingSection = StartingSection;
	Parms.FP_StartingSection = FP_StartingSection;
	Parms.PlaySpeed = PlaySpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetMontagePlayRate
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetMontagePlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetMontagePlayRate");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetMontagePlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.DebugConnections
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::DebugConnections()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "DebugConnections");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.StartLocalCrafting
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::StartLocalCrafting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "StartLocalCrafting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetupCharacterCosmetics
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::SetupCharacterCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetupCharacterCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Client_SetClientAuthority
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasAuthority                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Client_SetClientAuthority(bool HasAuthority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Client_SetClientAuthority");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Client_SetClientAuthority_Params Parms{};

	Parms.HasAuthority = HasAuthority;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.DebugCameraShake
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ShakeClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::DebugCameraShake(class UClass* ShakeClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "DebugCameraShake");

	Params::ABP_IcarusPlayerCharacterSurvival_C_DebugCameraShake_Params Parms{};

	Parms.ShakeClass = ShakeClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnJumped
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnJumped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnJumped");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_IcarusPlayerCharacterSurvival_C::OnLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnLanded");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnLanded_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Multicast_JumpRequested
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Multicast_JumpRequested()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Multicast_JumpRequested");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InteractHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::InteractHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InteractHeld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.HealthUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::HealthUpdated(class UActorState* ActorState, float NewHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "HealthUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_HealthUpdated_Params Parms{};

	Parms.ActorState = ActorState;
	Parms.NewHealth = NewHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnAttachedToSeatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASeatBase*                   PreviousSeat                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnAttachedToSeatChanged(class ASeatBase* PreviousSeat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnAttachedToSeatChanged");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnAttachedToSeatChanged_Params Parms{};

	Parms.PreviousSeat = PreviousSeat;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ServerUpdateSurvivalResouces
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::ServerUpdateSurvivalResouces()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ServerUpdateSurvivalResouces");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnHitSuccessful
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStealthAttackType      StealthAttack                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Killcam                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnHitSuccessful(class AActor* HitActor, class AActor* DamageCauser, enum class EStealthAttackType StealthAttack, bool Killcam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnHitSuccessful");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnHitSuccessful_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.DamageCauser = DamageCauser;
	Parms.StealthAttack = StealthAttack;
	Parms.Killcam = Killcam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OwningClient_PlaySuccessfulHitFX
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStealthAttackType      WasStealthAttack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Killcam                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OwningClient_PlaySuccessfulHitFX(class AActor* HitActor, class AActor* DamageCauser, enum class EStealthAttackType WasStealthAttack, bool Killcam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OwningClient_PlaySuccessfulHitFX");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OwningClient_PlaySuccessfulHitFX_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.DamageCauser = DamageCauser;
	Parms.WasStealthAttack = WasStealthAttack;
	Parms.Killcam = Killcam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateCameraPerspective
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::UpdateCameraPerspective()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateCameraPerspective");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Server_PlayWaveAnim
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Server_PlayWaveAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Server_PlayWaveAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Multicast_PlayWaveAnim
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Multicast_PlayWaveAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Multicast_PlayWaveAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Server_AbortInteraction
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Server_AbortInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Server_AbortInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.EndMontage
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                FP_Montage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BleedOutTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::EndMontage(class UAnimMontage* Montage, class UAnimMontage* FP_Montage, float BleedOutTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "EndMontage");

	Params::ABP_IcarusPlayerCharacterSurvival_C_EndMontage_Params Parms{};

	Parms.Montage = Montage;
	Parms.FP_Montage = FP_Montage;
	Parms.BleedOutTime = BleedOutTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ToggleThermalVision
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::ToggleThermalVision()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ToggleThermalVision");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.FOVApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::FOVApplied(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "FOVApplied");

	Params::ABP_IcarusPlayerCharacterSurvival_C_FOVApplied_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ModifyHeatPostprocess
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendWeight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ModifyHeatPostprocess(float BlendWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ModifyHeatPostprocess");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ModifyHeatPostprocess_Params Parms{};

	Parms.BlendWeight = BlendWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ModifyColdPostprocess
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              BlendWeight                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ModifyColdPostprocess(float BlendWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ModifyColdPostprocess");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ModifyColdPostprocess_Params Parms{};

	Parms.BlendWeight = BlendWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Set Post Process Visibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Set_Post_Process_Visibility(bool bLock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Set Post Process Visibility");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Set_Post_Process_Visibility_Params Parms{};

	Parms.bLock = bLock;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.MULTI_OnFocusedItemBroken
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::MULTI_OnFocusedItemBroken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "MULTI_OnFocusedItemBroken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UpdateInventoryDropLocationsBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::UpdateInventoryDropLocationsBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UpdateInventoryDropLocationsBind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.MULTI_PlayItemDroppedSound
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemAudioDataRowHandle     ItemAudio                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DropLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::MULTI_PlayItemDroppedSound(const struct FItemAudioDataRowHandle& ItemAudio, const struct FVector& DropLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "MULTI_PlayItemDroppedSound");

	Params::ABP_IcarusPlayerCharacterSurvival_C_MULTI_PlayItemDroppedSound_Params Parms{};

	Parms.ItemAudio = ItemAudio;
	Parms.DropLocation = DropLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ToggleGOAPWorldStats
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::ToggleGOAPWorldStats(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ToggleGOAPWorldStats");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ToggleGOAPWorldStats_Params Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InteractionAltHeld
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::InteractionAltHeld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InteractionAltHeld");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnFallDamageApplied
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DamageApplied                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FallSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FallStrength                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnFallDamageApplied(float DamageApplied, float FallSpeed, float FallStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnFallDamageApplied");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnFallDamageApplied_Params Parms{};

	Parms.DamageApplied = DamageApplied;
	Parms.FallSpeed = FallSpeed;
	Parms.FallStrength = FallStrength;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnConsumableExpired
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnConsumableExpired(const struct FItemsStaticRowHandle& ItemData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnConsumableExpired");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnConsumableExpired_Params Parms{};

	Parms.ItemData = ItemData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.InteractFoliageCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::InteractFoliageCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "InteractFoliageCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PostFX_EnterWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PostFX_EnterWater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PostFX_EnterWater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PostFx_EnterWaterKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PostFx_EnterWaterKill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PostFx_EnterWaterKill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PostFX_ExitWater
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PostFX_ExitWater()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PostFX_ExitWater");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.PostFX_ExitWaterKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::PostFX_ExitWaterKill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "PostFX_ExitWaterKill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnStaminaUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterState*             ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Stamina                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnStaminaUpdated(class UCharacterState* ActorState, float Stamina)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnStaminaUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnStaminaUpdated_Params Parms{};

	Parms.ActorState = ActorState;
	Parms.Stamina = Stamina;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ReceiveEndPlay");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetCharacterVisibility
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewVisible                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetCharacterVisibility(bool NewVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetCharacterVisibility");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetCharacterVisibility_Params Parms{};

	Parms.NewVisible = NewVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Server_FocusAndUseItemFromMenu
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::Server_FocusAndUseItemFromMenu(class UInventory* Inventory, int32 Slot, const struct FUsesEnum& Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Server_FocusAndUseItemFromMenu");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Server_FocusAndUseItemFromMenu_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnItemUsed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FUsesRowHandle              Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnItemUsed(const struct FItemsStaticRowHandle& ItemData, const struct FUsesRowHandle& Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnItemUsed");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnItemUsed_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnConnectedPlayerInitialised
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnConnectedPlayerInitialised()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnConnectedPlayerInitialised");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OwningClient_OnCraftedRecipe
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              CountInQueue                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OwningClient_OnCraftedRecipe(const struct FProcessorRecipesRowHandle& Recipe, int32 CountInQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OwningClient_OnCraftedRecipe");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OwningClient_OnCraftedRecipe_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.CountInQueue = CountInQueue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.MULTI_OnPlayersSlept
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::MULTI_OnPlayersSlept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "MULTI_OnPlayersSlept");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnJumpFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnJumpFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnJumpFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnActorHiddenStateUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsHidden                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnActorHiddenStateUpdated(bool bIsHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnActorHiddenStateUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnActorHiddenStateUpdated_Params Parms{};

	Parms.bIsHidden = bIsHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnItemUseFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FUsesRowHandle              Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnItemUseFailed(const struct FItemsStaticRowHandle& ItemData, const struct FUsesRowHandle& Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnItemUseFailed");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnItemUseFailed_Params Parms{};

	Parms.ItemData = ItemData;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Server_SetCaveState
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInCave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Server_SetCaveState(bool IsInCave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Server_SetCaveState");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Server_SetCaveState_Params Parms{};

	Parms.IsInCave = IsInCave;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.NotifyAddedMovementInput
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     WorldDirection                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ScaleValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bForce                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::NotifyAddedMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "NotifyAddedMovementInput");

	Params::ABP_IcarusPlayerCharacterSurvival_C_NotifyAddedMovementInput_Params Parms{};

	Parms.WorldDirection = WorldDirection;
	Parms.ScaleValue = ScaleValue;
	Parms.bForce = bForce;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnMovementInputsEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnMovementInputsEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnMovementInputsEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.CheckEndedMovementInputs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::CheckEndedMovementInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "CheckEndedMovementInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnFrozenMovementChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnFrozenMovementChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnFrozenMovementChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.FocusAndUseItemFromMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   Use                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::FocusAndUseItemFromMenu(class UInventory* Inventory, int32 Slot, const struct FUsesEnum& Use)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "FocusAndUseItemFromMenu");

	Params::ABP_IcarusPlayerCharacterSurvival_C_FocusAndUseItemFromMenu_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Slot = Slot;
	Parms.Use = Use;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Debug_DrawArmourComponent
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::Debug_DrawArmourComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Debug_DrawArmourComponent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.Debug_SetGOAPWorldStatsActive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::Debug_SetGOAPWorldStatsActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "Debug_SetGOAPWorldStatsActive");

	Params::ABP_IcarusPlayerCharacterSurvival_C_Debug_SetGOAPWorldStatsActive_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetThermalVisionActive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetThermalVisionActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetThermalVisionActive");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetThermalVisionActive_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetIsTravellingInDropship
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsInDropship                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetIsTravellingInDropship(bool bIsInDropship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetIsTravellingInDropship");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetIsTravellingInDropship_Params Parms{};

	Parms.bIsInDropship = bIsInDropship;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetCaveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInCave                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CaveActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetCaveState(bool IsInCave, class AActor* CaveActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetCaveState");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetCaveState_Params Parms{};

	Parms.IsInCave = IsInCave;
	Parms.CaveActor = CaveActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnFootstepAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepType           FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      PlayerStance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnFootstepAnimNotify(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnFootstepAnimNotify");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnFootstepAnimNotify_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.PlayerStance = PlayerStance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnSwimStrokeAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnSwimStrokeAnimNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnSwimStrokeAnimNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetAimVignetteIntensity
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewIntensityTarget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InterpSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::SetAimVignetteIntensity(float NewIntensityTarget, float InterpSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetAimVignetteIntensity");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetAimVignetteIntensity_Params Parms{};

	Parms.NewIntensityTarget = NewIntensityTarget;
	Parms.InterpSpeed = InterpSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.SetADSOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  NewOffset                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::SetADSOffset(struct FTransform& NewOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "SetADSOffset");

	Params::ABP_IcarusPlayerCharacterSurvival_C_SetADSOffset_Params Parms{};

	Parms.NewOffset = NewOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.K2_OnMovementModeChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           NewMovementMode                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PrevCustomMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              NewCustomMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "K2_OnMovementModeChanged");

	Params::ABP_IcarusPlayerCharacterSurvival_C_K2_OnMovementModeChanged_Params Parms{};

	Parms.PrevMovementMode = PrevMovementMode;
	Parms.NewMovementMode = NewMovementMode;
	Parms.PrevCustomMode = PrevCustomMode;
	Parms.NewCustomMode = NewCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnAliveStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorState*                 ActorState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnAliveStateChanged(class UActorState* ActorState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnAliveStateChanged");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnAliveStateChanged_Params Parms{};

	Parms.ActorState = ActorState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnModifiersUpdated
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UModifierStateComponent*     ModifiedComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Removed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::OnModifiersUpdated(class UModifierStateComponent* ModifiedComponent, bool Removed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnModifiersUpdated");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnModifiersUpdated_Params Parms{};

	Parms.ModifiedComponent = ModifiedComponent;
	Parms.Removed = Removed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnStatContainerUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnStatContainerUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnStatContainerUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ExecuteUbergraph_BP_IcarusPlayerCharacterSurvival
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerFeedbackSubsystem*    CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerFeedbackSubsystem*    CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_3                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable                                             (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key                                      (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_2      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_1                                    (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_2                                    (HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_3      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTimeOfDaySubsystem*         CallFunc_GetWorldSubsystem_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_4                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify*                 Temp_object_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_4                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_4      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_4            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_5                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_5                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_5      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_5            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_6                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_6      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_6            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_7                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_7      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_7            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_6                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_7                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_8                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABuildingBase*               K2Node_CustomEvent_BuildingToDestroy                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_8                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_Flammable_Actor_C*       CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_8      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_8            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCurrentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class ABP_Grid_Base_C*             K2Node_CustomEvent_RemoteFocusGrid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_9                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_9                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// struct FRotator                    CallFunc_GetCameraRotation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_1                                           (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_17                                   (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_18                                   (HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_CustomEvent_ActionType_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_CustomEvent_Trigger_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerActionTargetTypeEnumK2Node_CustomEvent_Target_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanDropItemFromInventory_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlayerActionTargetTypeEnumTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_CustomEvent_Inventory_4                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableEventType    K2Node_CustomEvent_ActionType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionableTrigger      K2Node_CustomEvent_Trigger                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerActionTargetTypeEnumK2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryIDEnum            CallFunc_GetInventoryID_ReturnValue                              (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_EnumEnum_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory_3                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemInventoryAndSlot_Validity_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValidity           CallFunc_GetFocusedItemData_Validity                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetFocusedItemData_ReturnValue                          (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_Item_4                                        (ConstParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetDropTransform_ReturnValue                            (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_Item_3                                        (ConstParm, ContainsInstancedReference)
// struct FItemData                   K2Node_CustomEvent_Item_2                                        (ConstParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetDropTransform_ReturnValue_1                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetDropTransform_ReturnValue_2                          (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_CustomEvent_Item_1                                        (ConstParm, ContainsInstancedReference)
// struct FTransform                  CallFunc_GetDropTransform_ReturnValue_3                          (IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory_2                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_CustomEvent_Inventory_1                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Location                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_CustomEvent_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FItemData                   CallFunc_GetItem_ReturnValue                                     (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class UAnimMontage*                K2Node_Event_Montage_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_FP_Montage_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_LockMotion                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Event_StartingSection                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_FP_StartingSection                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_PlaySpeed                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_10                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_9      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_9            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_PlayRate                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent*         CallFunc_GetTrait_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_HasAuthority                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_11                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_10     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_10           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class UClass*                      K2Node_CustomEvent_ShakeClass                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActorState*                 K2Node_CustomEvent_ActorState_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeatBase*                   K2Node_Event_PreviousSeat                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerState_C*     K2Node_DynamicCast_AsBP_Icarus_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_12                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_11     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_11           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_2                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_19                                   (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_3                                    (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_4                                    (HasGetValueTypeHash)
// int32                              CallFunc_GetStamina_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_17                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerCharacterState*       CallFunc_GetPlayerCharacterState_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStamina_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_HitActor                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStealthAttackType      K2Node_Event_StealthAttack                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_KillCam                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HitActor                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStealthAttackType      K2Node_CustomEvent_WasStealthAttack                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KillCam                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_20                                   (HasGetValueTypeHash)
// class UUMG_GOAPWorldStats_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_13                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_12     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_12           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFocusableComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_3                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_5                                    (HasGetValueTypeHash)
// bool                               CallFunc_IsSeated_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_14                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASeatBase*                   CallFunc_GetAttachedToSeat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_13     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_SeatBase_C*              K2Node_DynamicCast_AsBP_Seat_Base                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_13           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_4                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_21                                   (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_18                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_17                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                K2Node_Event_Montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_FP_Montage                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_BleedOutTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_6                                    (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_19                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusGameState_C*       K2Node_DynamicCast_AsBP_Icarus_Game_State                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_7                                    (HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BlendWeight_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_BlendWeight                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_22                                   (HasGetValueTypeHash)
// class UUMG_StealthHitIndicator_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_8                                    (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_20                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_21                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Block                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_5                                           (HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_15                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_14     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_14           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMesh*               Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_23                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsCrouching_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_24                                   (HasGetValueTypeHash)
// struct FItemAudioDataRowHandle     K2Node_CustomEvent_ItemAudio                                     (NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_DropLocation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_22                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_18                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_25                                   (HasGetValueTypeHash)
// class USkeletalMesh*               Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_26                                   (HasGetValueTypeHash)
// float                              K2Node_Event_DamageApplied                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FallSpeed                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FallStrength                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FModifier                   K2Node_MakeStruct_Modifier                                       (NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FModifier                   K2Node_MakeStruct_Modifier_1                                     (NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_AddModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_AddModifierState_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticRowHandle       K2Node_Event_ItemData_2                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      CallFunc_GetTrait_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInteractableRowHandle>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInteractableRowHandle      CallFunc_MakeInteractable_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_3                                           (ConstParm, ReferenceParm)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingBase*               K2Node_DynamicCast_AsBuilding_Base                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_18                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_16                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_15     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_19                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_15           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStat_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_6                                           (HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_23                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_9                                    (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_19                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// class USkeletalMesh*               K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterState*             K2Node_CustomEvent_ActorState_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Stamina                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_10                                   (HasGetValueTypeHash)
// int32                              CallFunc_GetStat_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_17                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_16     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_20                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_16           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_20                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSeated_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_SetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewVisible                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFieldOfView_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_24                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_21                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusItem*                 CallFunc_GetFocusedItemActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetTrait_Paths_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionableComponent*        CallFunc_GetTrait_ReturnValue_4                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_CustomEvent_Inventory                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_slot                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   K2Node_CustomEvent_Use                                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_7                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_11                                   (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_18                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemData_1                                          (NoDestructor, HasGetValueTypeHash)
// struct FUsesRowHandle              K2Node_Event_Use_2                                               (NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_17     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_21                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_17           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_GetHoldTimer_TimerHandle                                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHoldTimer_bValid                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProcessorRecipesRowHandle  K2Node_CustomEvent_Recipe                                        (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CountInQueue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_12                                   (HasGetValueTypeHash)
// TArray<struct FArmourComponentData>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// struct FArmourComponentData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Temp_struct_Variable_8                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_13                                   (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_25                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_22                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsHidden                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_26                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_14                                   (HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemData                                            (NoDestructor, HasGetValueTypeHash)
// struct FUsesRowHandle              K2Node_Event_Use_1                                               (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsInCave                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSprinting_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_WorldDirection                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ScaleValue                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bForce                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeSeconds_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTimeSeconds_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_23                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_PlayerName_C*           CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_19                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_18     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_22                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_18           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_20                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_19     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_23                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSeated_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_GetHoldTimer_TimerHandle_1                              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHoldTimer_bValid_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_27                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_TimerExistsHandle_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventory*                  K2Node_Event_Inventory                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUsesEnum                   K2Node_Event_Use                                                 (HasGetValueTypeHash)
// bool                               K2Node_Event_bActive_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bActive                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsInDropship                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsInCave                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_CaveActor                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFootstepType           K2Node_Event_FootstepType                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      K2Node_Event_PlayerStance                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_28                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_NewIntensityTarget                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_InterpSpeed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_24                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  K2Node_Event_NewOffset                                           (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FKey                        Temp_struct_Variable_9                                           (HasGetValueTypeHash)
// struct FKey                        K2Node_InputActionEvent_Key_15                                   (HasGetValueTypeHash)
// bool                               CallFunc_IsSwimming_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        K2Node_InputActionEvent_Key_16                                   (HasGetValueTypeHash)
// float                              CallFunc_GetInputAxisValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 Temp_object_Variable_4                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInputAxisValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMovementMode           K2Node_Event_PrevMovementMode                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_Event_NewMovementMode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_PrevCustomMode                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Event_NewCustomMode                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// class UActorState*                 K2Node_CustomEvent_ActorState                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAlive_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_21                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_22                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScreenHitEffectsStrength_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_IcarusPlayerControllerSurvival_C*K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_20     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_24                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_19           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UModifierStateComponent*     K2Node_Event_ModifiedComponent                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Removed                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FModifierStateData          CallFunc_GetModifierStateData_ReturnValue                        (None)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_1                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQuestManager*               CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerControllerSurvival*K2Node_DynamicCast_AsIcarus_Player_Controller_Survival           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_25                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_29                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_25                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_23                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_External_CanPerformInputAction_ReturnValue_20           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_26                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_C*        K2Node_DynamicCast_AsUMG_User_Interface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_27                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimNotify*                 K2Node_CustomEvent_Notify_2                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsLocallyControlledWithMountResolve_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_26                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_27                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_2       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::ExecuteUbergraph_BP_IcarusPlayerCharacterSurvival(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UPlayerFeedbackSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, class UAnimNotify* K2Node_CustomEvent_Notify_3, bool CallFunc_External_CanPerformInputAction_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1, bool K2Node_DynamicCast_bSuccess_1, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputActionEvent_Key, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, bool CallFunc_External_CanPerformInputAction_ReturnValue_1, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_2, bool K2Node_DynamicCast_bSuccess_2, const struct FKey& K2Node_InputActionEvent_Key_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, const struct FKey& K2Node_InputActionEvent_Key_2, bool CallFunc_External_CanPerformInputAction_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsServer_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_3, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_3, bool K2Node_DynamicCast_bSuccess_3, class UTimeOfDaySubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_External_CanPerformInputAction_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_4, class UAnimNotify* K2Node_CustomEvent_Notify_4, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Not_PreBool_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, class FName Temp_name_Variable, bool CallFunc_HasAuthority_ReturnValue, class UAnimNotify* Temp_object_Variable, bool CallFunc_IsServer_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_BooleanAND_ReturnValue_5, int32 Temp_int_Variable_1, bool CallFunc_External_CanPerformInputAction_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, class FName K2Node_CustomEvent_NotifyName_5, class UAnimNotify* K2Node_CustomEvent_Notify_5, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_5, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_IsServer_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_External_CanPerformInputAction_ReturnValue_5, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_6, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_External_CanPerformInputAction_ReturnValue_6, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_7, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_7, bool K2Node_DynamicCast_bSuccess_7, int32 Temp_int_Variable_2, bool CallFunc_Not_PreBool_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_External_CanPerformInputAction_ReturnValue_7, bool CallFunc_IsServer_ReturnValue_9, bool CallFunc_IsServer_ReturnValue_10, bool CallFunc_IsServer_ReturnValue_11, class FName K2Node_CustomEvent_NotifyName_6, class UAnimNotify* K2Node_CustomEvent_Notify_6, bool CallFunc_IsServer_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsServer_ReturnValue_13, class FName K2Node_CustomEvent_NotifyName_7, class UAnimNotify* K2Node_CustomEvent_Notify_7, bool CallFunc_IsServer_ReturnValue_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_8, class UAnimNotify* K2Node_CustomEvent_Notify_8, bool CallFunc_IsServer_ReturnValue_15, class ABuildingBase* K2Node_CustomEvent_BuildingToDestroy, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_8, enum class EValid CallFunc_GetTrait_Paths, class UBP_Flammable_Actor_C* CallFunc_GetTrait_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_8, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_External_CanPerformInputAction_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsCurrentState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ABP_Grid_Base_C* K2Node_CustomEvent_RemoteFocusGrid, class FName K2Node_CustomEvent_NotifyName_9, class UAnimNotify* K2Node_CustomEvent_Notify_9, bool CallFunc_IsServer_ReturnValue_16, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_9, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FRotator& CallFunc_GetCameraRotation_ReturnValue, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FKey& Temp_struct_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_9, const struct FKey& K2Node_InputActionEvent_Key_17, bool CallFunc_BooleanAND_ReturnValue_9, const struct FKey& K2Node_InputActionEvent_Key_18, enum class EActionableEventType K2Node_CustomEvent_ActionType_1, enum class EActionableTrigger K2Node_CustomEvent_Trigger_1, enum class EPlayerActionTargetTypeEnum K2Node_CustomEvent_Target_1, bool CallFunc_CanDropItemFromInventory_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, enum class EPlayerActionTargetTypeEnum Temp_byte_Variable, class UInventory* K2Node_CustomEvent_Inventory_4, int32 K2Node_CustomEvent_Location_3, enum class EActionableEventType K2Node_CustomEvent_ActionType, enum class EActionableTrigger K2Node_CustomEvent_Trigger, enum class EPlayerActionTargetTypeEnum K2Node_CustomEvent_Target, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_IsValid_ReturnValue_4, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_5, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory_3, int32 K2Node_CustomEvent_Location_2, class UInventory* CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1, int32 CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1, enum class EDataValidity CallFunc_GetFocusedItemInventoryAndSlot_Validity_1, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_12, const struct FItemData& K2Node_CustomEvent_Item_4, const struct FTransform& CallFunc_GetDropTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FItemData& K2Node_CustomEvent_Item_3, const struct FItemData& K2Node_CustomEvent_Item_2, const struct FTransform& CallFunc_GetDropTransform_ReturnValue_1, const struct FTransform& CallFunc_GetDropTransform_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_17, const struct FItemData& K2Node_CustomEvent_Item_1, const struct FTransform& CallFunc_GetDropTransform_ReturnValue_3, class UInventory* K2Node_CustomEvent_Inventory_2, int32 K2Node_CustomEvent_Location_1, bool CallFunc_IsValid_ReturnValue_6, class UInventory* K2Node_CustomEvent_Inventory_1, int32 K2Node_CustomEvent_Location, const struct FItemsStaticRowHandle& K2Node_CustomEvent_Item, const struct FItemData& CallFunc_GetItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsRowHandleValid_ReturnValue, class AActor* K2Node_Select_Default, enum class EValid CallFunc_GetTrait_Paths_1, class UActionableComponent* CallFunc_GetTrait_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_8, bool K2Node_SwitchEnum_CmpSuccess_4, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UAnimMontage* K2Node_Event_Montage_1, class UAnimMontage* K2Node_Event_FP_Montage_1, bool K2Node_Event_LockMotion, class FName K2Node_Event_StartingSection, class FName K2Node_Event_FP_StartingSection, float K2Node_Event_PlaySpeed, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, bool CallFunc_IsValid_ReturnValue_11, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_10, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_9, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsLocallyControlled_ReturnValue_1, bool CallFunc_External_CanPerformInputAction_ReturnValue_9, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_12, float K2Node_Event_PlayRate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, bool CallFunc_IsValid_ReturnValue_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_13, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_13, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_IsValid_ReturnValue_14, bool CallFunc_IsServer_ReturnValue_18, bool K2Node_CustomEvent_HasAuthority, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_11, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_10, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_External_CanPerformInputAction_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_Not_PreBool_ReturnValue_14, bool CallFunc_BooleanAND_ReturnValue_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UClass* K2Node_CustomEvent_ShakeClass, bool CallFunc_Not_PreBool_ReturnValue_15, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_15, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsLocallyControlled_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_16, class UActorState* K2Node_CustomEvent_ActorState_2, float K2Node_CustomEvent_NewHealth, class ASeatBase* K2Node_Event_PreviousSeat, class ABP_IcarusPlayerState_C* K2Node_DynamicCast_AsBP_Icarus_Player_State, bool K2Node_DynamicCast_bSuccess_11, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_12, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_11, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_IsLocallyControlled_ReturnValue_4, bool CallFunc_External_CanPerformInputAction_ReturnValue_11, const struct FKey& Temp_struct_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_19, const struct FKey& K2Node_InputActionEvent_Key_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FKey& K2Node_InputActionEvent_Key_4, int32 CallFunc_GetStamina_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_17, bool CallFunc_IsServer_ReturnValue_19, bool CallFunc_BooleanAND_ReturnValue_16, class UPlayerCharacterState* CallFunc_GetPlayerCharacterState_ReturnValue_1, int32 CallFunc_GetStamina_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, class AActor* K2Node_Event_HitActor, class AActor* K2Node_Event_DamageCauser, enum class EStealthAttackType K2Node_Event_StealthAttack, bool K2Node_Event_KillCam, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_6, int32 CallFunc_Multiply_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_HitActor, class AActor* K2Node_CustomEvent_DamageCauser, enum class EStealthAttackType K2Node_CustomEvent_WasStealthAttack, bool K2Node_CustomEvent_KillCam, bool CallFunc_NotEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, const struct FKey& K2Node_InputActionEvent_Key_20, class UUMG_GOAPWorldStats_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_16, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_12, bool K2Node_DynamicCast_bSuccess_13, bool CallFunc_External_CanPerformInputAction_ReturnValue_12, class UFocusableComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_17, const struct FKey& Temp_struct_Variable_3, const struct FKey& K2Node_InputActionEvent_Key_5, bool CallFunc_IsSeated_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_14, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_13, bool K2Node_DynamicCast_bSuccess_14, class ABP_SeatBase_C* K2Node_DynamicCast_AsBP_Seat_Base, bool K2Node_DynamicCast_bSuccess_15, bool CallFunc_External_CanPerformInputAction_ReturnValue_13, bool CallFunc_IsServer_ReturnValue_20, const struct FKey& Temp_struct_Variable_4, const struct FKey& K2Node_InputActionEvent_Key_21, bool CallFunc_Not_PreBool_ReturnValue_18, bool CallFunc_BooleanAND_ReturnValue_17, class UAnimMontage* K2Node_Event_Montage, class UAnimMontage* K2Node_Event_FP_Montage, float K2Node_Event_BleedOutTime, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_6, bool CallFunc_Not_PreBool_ReturnValue_19, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_IcarusGameState_C* K2Node_DynamicCast_AsBP_Icarus_Game_State, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_IsLocallyControlled_ReturnValue_5, const struct FKey& K2Node_InputActionEvent_Key_7, float K2Node_CustomEvent_Value, float K2Node_CustomEvent_BlendWeight_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_BlendWeight, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, const struct FKey& K2Node_InputActionEvent_Key_22, class UUMG_StealthHitIndicator_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, int32 CallFunc_GetStat_ReturnValue, int32 CallFunc_GetStat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, const struct FKey& K2Node_InputActionEvent_Key_8, bool CallFunc_Not_PreBool_ReturnValue_20, bool CallFunc_Not_PreBool_ReturnValue_21, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool K2Node_CustomEvent_Block, const struct FKey& Temp_struct_Variable_5, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_15, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_14, bool K2Node_DynamicCast_bSuccess_17, bool CallFunc_External_CanPerformInputAction_ReturnValue_14, class USkeletalMesh* Temp_object_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_23, bool CallFunc_IsCrouching_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_24, const struct FItemAudioDataRowHandle& K2Node_CustomEvent_ItemAudio, const struct FVector& K2Node_CustomEvent_DropLocation, bool CallFunc_IsLocallyControlled_ReturnValue_6, bool CallFunc_IsLocallyControlled_ReturnValue_7, bool K2Node_CustomEvent_Enable, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_Not_PreBool_ReturnValue_22, bool CallFunc_BooleanAND_ReturnValue_18, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, const struct FKey& K2Node_InputActionEvent_Key_25, class USkeletalMesh* Temp_object_Variable_2, const struct FKey& K2Node_InputActionEvent_Key_26, float K2Node_Event_DamageApplied, float K2Node_Event_FallSpeed, float K2Node_Event_FallStrength, const struct FModifier& K2Node_MakeStruct_Modifier, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FModifier& K2Node_MakeStruct_Modifier_1, class FText CallFunc_Format_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue_1, bool Temp_bool_Variable, const struct FItemsStaticRowHandle& K2Node_Event_ItemData_2, bool CallFunc_IsLocallyControlled_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_22, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EValid CallFunc_GetTrait_Paths_3, class UInteractableComponent* CallFunc_GetTrait_ReturnValue_3, TArray<struct FInteractableRowHandle>& K2Node_MakeArray_Array_1, bool K2Node_SwitchEnum_CmpSuccess_7, const struct FInteractableRowHandle& CallFunc_MakeInteractable_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue_23, TArray<class AActor*>& Temp_object_Variable_3, float CallFunc_VSize_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_ElementIndex_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, float CallFunc_SelectFloat_ReturnValue, class ABuildingBase* K2Node_DynamicCast_AsBuilding_Base, bool K2Node_DynamicCast_bSuccess_18, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_16, int32 CallFunc_GetHealth_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_15, bool K2Node_DynamicCast_bSuccess_19, float CallFunc_Conv_IntToFloat_ReturnValue_3, bool CallFunc_External_CanPerformInputAction_ReturnValue_15, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Divide_FloatFloat_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_5, float CallFunc_Divide_FloatFloat_ReturnValue_4, bool CallFunc_Greater_FloatFloat_ReturnValue_2, const struct FKey& Temp_struct_Variable_6, bool CallFunc_Not_PreBool_ReturnValue_23, const struct FKey& K2Node_InputActionEvent_Key_9, bool CallFunc_BooleanAND_ReturnValue_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class USkeletalMesh* K2Node_Select_Default_1, class UCharacterState* K2Node_CustomEvent_ActorState_1, float K2Node_CustomEvent_Stamina, bool CallFunc_IsLocallyControlled_ReturnValue_9, const struct FKey& K2Node_InputActionEvent_Key_10, int32 CallFunc_GetStat_ReturnValue_4, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_17, float CallFunc_Conv_IntToFloat_ReturnValue_6, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_16, bool K2Node_DynamicCast_bSuccess_20, float CallFunc_Divide_FloatFloat_ReturnValue_5, bool CallFunc_External_CanPerformInputAction_ReturnValue_16, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_20, bool CallFunc_IsSeated_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, enum class EEndPlayReason K2Node_Event_EndPlayReason, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, bool CallFunc_IsValid_ReturnValue_24, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue_1, bool K2Node_CustomEvent_NewVisible, float CallFunc_GetFieldOfView_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_24, bool CallFunc_BooleanAND_ReturnValue_21, class AIcarusItem* CallFunc_GetFocusedItemActor_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_4, class UActionableComponent* CallFunc_GetTrait_ReturnValue_4, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_slot, const struct FUsesEnum& K2Node_CustomEvent_Use, bool K2Node_SwitchEnum_CmpSuccess_8, const struct FKey& Temp_struct_Variable_7, const struct FKey& K2Node_InputActionEvent_Key_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_18, const struct FItemsStaticRowHandle& K2Node_Event_ItemData_1, const struct FUsesRowHandle& K2Node_Event_Use_2, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_17, bool K2Node_DynamicCast_bSuccess_21, bool CallFunc_External_CanPerformInputAction_ReturnValue_17, const struct FTimerHandle& CallFunc_GetHoldTimer_TimerHandle, bool CallFunc_GetHoldTimer_bValid, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, bool CallFunc_K2_TimerExistsHandle_ReturnValue, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_Recipe, int32 K2Node_CustomEvent_CountInQueue, const struct FKey& K2Node_InputActionEvent_Key_12, TArray<struct FArmourComponentData>& CallFunc_Map_Values_Values, const struct FArmourComponentData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FKey& Temp_struct_Variable_8, const struct FKey& K2Node_InputActionEvent_Key_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, bool CallFunc_Not_PreBool_ReturnValue_25, bool CallFunc_BooleanAND_ReturnValue_22, bool K2Node_Event_bIsHidden, bool CallFunc_Not_PreBool_ReturnValue_26, const struct FKey& K2Node_InputActionEvent_Key_14, const struct FItemsStaticRowHandle& K2Node_Event_ItemData, const struct FUsesRowHandle& K2Node_Event_Use_1, bool K2Node_CustomEvent_IsInCave, bool CallFunc_IsSprinting_ReturnValue, const struct FVector& K2Node_Event_WorldDirection, float K2Node_Event_ScaleValue, bool K2Node_Event_bForce, float CallFunc_Abs_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_23, class UUMG_PlayerName_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_25, bool Temp_bool_Has_Been_Initd_Variable, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_19, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_18, bool K2Node_DynamicCast_bSuccess_22, bool CallFunc_External_CanPerformInputAction_ReturnValue_18, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_20, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_19, bool K2Node_DynamicCast_bSuccess_23, bool CallFunc_IsSeated_ReturnValue_2, const struct FTimerHandle& CallFunc_GetHoldTimer_TimerHandle_1, bool CallFunc_GetHoldTimer_bValid_1, bool CallFunc_Not_PreBool_ReturnValue_27, bool CallFunc_K2_TimerExistsHandle_ReturnValue_1, class UInventory* K2Node_Event_Inventory, int32 K2Node_Event_Slot, const struct FUsesEnum& K2Node_Event_Use, bool K2Node_Event_bActive_1, bool K2Node_Event_bActive, bool K2Node_Event_bIsInDropship, bool K2Node_Event_IsInCave, class AActor* K2Node_Event_CaveActor, enum class EFootstepType K2Node_Event_FootstepType, enum class EPlayerAudioStance K2Node_Event_PlayerStance, bool CallFunc_Not_PreBool_ReturnValue_28, float K2Node_Event_NewIntensityTarget, float K2Node_Event_InterpSpeed, bool CallFunc_BooleanAND_ReturnValue_24, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTransform& K2Node_Event_NewOffset, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FKey& Temp_struct_Variable_9, const struct FKey& K2Node_InputActionEvent_Key_15, bool CallFunc_IsSwimming_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FKey& K2Node_InputActionEvent_Key_16, float CallFunc_GetInputAxisValue_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class FName Temp_name_Variable_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue_1, class UAnimNotify* Temp_object_Variable_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetInputAxisValue_ReturnValue_1, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, enum class EMovementMode K2Node_Event_PrevMovementMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_PrevCustomMode, uint8 K2Node_Event_NewCustomMode, const struct FVector& CallFunc_GetForwardVector_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName, class UAnimNotify* K2Node_CustomEvent_Notify, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, class UActorState* K2Node_CustomEvent_ActorState, bool CallFunc_IsAlive_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_21, bool CallFunc_IsValid_ReturnValue_26, bool CallFunc_IsLocalPlayerController_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_22, float CallFunc_GetScreenHitEffectsStrength_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_20, bool K2Node_DynamicCast_bSuccess_24, float CallFunc_Multiply_FloatFloat_ReturnValue_1, bool CallFunc_External_CanPerformInputAction_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_27, bool CallFunc_IsValid_ReturnValue_28, class UModifierStateComponent* K2Node_Event_ModifiedComponent, bool K2Node_Event_Removed, bool CallFunc_ItemMatchesQuery_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, bool CallFunc_ItemMatchesQuery_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, class FName K2Node_CustomEvent_NotifyName_1, class UAnimNotify* K2Node_CustomEvent_Notify_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class AController* CallFunc_GetController_ReturnValue, class AQuestManager* CallFunc_GetQuestManager_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_25, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_29, bool CallFunc_BooleanAND_ReturnValue_25, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_23, bool CallFunc_External_CanPerformInputAction_ReturnValue_20, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_26, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue_30, class UUMG_UserInterface_C* K2Node_DynamicCast_AsUMG_User_Interface, bool K2Node_DynamicCast_bSuccess_27, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_IsLocalPlayerController_ReturnValue_1, bool Temp_bool_IsClosed_Variable_1, class FName K2Node_CustomEvent_NotifyName_2, class UAnimNotify* K2Node_CustomEvent_Notify_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, bool CallFunc_IsLocallyControlledWithMountResolve_ReturnValue, bool CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_26, bool CallFunc_BooleanAND_ReturnValue_27, bool CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ExecuteUbergraph_BP_IcarusPlayerCharacterSurvival");

	Params::ABP_IcarusPlayerCharacterSurvival_C_ExecuteUbergraph_BP_IcarusPlayerCharacterSurvival_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CustomEvent_Notify_3 = K2Node_CustomEvent_Notify_3;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue = CallFunc_External_CanPerformInputAction_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_InputActionEvent_Key = K2Node_InputActionEvent_Key;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_2 = CallFunc_GetIcarusPlayerController_ReturnValue_2;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_1 = CallFunc_External_CanPerformInputAction_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_2 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_InputActionEvent_Key_1 = K2Node_InputActionEvent_Key_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_InputActionEvent_Key_2 = K2Node_InputActionEvent_Key_2;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_2 = CallFunc_External_CanPerformInputAction_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_3 = CallFunc_GetIcarusPlayerController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_3 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_2 = CallFunc_GetWorldSubsystem_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_3 = CallFunc_External_CanPerformInputAction_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_Notify_4 = K2Node_CustomEvent_Notify_4;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsServer_ReturnValue_7 = CallFunc_IsServer_ReturnValue_7;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_4 = CallFunc_GetIcarusPlayerController_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_4 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_4 = CallFunc_External_CanPerformInputAction_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CustomEvent_Notify_5 = K2Node_CustomEvent_Notify_5;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_5 = CallFunc_GetIcarusPlayerController_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_5 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_IsServer_ReturnValue_8 = CallFunc_IsServer_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_5 = CallFunc_External_CanPerformInputAction_ReturnValue_5;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_6 = CallFunc_GetIcarusPlayerController_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_6 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_6 = CallFunc_External_CanPerformInputAction_ReturnValue_6;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_7 = CallFunc_GetIcarusPlayerController_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_7 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_7 = CallFunc_External_CanPerformInputAction_ReturnValue_7;
	Parms.CallFunc_IsServer_ReturnValue_9 = CallFunc_IsServer_ReturnValue_9;
	Parms.CallFunc_IsServer_ReturnValue_10 = CallFunc_IsServer_ReturnValue_10;
	Parms.CallFunc_IsServer_ReturnValue_11 = CallFunc_IsServer_ReturnValue_11;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CustomEvent_Notify_6 = K2Node_CustomEvent_Notify_6;
	Parms.CallFunc_IsServer_ReturnValue_12 = CallFunc_IsServer_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsServer_ReturnValue_13 = CallFunc_IsServer_ReturnValue_13;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CustomEvent_Notify_7 = K2Node_CustomEvent_Notify_7;
	Parms.CallFunc_IsServer_ReturnValue_14 = CallFunc_IsServer_ReturnValue_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CustomEvent_Notify_8 = K2Node_CustomEvent_Notify_8;
	Parms.CallFunc_IsServer_ReturnValue_15 = CallFunc_IsServer_ReturnValue_15;
	Parms.K2Node_CustomEvent_BuildingToDestroy = K2Node_CustomEvent_BuildingToDestroy;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_8 = CallFunc_GetIcarusPlayerController_ReturnValue_8;
	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_8 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_8 = CallFunc_External_CanPerformInputAction_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsCurrentState_ReturnValue = CallFunc_IsCurrentState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_RemoteFocusGrid = K2Node_CustomEvent_RemoteFocusGrid;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CustomEvent_Notify_9 = K2Node_CustomEvent_Notify_9;
	Parms.CallFunc_IsServer_ReturnValue_16 = CallFunc_IsServer_ReturnValue_16;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_9 = CallFunc_GetIcarusPlayerController_ReturnValue_9;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetCameraRotation_ReturnValue = CallFunc_GetCameraRotation_ReturnValue;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.K2Node_InputActionEvent_Key_17 = K2Node_InputActionEvent_Key_17;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.K2Node_InputActionEvent_Key_18 = K2Node_InputActionEvent_Key_18;
	Parms.K2Node_CustomEvent_ActionType_1 = K2Node_CustomEvent_ActionType_1;
	Parms.K2Node_CustomEvent_Trigger_1 = K2Node_CustomEvent_Trigger_1;
	Parms.K2Node_CustomEvent_Target_1 = K2Node_CustomEvent_Target_1;
	Parms.CallFunc_CanDropItemFromInventory_ReturnValue = CallFunc_CanDropItemFromInventory_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_Inventory_4 = K2Node_CustomEvent_Inventory_4;
	Parms.K2Node_CustomEvent_Location_3 = K2Node_CustomEvent_Location_3;
	Parms.K2Node_CustomEvent_ActionType = K2Node_CustomEvent_ActionType;
	Parms.K2Node_CustomEvent_Trigger = K2Node_CustomEvent_Trigger;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity = CallFunc_GetFocusedItemInventoryAndSlot_Validity;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetInventoryID_ReturnValue = CallFunc_GetInventoryID_ReturnValue;
	Parms.CallFunc_EqualEqual_EnumEnum_ReturnValue = CallFunc_EqualEqual_EnumEnum_ReturnValue;
	Parms.K2Node_CustomEvent_Inventory_3 = K2Node_CustomEvent_Inventory_3;
	Parms.K2Node_CustomEvent_Location_2 = K2Node_CustomEvent_Location_2;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1 = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1 = CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1;
	Parms.CallFunc_GetFocusedItemInventoryAndSlot_Validity_1 = CallFunc_GetFocusedItemInventoryAndSlot_Validity_1;
	Parms.CallFunc_GetFocusedItemData_Validity = CallFunc_GetFocusedItemData_Validity;
	Parms.CallFunc_GetFocusedItemData_ReturnValue = CallFunc_GetFocusedItemData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_12 = CallFunc_BooleanAND_ReturnValue_12;
	Parms.K2Node_CustomEvent_Item_4 = K2Node_CustomEvent_Item_4;
	Parms.CallFunc_GetDropTransform_ReturnValue = CallFunc_GetDropTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CustomEvent_Item_3 = K2Node_CustomEvent_Item_3;
	Parms.K2Node_CustomEvent_Item_2 = K2Node_CustomEvent_Item_2;
	Parms.CallFunc_GetDropTransform_ReturnValue_1 = CallFunc_GetDropTransform_ReturnValue_1;
	Parms.CallFunc_GetDropTransform_ReturnValue_2 = CallFunc_GetDropTransform_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_17 = CallFunc_IsServer_ReturnValue_17;
	Parms.K2Node_CustomEvent_Item_1 = K2Node_CustomEvent_Item_1;
	Parms.CallFunc_GetDropTransform_ReturnValue_3 = CallFunc_GetDropTransform_ReturnValue_3;
	Parms.K2Node_CustomEvent_Inventory_2 = K2Node_CustomEvent_Inventory_2;
	Parms.K2Node_CustomEvent_Location_1 = K2Node_CustomEvent_Location_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CustomEvent_Inventory_1 = K2Node_CustomEvent_Inventory_1;
	Parms.K2Node_CustomEvent_Location = K2Node_CustomEvent_Location;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetItem_ReturnValue = CallFunc_GetItem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTrait_Paths_1 = CallFunc_GetTrait_Paths_1;
	Parms.CallFunc_GetTrait_ReturnValue_1 = CallFunc_GetTrait_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_Event_Montage_1 = K2Node_Event_Montage_1;
	Parms.K2Node_Event_FP_Montage_1 = K2Node_Event_FP_Montage_1;
	Parms.K2Node_Event_LockMotion = K2Node_Event_LockMotion;
	Parms.K2Node_Event_StartingSection = K2Node_Event_StartingSection;
	Parms.K2Node_Event_FP_StartingSection = K2Node_Event_FP_StartingSection;
	Parms.K2Node_Event_PlaySpeed = K2Node_Event_PlaySpeed;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_10 = CallFunc_GetIcarusPlayerController_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_9 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = CallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_9 = CallFunc_External_CanPerformInputAction_ReturnValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.K2Node_Event_PlayRate = K2Node_Event_PlayRate;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetTrait_Paths_2 = CallFunc_GetTrait_Paths_2;
	Parms.CallFunc_GetTrait_ReturnValue_2 = CallFunc_GetTrait_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_BooleanAND_ReturnValue_13 = CallFunc_BooleanAND_ReturnValue_13;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_IsServer_ReturnValue_18 = CallFunc_IsServer_ReturnValue_18;
	Parms.K2Node_CustomEvent_HasAuthority = K2Node_CustomEvent_HasAuthority;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_11 = CallFunc_GetIcarusPlayerController_ReturnValue_11;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_10 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_10 = CallFunc_External_CanPerformInputAction_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_BooleanAND_ReturnValue_14 = CallFunc_BooleanAND_ReturnValue_14;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_ShakeClass = K2Node_CustomEvent_ShakeClass;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_15 = CallFunc_BooleanAND_ReturnValue_15;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_2 = CallFunc_IsLocallyControlled_ReturnValue_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_3 = CallFunc_IsLocallyControlled_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.K2Node_CustomEvent_ActorState_2 = K2Node_CustomEvent_ActorState_2;
	Parms.K2Node_CustomEvent_NewHealth = K2Node_CustomEvent_NewHealth;
	Parms.K2Node_Event_PreviousSeat = K2Node_Event_PreviousSeat;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_State = K2Node_DynamicCast_AsBP_Icarus_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_12 = CallFunc_GetIcarusPlayerController_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_11 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_11;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_4 = CallFunc_IsLocallyControlled_ReturnValue_4;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_11 = CallFunc_External_CanPerformInputAction_ReturnValue_11;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_InputActionEvent_Key_19 = K2Node_InputActionEvent_Key_19;
	Parms.K2Node_InputActionEvent_Key_3 = K2Node_InputActionEvent_Key_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.K2Node_InputActionEvent_Key_4 = K2Node_InputActionEvent_Key_4;
	Parms.CallFunc_GetStamina_ReturnValue = CallFunc_GetStamina_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue = CallFunc_GetPlayerCharacterState_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_17 = CallFunc_Not_PreBool_ReturnValue_17;
	Parms.CallFunc_IsServer_ReturnValue_19 = CallFunc_IsServer_ReturnValue_19;
	Parms.CallFunc_BooleanAND_ReturnValue_16 = CallFunc_BooleanAND_ReturnValue_16;
	Parms.CallFunc_GetPlayerCharacterState_ReturnValue_1 = CallFunc_GetPlayerCharacterState_ReturnValue_1;
	Parms.CallFunc_GetStamina_ReturnValue_1 = CallFunc_GetStamina_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_Event_HitActor = K2Node_Event_HitActor;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_StealthAttack = K2Node_Event_StealthAttack;
	Parms.K2Node_Event_KillCam = K2Node_Event_KillCam;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_HitActor = K2Node_CustomEvent_HitActor;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_WasStealthAttack = K2Node_CustomEvent_WasStealthAttack;
	Parms.K2Node_CustomEvent_KillCam = K2Node_CustomEvent_KillCam;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_InputActionEvent_Key_20 = K2Node_InputActionEvent_Key_20;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_13 = CallFunc_GetIcarusPlayerController_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_12 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_12;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_12 = CallFunc_External_CanPerformInputAction_ReturnValue_12;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_InputActionEvent_Key_5 = K2Node_InputActionEvent_Key_5;
	Parms.CallFunc_IsSeated_ReturnValue = CallFunc_IsSeated_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_14 = CallFunc_GetIcarusPlayerController_ReturnValue_14;
	Parms.CallFunc_GetAttachedToSeat_ReturnValue = CallFunc_GetAttachedToSeat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_13 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_13;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsBP_Seat_Base = K2Node_DynamicCast_AsBP_Seat_Base;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_13 = CallFunc_External_CanPerformInputAction_ReturnValue_13;
	Parms.CallFunc_IsServer_ReturnValue_20 = CallFunc_IsServer_ReturnValue_20;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_InputActionEvent_Key_21 = K2Node_InputActionEvent_Key_21;
	Parms.CallFunc_Not_PreBool_ReturnValue_18 = CallFunc_Not_PreBool_ReturnValue_18;
	Parms.CallFunc_BooleanAND_ReturnValue_17 = CallFunc_BooleanAND_ReturnValue_17;
	Parms.K2Node_Event_Montage = K2Node_Event_Montage;
	Parms.K2Node_Event_FP_Montage = K2Node_Event_FP_Montage;
	Parms.K2Node_Event_BleedOutTime = K2Node_Event_BleedOutTime;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_6 = K2Node_InputActionEvent_Key_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_19 = CallFunc_Not_PreBool_ReturnValue_19;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Game_State = K2Node_DynamicCast_AsBP_Icarus_Game_State;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_5 = CallFunc_IsLocallyControlled_ReturnValue_5;
	Parms.K2Node_InputActionEvent_Key_7 = K2Node_InputActionEvent_Key_7;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_CustomEvent_BlendWeight_1 = K2Node_CustomEvent_BlendWeight_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_BlendWeight = K2Node_CustomEvent_BlendWeight;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.K2Node_InputActionEvent_Key_22 = K2Node_InputActionEvent_Key_22;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue_1 = CallFunc_GetStat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue_2 = CallFunc_GetStat_ReturnValue_2;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_InputActionEvent_Key_8 = K2Node_InputActionEvent_Key_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_20 = CallFunc_Not_PreBool_ReturnValue_20;
	Parms.CallFunc_Not_PreBool_ReturnValue_21 = CallFunc_Not_PreBool_ReturnValue_21;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_CustomEvent_Block = K2Node_CustomEvent_Block;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_15 = CallFunc_GetIcarusPlayerController_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_14 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_14;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_14 = CallFunc_External_CanPerformInputAction_ReturnValue_14;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_InputActionEvent_Key_23 = K2Node_InputActionEvent_Key_23;
	Parms.CallFunc_IsCrouching_ReturnValue = CallFunc_IsCrouching_ReturnValue;
	Parms.K2Node_InputActionEvent_Key_24 = K2Node_InputActionEvent_Key_24;
	Parms.K2Node_CustomEvent_ItemAudio = K2Node_CustomEvent_ItemAudio;
	Parms.K2Node_CustomEvent_DropLocation = K2Node_CustomEvent_DropLocation;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_6 = CallFunc_IsLocallyControlled_ReturnValue_6;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_7 = CallFunc_IsLocallyControlled_ReturnValue_7;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_Not_PreBool_ReturnValue_22 = CallFunc_Not_PreBool_ReturnValue_22;
	Parms.CallFunc_BooleanAND_ReturnValue_18 = CallFunc_BooleanAND_ReturnValue_18;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.K2Node_InputActionEvent_Key_25 = K2Node_InputActionEvent_Key_25;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_InputActionEvent_Key_26 = K2Node_InputActionEvent_Key_26;
	Parms.K2Node_Event_DamageApplied = K2Node_Event_DamageApplied;
	Parms.K2Node_Event_FallSpeed = K2Node_Event_FallSpeed;
	Parms.K2Node_Event_FallStrength = K2Node_Event_FallStrength;
	Parms.K2Node_MakeStruct_Modifier = K2Node_MakeStruct_Modifier;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_Modifier_1 = K2Node_MakeStruct_Modifier_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue = CallFunc_AddModifierState_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_AddModifierState_ReturnValue_1 = CallFunc_AddModifierState_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_ItemData_2 = K2Node_Event_ItemData_2;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_8 = CallFunc_IsLocallyControlled_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetTrait_Paths_3 = CallFunc_GetTrait_Paths_3;
	Parms.CallFunc_GetTrait_ReturnValue_3 = CallFunc_GetTrait_ReturnValue_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_MakeInteractable_ReturnValue = CallFunc_MakeInteractable_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = CallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Base = K2Node_DynamicCast_AsBuilding_Base;
	Parms.K2Node_DynamicCast_bSuccess_18 = K2Node_DynamicCast_bSuccess_18;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_16 = CallFunc_GetIcarusPlayerController_ReturnValue_16;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_15 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_15;
	Parms.K2Node_DynamicCast_bSuccess_19 = K2Node_DynamicCast_bSuccess_19;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_15 = CallFunc_External_CanPerformInputAction_ReturnValue_15;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetStat_ReturnValue_3 = CallFunc_GetStat_ReturnValue_3;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_23 = CallFunc_Not_PreBool_ReturnValue_23;
	Parms.K2Node_InputActionEvent_Key_9 = K2Node_InputActionEvent_Key_9;
	Parms.CallFunc_BooleanAND_ReturnValue_19 = CallFunc_BooleanAND_ReturnValue_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_ActorState_1 = K2Node_CustomEvent_ActorState_1;
	Parms.K2Node_CustomEvent_Stamina = K2Node_CustomEvent_Stamina;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_9 = CallFunc_IsLocallyControlled_ReturnValue_9;
	Parms.K2Node_InputActionEvent_Key_10 = K2Node_InputActionEvent_Key_10;
	Parms.CallFunc_GetStat_ReturnValue_4 = CallFunc_GetStat_ReturnValue_4;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_17 = CallFunc_GetIcarusPlayerController_ReturnValue_17;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_6 = CallFunc_Conv_IntToFloat_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_16 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_16;
	Parms.K2Node_DynamicCast_bSuccess_20 = K2Node_DynamicCast_bSuccess_20;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_16 = CallFunc_External_CanPerformInputAction_ReturnValue_16;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_20 = CallFunc_BooleanAND_ReturnValue_20;
	Parms.CallFunc_IsSeated_ReturnValue_1 = CallFunc_IsSeated_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetActorRotation_ReturnValue = CallFunc_K2_SetActorRotation_ReturnValue;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue_1 = CallFunc_GetIcarusGameUserSettings_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewVisible = K2Node_CustomEvent_NewVisible;
	Parms.CallFunc_GetFieldOfView_ReturnValue = CallFunc_GetFieldOfView_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_24 = CallFunc_Not_PreBool_ReturnValue_24;
	Parms.CallFunc_BooleanAND_ReturnValue_21 = CallFunc_BooleanAND_ReturnValue_21;
	Parms.CallFunc_GetFocusedItemActor_ReturnValue = CallFunc_GetFocusedItemActor_ReturnValue;
	Parms.CallFunc_GetTrait_Paths_4 = CallFunc_GetTrait_Paths_4;
	Parms.CallFunc_GetTrait_ReturnValue_4 = CallFunc_GetTrait_ReturnValue_4;
	Parms.K2Node_CustomEvent_Inventory = K2Node_CustomEvent_Inventory;
	Parms.K2Node_CustomEvent_slot = K2Node_CustomEvent_slot;
	Parms.K2Node_CustomEvent_Use = K2Node_CustomEvent_Use;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.K2Node_InputActionEvent_Key_11 = K2Node_InputActionEvent_Key_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_18 = CallFunc_GetIcarusPlayerController_ReturnValue_18;
	Parms.K2Node_Event_ItemData_1 = K2Node_Event_ItemData_1;
	Parms.K2Node_Event_Use_2 = K2Node_Event_Use_2;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_17 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_17;
	Parms.K2Node_DynamicCast_bSuccess_21 = K2Node_DynamicCast_bSuccess_21;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_17 = CallFunc_External_CanPerformInputAction_ReturnValue_17;
	Parms.CallFunc_GetHoldTimer_TimerHandle = CallFunc_GetHoldTimer_TimerHandle;
	Parms.CallFunc_GetHoldTimer_bValid = CallFunc_GetHoldTimer_bValid;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue = CallFunc_K2_TimerExistsHandle_ReturnValue;
	Parms.K2Node_CustomEvent_Recipe = K2Node_CustomEvent_Recipe;
	Parms.K2Node_CustomEvent_CountInQueue = K2Node_CustomEvent_CountInQueue;
	Parms.K2Node_InputActionEvent_Key_12 = K2Node_InputActionEvent_Key_12;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.K2Node_InputActionEvent_Key_13 = K2Node_InputActionEvent_Key_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.CallFunc_Not_PreBool_ReturnValue_25 = CallFunc_Not_PreBool_ReturnValue_25;
	Parms.CallFunc_BooleanAND_ReturnValue_22 = CallFunc_BooleanAND_ReturnValue_22;
	Parms.K2Node_Event_bIsHidden = K2Node_Event_bIsHidden;
	Parms.CallFunc_Not_PreBool_ReturnValue_26 = CallFunc_Not_PreBool_ReturnValue_26;
	Parms.K2Node_InputActionEvent_Key_14 = K2Node_InputActionEvent_Key_14;
	Parms.K2Node_Event_ItemData = K2Node_Event_ItemData;
	Parms.K2Node_Event_Use_1 = K2Node_Event_Use_1;
	Parms.K2Node_CustomEvent_IsInCave = K2Node_CustomEvent_IsInCave;
	Parms.CallFunc_IsSprinting_ReturnValue = CallFunc_IsSprinting_ReturnValue;
	Parms.K2Node_Event_WorldDirection = K2Node_Event_WorldDirection;
	Parms.K2Node_Event_ScaleValue = K2Node_Event_ScaleValue;
	Parms.K2Node_Event_bForce = K2Node_Event_bForce;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_GetTimeSeconds_ReturnValue = CallFunc_GetTimeSeconds_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetTimeSeconds_ReturnValue_1 = CallFunc_GetTimeSeconds_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_2 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_3 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_23 = CallFunc_BooleanAND_ReturnValue_23;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_19 = CallFunc_GetIcarusPlayerController_ReturnValue_19;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_18 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_18;
	Parms.K2Node_DynamicCast_bSuccess_22 = K2Node_DynamicCast_bSuccess_22;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_18 = CallFunc_External_CanPerformInputAction_ReturnValue_18;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_20 = CallFunc_GetIcarusPlayerController_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_19 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_19;
	Parms.K2Node_DynamicCast_bSuccess_23 = K2Node_DynamicCast_bSuccess_23;
	Parms.CallFunc_IsSeated_ReturnValue_2 = CallFunc_IsSeated_ReturnValue_2;
	Parms.CallFunc_GetHoldTimer_TimerHandle_1 = CallFunc_GetHoldTimer_TimerHandle_1;
	Parms.CallFunc_GetHoldTimer_bValid_1 = CallFunc_GetHoldTimer_bValid_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_27 = CallFunc_Not_PreBool_ReturnValue_27;
	Parms.CallFunc_K2_TimerExistsHandle_ReturnValue_1 = CallFunc_K2_TimerExistsHandle_ReturnValue_1;
	Parms.K2Node_Event_Inventory = K2Node_Event_Inventory;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_Use = K2Node_Event_Use;
	Parms.K2Node_Event_bActive_1 = K2Node_Event_bActive_1;
	Parms.K2Node_Event_bActive = K2Node_Event_bActive;
	Parms.K2Node_Event_bIsInDropship = K2Node_Event_bIsInDropship;
	Parms.K2Node_Event_IsInCave = K2Node_Event_IsInCave;
	Parms.K2Node_Event_CaveActor = K2Node_Event_CaveActor;
	Parms.K2Node_Event_FootstepType = K2Node_Event_FootstepType;
	Parms.K2Node_Event_PlayerStance = K2Node_Event_PlayerStance;
	Parms.CallFunc_Not_PreBool_ReturnValue_28 = CallFunc_Not_PreBool_ReturnValue_28;
	Parms.K2Node_Event_NewIntensityTarget = K2Node_Event_NewIntensityTarget;
	Parms.K2Node_Event_InterpSpeed = K2Node_Event_InterpSpeed;
	Parms.CallFunc_BooleanAND_ReturnValue_24 = CallFunc_BooleanAND_ReturnValue_24;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.K2Node_Event_NewOffset = K2Node_Event_NewOffset;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.K2Node_InputActionEvent_Key_15 = K2Node_InputActionEvent_Key_15;
	Parms.CallFunc_IsSwimming_ReturnValue = CallFunc_IsSwimming_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_InputActionEvent_Key_16 = K2Node_InputActionEvent_Key_16;
	Parms.CallFunc_GetInputAxisValue_ReturnValue = CallFunc_GetInputAxisValue_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = CallFunc_GetForwardVector_ReturnValue_1;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetInputAxisValue_ReturnValue_1 = CallFunc_GetInputAxisValue_ReturnValue_1;
	Parms.CallFunc_GetControlRotation_ReturnValue_1 = CallFunc_GetControlRotation_ReturnValue_1;
	Parms.K2Node_Event_PrevMovementMode = K2Node_Event_PrevMovementMode;
	Parms.K2Node_Event_NewMovementMode = K2Node_Event_NewMovementMode;
	Parms.K2Node_Event_PrevCustomMode = K2Node_Event_PrevCustomMode;
	Parms.K2Node_Event_NewCustomMode = K2Node_Event_NewCustomMode;
	Parms.CallFunc_GetForwardVector_ReturnValue_2 = CallFunc_GetForwardVector_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CustomEvent_Notify = K2Node_CustomEvent_Notify;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.K2Node_CustomEvent_ActorState = K2Node_CustomEvent_ActorState;
	Parms.CallFunc_IsAlive_ReturnValue_1 = CallFunc_IsAlive_ReturnValue_1;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_21 = CallFunc_GetIcarusPlayerController_ReturnValue_21;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue_2 = CallFunc_GetIcarusGameUserSettings_ReturnValue_2;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_22 = CallFunc_GetIcarusPlayerController_ReturnValue_22;
	Parms.CallFunc_GetScreenHitEffectsStrength_ReturnValue = CallFunc_GetScreenHitEffectsStrength_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_20 = K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival_20;
	Parms.K2Node_DynamicCast_bSuccess_24 = K2Node_DynamicCast_bSuccess_24;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_19 = CallFunc_External_CanPerformInputAction_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.K2Node_Event_ModifiedComponent = K2Node_Event_ModifiedComponent;
	Parms.K2Node_Event_Removed = K2Node_Event_Removed;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_GetModifierStateData_ReturnValue = CallFunc_GetModifierStateData_ReturnValue;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue_1 = CallFunc_ItemMatchesQuery_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CustomEvent_Notify_1 = K2Node_CustomEvent_Notify_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Player_Controller_Survival = K2Node_DynamicCast_AsIcarus_Player_Controller_Survival;
	Parms.K2Node_DynamicCast_bSuccess_25 = K2Node_DynamicCast_bSuccess_25;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_29 = CallFunc_Not_PreBool_ReturnValue_29;
	Parms.CallFunc_BooleanAND_ReturnValue_25 = CallFunc_BooleanAND_ReturnValue_25;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_23 = CallFunc_GetIcarusPlayerController_ReturnValue_23;
	Parms.CallFunc_External_CanPerformInputAction_ReturnValue_20 = CallFunc_External_CanPerformInputAction_ReturnValue_20;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_26 = K2Node_DynamicCast_bSuccess_26;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.K2Node_DynamicCast_AsUMG_User_Interface = K2Node_DynamicCast_AsUMG_User_Interface;
	Parms.K2Node_DynamicCast_bSuccess_27 = K2Node_DynamicCast_bSuccess_27;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue_1 = CallFunc_IsLocalPlayerController_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CustomEvent_Notify_2 = K2Node_CustomEvent_Notify_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.CallFunc_IsLocallyControlledWithMountResolve_ReturnValue = CallFunc_IsLocallyControlledWithMountResolve_ReturnValue;
	Parms.CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_1 = CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_26 = CallFunc_BooleanAND_ReturnValue_26;
	Parms.CallFunc_BooleanAND_ReturnValue_27 = CallFunc_BooleanAND_ReturnValue_27;
	Parms.CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_2 = CallFunc_IsLocallyControlledWithMountResolve_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnFootstep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepType           FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      PlayerStance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::OnFootstep__DelegateSignature(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnFootstep__DelegateSignature");

	Params::ABP_IcarusPlayerCharacterSurvival_C_OnFootstep__DelegateSignature_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.PlayerStance = PlayerStance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.VisionItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::VisionItemChanged__DelegateSignature(const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "VisionItemChanged__DelegateSignature");

	Params::ABP_IcarusPlayerCharacterSurvival_C_VisionItemChanged__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UtilityItemChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::UtilityItemChanged__DelegateSignature(const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UtilityItemChanged__DelegateSignature");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UtilityItemChanged__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.BuildingRepairWarningChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::BuildingRepairWarningChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "BuildingRepairWarningChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.OnCosmeticDamageEffects__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::OnCosmeticDamageEffects__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "OnCosmeticDamageEffects__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.TravellingInDropshipChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInDropship                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::TravellingInDropshipChanged__DelegateSignature(bool IsInDropship)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "TravellingInDropshipChanged__DelegateSignature");

	Params::ABP_IcarusPlayerCharacterSurvival_C_TravellingInDropshipChanged__DelegateSignature_Params Parms{};

	Parms.IsInDropship = IsInDropship;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.FocusedItemUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusItem*                 FocusedItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_IcarusPlayerCharacterSurvival_C::FocusedItemUpdated__DelegateSignature(class AIcarusItem* FocusedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "FocusedItemUpdated__DelegateSignature");

	Params::ABP_IcarusPlayerCharacterSurvival_C_FocusedItemUpdated__DelegateSignature_Params Parms{};

	Parms.FocusedItem = FocusedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.FireModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::FireModeChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "FireModeChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.UnderwaterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Underwater                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_IcarusPlayerCharacterSurvival_C::UnderwaterChanged__DelegateSignature(bool Underwater)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "UnderwaterChanged__DelegateSignature");

	Params::ABP_IcarusPlayerCharacterSurvival_C_UnderwaterChanged__DelegateSignature_Params Parms{};

	Parms.Underwater = Underwater;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.AbortInteraction__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::AbortInteraction__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "AbortInteraction__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.AttachedSeatChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::AttachedSeatChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "AttachedSeatChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C.ProcessingUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_IcarusPlayerCharacterSurvival_C::ProcessingUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusPlayerCharacterSurvival_C", "ProcessingUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


