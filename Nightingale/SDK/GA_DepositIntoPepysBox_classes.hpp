#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x330 (0x750 - 0x420)
// BlueprintGeneratedClass GA_DepositIntoPepysBox.GA_DepositIntoPepysBox_C
class UGA_DepositIntoPepysBox_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_PlayerController_C*                DepositingController;                              // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_Character_C*                       DepositingCharacter;                               // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_EquippableItemBase_C*              CarriedResource;                                   // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       StorageBox;                                        // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       ItemInstances;                                     // 0x450(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                Instigator;                                        // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_InventoryComponent_C*              DepositingInventory;                               // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_DepositIntoPepysBox_C* GetDefaultObj();

	void TransferFromCarryContainer(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetAllItems_Entries, int32 CallFunc_TransferItemToContainer_AmountTransferred, bool CallFunc_TransferItemToContainer_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ObtainVariables(const struct FGameplayEventData& EventData, bool* bSuccess, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class UBP_InventoryComponent_C* K2Node_DynamicCast_AsBP_Inventory_Component, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Carry_C> K2Node_DynamicCast_AsBPI_Carry, bool K2Node_DynamicCast_bSuccess_1, class AEquippableItem* CallFunc_GetCarriedResource_ResourceItem, bool CallFunc_GetCarriedResource_IsCarryingResource, bool CallFunc_IsValid_ReturnValue, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_3, class AController* CallFunc_GetController_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess_4);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class AController* Controller, class ABP_Character_C* Character, class AActor* OwnerActor, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_GetFunctionName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetFunctionName_ReturnValue_4, const class FString& CallFunc_GetFunctionName_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetStorageBox_Container, bool CallFunc_GetStorageBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_DepositIntoPepysBox(int32 EntryPoint, const class FString& CallFunc_GetFunctionName_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsServer_ReturnValue, bool CallFunc_ObtainVariables_bSuccess, const struct FInventoryEntry& CallFunc_GetItemInstances_ItemInstances, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
};

}


