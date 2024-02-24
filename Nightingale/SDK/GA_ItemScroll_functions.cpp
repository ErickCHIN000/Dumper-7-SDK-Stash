#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_ItemScroll.GA_ItemScroll_C
// (None)

class UClass* UGA_ItemScroll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_ItemScroll_C");

	return Clss;
}


// GA_ItemScroll_C GA_ItemScroll.Default__GA_ItemScroll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_ItemScroll_C* UGA_ItemScroll_C::GetDefaultObj()
{
	static class UGA_ItemScroll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_ItemScroll_C*>(UGA_ItemScroll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_ItemScroll.GA_ItemScroll_C.HandleHideLogic
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ItemScroll_C::HandleHideLogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "HandleHideLogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ItemScroll.GA_ItemScroll_C.HandleStandardLogic
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedSlotIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemScroll_C::HandleStandardLogic(TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, int32 CallFunc_GetSelectedSlotIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "HandleStandardLogic");

	Params::UGA_ItemScroll_C_HandleStandardLogic_Params Parms{};

	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput = CallFunc_FindToolbarArrangement_BP_self_CastInput;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_GetSelectedSlotIndex_ReturnValue = CallFunc_GetSelectedSlotIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ItemScroll.GA_ItemScroll_C.HandleHolsterLogic
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>CallFunc_FindToolbarArrangement_BP_self_CastInput_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue_3                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemScroll_C::HandleHolsterLogic(TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_1, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_1, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_2, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_2, TScriptInterface<class IToolbarAccessInterface> CallFunc_FindToolbarArrangement_BP_self_CastInput_3, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "HandleHolsterLogic");

	Params::UGA_ItemScroll_C_HandleHolsterLogic_Params Parms{};

	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput = CallFunc_FindToolbarArrangement_BP_self_CastInput;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput_1 = CallFunc_FindToolbarArrangement_BP_self_CastInput_1;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue_1 = CallFunc_FindToolbarArrangement_BP_ReturnValue_1;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput_2 = CallFunc_FindToolbarArrangement_BP_self_CastInput_2;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue_2 = CallFunc_FindToolbarArrangement_BP_ReturnValue_2;
	Parms.CallFunc_FindToolbarArrangement_BP_self_CastInput_3 = CallFunc_FindToolbarArrangement_BP_self_CastInput_3;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue_3 = CallFunc_FindToolbarArrangement_BP_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ItemScroll.GA_ItemScroll_C.CheckPreconditions
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 OwningController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>K2Node_DynamicCast_AsToolbar_Access_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemScroll_C::CheckPreconditions(class AActor* OwnerActor, bool* Valid, class AController* OwningController, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "CheckPreconditions");

	Params::UGA_ItemScroll_C_CheckPreconditions_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.OwningController = OwningController;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Access_Interface = K2Node_DynamicCast_AsToolbar_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function GA_ItemScroll.GA_ItemScroll_C.ObtainVariables
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToolbarSlotPayloadIndex                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToolbarArrangementPayloadIndex                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     ToolbarInterface                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EHandType               Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHandType               Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        K2Node_DynamicCast_AsNWXPlayer_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>CallFunc_GetSelectedSlotEntryObject_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSelectedSlotIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>K2Node_DynamicCast_AsToolbar_Access_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>K2Node_DynamicCast_AsToolbar_Access_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>CallFunc_GetSelectedSlotEntryObject_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_TEMP_ToolbarSlotObject_InventoryItem_C*K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>CallFunc_GetSelectedSlotEntryObject_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipped_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_TEMP_ToolbarSlotObject_InventoryItem_C*K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_1(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipped_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarSlotEntryObjectInterface>Temp_interface_Variable                                          (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UBP_TEMP_ToolbarSlotObject_InventoryItem_C*K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_2(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEquipped_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarAccessInterface>K2Node_DynamicCast_AsToolbar_Access_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IToolbarArrangementInterface>CallFunc_FindToolbarArrangement_BP_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoolFromAbilityPayload_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EHandType               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EToolbarArrangement     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasBool_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSK_HMM_FP_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIntegerFromAbilityPayload_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_HMM_FP_C*               K2Node_DynamicCast_AsABP_HMM_FP                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AbilityPayloadHasInteger_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             K2Node_DynamicCast_AsBP_Character                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_Value_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_AnimationDelay_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemScroll_C::ObtainVariables(const struct FGameplayEventData& EventData, bool* bSuccess, int32 ToolbarSlotPayloadIndex, int32 ToolbarArrangementPayloadIndex, class UObject* ToolbarInterface, enum class EHandType Temp_byte_Variable, enum class EHandType Temp_byte_Variable_1, bool Temp_bool_Variable, enum class EToolbarArrangement Temp_byte_Variable_2, enum class EToolbarArrangement Temp_byte_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSelectedSlotEntryObject_ReturnValue, TScriptInterface<class IToolbarArrangementInterface> K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetSelectedSlotIndex_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface_1, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_1, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSelectedSlotEntryObject_ReturnValue_1, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSelectedSlotEntryObject_ReturnValue_2, bool CallFunc_IsEquipped_ReturnValue, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsEquipped_ReturnValue_1, TScriptInterface<class IToolbarSlotEntryObjectInterface> Temp_interface_Variable, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_2, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsEquipped_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface_2, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_GetBoolFromAbilityPayload_ReturnValue, double CallFunc_FClamp_ReturnValue, enum class EHandType K2Node_Select_Default, enum class EToolbarArrangement K2Node_Select_Default_1, bool CallFunc_AbilityPayloadHasBool_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, int32 CallFunc_GetIntegerFromAbilityPayload_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_HMM_FP_C* K2Node_DynamicCast_AsABP_HMM_FP, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_AbilityPayloadHasInteger_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_10, double CallFunc_FClamp_Value_ImplicitCast, float K2Node_VariableSet_AnimationDelay_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "ObtainVariables");

	Params::UGA_ItemScroll_C_ObtainVariables_Params Parms{};

	Parms.EventData = EventData;
	Parms.ToolbarSlotPayloadIndex = ToolbarSlotPayloadIndex;
	Parms.ToolbarArrangementPayloadIndex = ToolbarArrangementPayloadIndex;
	Parms.ToolbarInterface = ToolbarInterface;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXPlayer_Controller = K2Node_DynamicCast_AsNWXPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface = K2Node_DynamicCast_AsToolbar_Arrangement_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSelectedSlotEntryObject_ReturnValue = CallFunc_GetSelectedSlotEntryObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1 = K2Node_DynamicCast_AsToolbar_Arrangement_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSelectedSlotIndex_ReturnValue = CallFunc_GetSelectedSlotIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Access_Interface = K2Node_DynamicCast_AsToolbar_Access_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue = CallFunc_FindToolbarArrangement_BP_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Access_Interface_1 = K2Node_DynamicCast_AsToolbar_Access_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue_1 = CallFunc_FindToolbarArrangement_BP_ReturnValue_1;
	Parms.CallFunc_GetSelectedSlotEntryObject_ReturnValue_1 = CallFunc_GetSelectedSlotEntryObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item = K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetSelectedSlotEntryObject_ReturnValue_2 = CallFunc_GetSelectedSlotEntryObject_ReturnValue_2;
	Parms.CallFunc_IsEquipped_ReturnValue = CallFunc_IsEquipped_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_1 = K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsEquipped_ReturnValue_1 = CallFunc_IsEquipped_ReturnValue_1;
	Parms.Temp_interface_Variable = Temp_interface_Variable;
	Parms.K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_2 = K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsEquipped_ReturnValue_2 = CallFunc_IsEquipped_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsToolbar_Access_Interface_2 = K2Node_DynamicCast_AsToolbar_Access_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_FindToolbarArrangement_BP_ReturnValue_2 = CallFunc_FindToolbarArrangement_BP_ReturnValue_2;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetBoolFromAbilityPayload_ReturnValue = CallFunc_GetBoolFromAbilityPayload_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AbilityPayloadHasBool_ReturnValue = CallFunc_AbilityPayloadHasBool_ReturnValue;
	Parms.CallFunc_GetSK_HMM_FP_ReturnValue = CallFunc_GetSK_HMM_FP_ReturnValue;
	Parms.CallFunc_GetIntegerFromAbilityPayload_ReturnValue = CallFunc_GetIntegerFromAbilityPayload_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsABP_HMM_FP = K2Node_DynamicCast_AsABP_HMM_FP;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_AbilityPayloadHasInteger_ReturnValue = CallFunc_AbilityPayloadHasInteger_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Character = K2Node_DynamicCast_AsBP_Character;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_FClamp_Value_ImplicitCast = CallFunc_FClamp_Value_ImplicitCast;
	Parms.K2Node_VariableSet_AnimationDelay_ImplicitCast = K2Node_VariableSet_AnimationDelay_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function GA_ItemScroll.GA_ItemScroll_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 OwningController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class ABP_Character_C*             OwningCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OwnerActor                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_K2_CanActivateAbility_RelevantTags                      (None)
// bool                               CallFunc_K2_CanActivateAbility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPreconditions_Valid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_ItemScroll_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class AController* OwningController, class ABP_Character_C* OwningCharacter, class AActor* OwnerActor, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, bool CallFunc_CheckPreconditions_Valid, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "K2_CanActivateAbility");

	Params::UGA_ItemScroll_C_K2_CanActivateAbility_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.OwningController = OwningController;
	Parms.OwningCharacter = OwningCharacter;
	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_K2_CanActivateAbility_RelevantTags = CallFunc_K2_CanActivateAbility_RelevantTags;
	Parms.CallFunc_K2_CanActivateAbility_ReturnValue = CallFunc_K2_CanActivateAbility_ReturnValue;
	Parms.CallFunc_CheckPreconditions_Valid = CallFunc_CheckPreconditions_Valid;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = std::move(Parms.RelevantTags);

	return Parms.ReturnValue;

}


// Function GA_ItemScroll.GA_ItemScroll_C.OnFinish_83AC441F4F891880C3C14BB368C1E4B0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ItemScroll_C::OnFinish_83AC441F4F891880C3C14BB368C1E4B0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "OnFinish_83AC441F4F891880C3C14BB368C1E4B0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ItemScroll.GA_ItemScroll_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ItemScroll_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_ItemScroll_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ItemScroll.GA_ItemScroll_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemScroll_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "K2_OnEndAbility");

	Params::UGA_ItemScroll_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ItemScroll.GA_ItemScroll_C.Timeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ItemScroll_C::Timeout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "Timeout");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_ItemScroll.GA_ItemScroll_C.ExecuteUbergraph_GA_ItemScroll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_ObtainVariables_bSuccess                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckPreconditions_Valid                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ItemScroll_C::ExecuteUbergraph_GA_ItemScroll(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_ObtainVariables_bSuccess, bool K2Node_Event_bWasCancelled, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CheckPreconditions_Valid, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_AreAutomatedTestsRunning_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ItemScroll_C", "ExecuteUbergraph_GA_ItemScroll");

	Params::UGA_ItemScroll_C_ExecuteUbergraph_GA_ItemScroll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_ObtainVariables_bSuccess = CallFunc_ObtainVariables_bSuccess;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CheckPreconditions_Valid = CallFunc_CheckPreconditions_Valid;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_WaitDelay_ReturnValue = CallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


