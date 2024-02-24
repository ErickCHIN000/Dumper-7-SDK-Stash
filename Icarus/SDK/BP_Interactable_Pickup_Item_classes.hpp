#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x108 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Pickup_Item.BP_Interactable_Pickup_Item_C
class UBP_Interactable_Pickup_Item_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AIcarusPlayerCharacter*                Current_Player;                                    // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusItem*                           CurrentItem;                                       // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                LastInstigator;                                    // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Interactable_Pickup_Item_C* GetDefaultObj();

	void GetPickupAnimationHand(class AIcarusPlayerCharacter* ForCharacter, bool* ShouldPlayAnim, enum class EHandedness* Handedness, enum class EHandedness Hand, enum class EHandedness Temp_byte_Variable, enum class EDataValidity CallFunc_GetFocusedItemData_Validity, const struct FItemData& CallFunc_GetFocusedItemData_ReturnValue, const struct FItemAttachmentData& CallFunc_GetFocusableAttachmentData_AttachmentData, enum class EDataValid CallFunc_GetFocusableAttachmentData_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EHandedness Temp_byte_Variable_1, bool CallFunc_RandomBool_ReturnValue, bool Temp_bool_Variable, enum class EHandedness K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, class AIcarusItem* CallFunc_GetCurrentSecondarySlotActor_ReturnValue, class AIcarusItem* CallFunc_GetFocusedItemActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInteractableComponent* K2Node_DynamicCast_AsInteractable_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UInteractableBehaviour* CallFunc_GetCurrentInteractForType_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Pickup_Item(bool* PickedUp, bool CallFunc_PickupItem_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ReceiveBeginPlay();
	void MULTI_PlayPickupFX(class AIcarusPlayerCharacter* Target);
	void ForcedInteraction(class AActor* Instigator, const struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Pickup_Item(int32 EntryPoint, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, enum class EHandedness Temp_byte_Variable, class UAnimMontage* Temp_object_Variable_2, class UAnimMontage* Temp_object_Variable_3, class UAnimMontage* Temp_object_Variable_4, bool CallFunc_Pickup_Item_PickedUp, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusItem* K2Node_DynamicCast_AsIcarus_Item, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AIcarusPlayerCharacter* K2Node_CustomEvent_Target, bool CallFunc_GetPickupAnimationHand_ShouldPlayAnim, enum class EHandedness CallFunc_GetPickupAnimationHand_Handedness, const struct FItemStaticData& CallFunc_GetStaticItemData_StaticData, enum class EDataValid CallFunc_GetStaticItemData_Paths, class UAnimMontage* K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemAudioData& CallFunc_GetItemAudioDataStruct_ItemAudioData, enum class EValid CallFunc_GetItemAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class UAnimMontage* Temp_object_Variable_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_1, class AActor* K2Node_CustomEvent_Instigator, const struct FHitResult& K2Node_CustomEvent_HitResult, bool CallFunc_IsValid_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess_2, enum class EHandedness Temp_byte_Variable_1, class UAnimMontage* K2Node_Select_Default_1);
};

}


