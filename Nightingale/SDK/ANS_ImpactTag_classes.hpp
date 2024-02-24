#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass ANS_ImpactTag.ANS_ImpactTag_C
class UANS_ImpactTag_C : public UAnimNotifyState
{
public:
	TMap<struct FGameplayTag, struct FGameplayTag> MeleeHitImpactTags;                                // 0x30(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UANS_ImpactTag_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_EquippableItemBase_C* EquippedItem, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, TArray<struct FGameplayTag>& CallFunc_GetItemDataTraits_Traits, bool CallFunc_IsValid_ReturnValue_1, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, TArray<struct FGameplayTag>& CallFunc_Map_Keys_Keys, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayTag& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromTag_ReturnValue, bool CallFunc_HasAnyTags_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Cache_Melee_Impact_Tag_CacheDuration_ImplicitCast);
};

}


