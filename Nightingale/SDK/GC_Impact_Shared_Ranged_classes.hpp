#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x78 - 0x78)
// BlueprintGeneratedClass GC_Impact_Shared_Ranged.GC_Impact_Shared_Ranged_C
class UGC_Impact_Shared_Ranged_C : public UGC_Impact_Shared_C
{
public:

	static class UClass* StaticClass();
	static class UGC_Impact_Shared_Ranged_C* GetDefaultObj();

	void GetElementTagFromActor(class AActor* Actor, struct FGameplayTag* ElementalTag, const TArray<struct FGameplayTag>& Temp_ElemTags, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsNotEmpty_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class AEquippableItem* Temp_object_Variable, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_Get_Element_Tags_Ranged_Elemental_Tags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags);
	void Get_Impact_Tag(class UObject* Object, struct FGameplayTag* Tag, const TArray<struct FGameplayTag>& Temp_ImpactTags, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Greater_IntInt_ReturnValue, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class AEquippableItem* Temp_object_Variable, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, const struct FGameplayTagContainer& CallFunc_GetImpactTagsRanged_StrikeTags, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags);
};

}


