#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass EEC_DropItem.EEC_DropItem_C
class UEEC_DropItem_C : public UNWXGameplayEffectExecutionCalculation
{
public:

	static class UClass* StaticClass();
	static class UEEC_DropItem_C* GetDefaultObj();

	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput* OutExecutionOutput, class ABP_PlayerController_C* LPlayerController, class UInventoryComponentBase* LInventoryComponennt, class AEquippableItem* LEquippedItem, class AActor* LOwner, class UAbilitySystemComponent* LAbilitySystemComponent, class UAbilitySystemComponent* CallFunc_GetTargetAbilitySystemComponent_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool CallFunc_DropItemByInstanceIdAndContainerType_ReturnValue, bool CallFunc_IsItemDroppable_IsDroppable, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, bool CallFunc_IsValid_ReturnValue_3);
};

}


