#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EEC_DropItem.EEC_DropItem_C
// (None)

class UClass* UEEC_DropItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EEC_DropItem_C");

	return Clss;
}


// EEC_DropItem_C EEC_DropItem.Default__EEC_DropItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEEC_DropItem_C* UEEC_DropItem_C::GetDefaultObj()
{
	static class UEEC_DropItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEEC_DropItem_C*>(UEEC_DropItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EEC_DropItem.EEC_DropItem_C.Execute
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayEffectCustomExecutionParametersExecutionParams                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectCustomExecutionOutputOutExecutionOutput                                               (Parm, OutParm)
// class ABP_PlayerController_C*      LPlayerController                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     LInventoryComponennt                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             LEquippedItem                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class AActor*                      LOwner                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     LAbilitySystemComponent                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetTargetAbilitySystemComponent_ReturnValue             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponentBase*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_DynamicCast_AsCharacter                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerController_C*      K2Node_DynamicCast_AsBP_Player_Controller                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue_1                         (ConstParm)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemDroppable_IsDroppable                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetEquippedItem_EquippedQuickbarItem                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEEC_DropItem_C::Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class ABP_PlayerController_C* LPlayerController, class UInventoryComponentBase* LInventoryComponennt, class AEquippableItem* LEquippedItem, class AActor* LOwner, class UAbilitySystemComponent* LAbilitySystemComponent, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue, bool CallFunc_IsItemDroppable_IsDroppable, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EEC_DropItem_C", "Execute");

	Params::UEEC_DropItem_C_Execute_Params Parms{};

	Parms.ExecutionParams = ExecutionParams;
	Parms.LPlayerController = LPlayerController;
	Parms.LInventoryComponennt = LInventoryComponennt;
	Parms.LEquippedItem = LEquippedItem;
	Parms.LOwner = LOwner;
	Parms.LAbilitySystemComponent = LAbilitySystemComponent;
	Parms.CallFunc_GetTargetAbilitySystemComponent_ReturnValue = CallFunc_GetTargetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter = K2Node_DynamicCast_AsCharacter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Player_Controller = K2Node_DynamicCast_AsBP_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInventoryEntry_ReturnValue_1 = CallFunc_GetInventoryEntry_ReturnValue_1;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue = CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue;
	Parms.CallFunc_IsItemDroppable_IsDroppable = CallFunc_IsItemDroppable_IsDroppable;
	Parms.CallFunc_GetEquippedItem_EquippedQuickbarItem = CallFunc_GetEquippedItem_EquippedQuickbarItem;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (OutExecutionOutput != nullptr)
		*OutExecutionOutput = std::move(Parms.OutExecutionOutput);

}

}


