#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x188 - 0xA0)
// BlueprintGeneratedClass BP_ConsumableComponent.BP_ConsumableComponent_C
class UBP_ConsumableComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXPlayerCharacter*                   ItemOwner;                                         // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponentBase*               InventoryComponent;                                // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B12[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    ConsumableItemID;                                  // 0xC0(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FGuid                                 ConsumableInstanceID;                              // 0x140(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEquippableItem*                       Item;                                              // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ConsumableEffectsApplied;                          // 0x158(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FItemData_Consumable                  ConsumableData;                                    // 0x168(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_ConsumableComponent_C* GetDefaultObj();

	void GetStatusEffects(TArray<struct FStatusEffectLevel>* StatusEffects);
	void GetGameplayEffects(TArray<class UClass*>* GameplayEffects);
	void GetOrCacheAttachParent(class ANWXPlayerCharacter** Parent, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void GetOrCacheInventoryComponent(class UInventoryComponentBase** InventoryComponent, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
	void GetConsumableAmount(int32* Amount, class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, int32 CallFunc_GetConsumableAmount_Amount);
	void RemoveFromInventory(class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IEquippableItemUtilityInterface> K2Node_DynamicCast_AsEquippable_Item_Utility_Interface, bool K2Node_DynamicCast_bSuccess);
	void ApplyConsumableEffects(class ANWXPlayerCharacter* CallFunc_GetOrCacheAttachParent_Parent, class UInventoryComponentBase* CallFunc_GetOrCacheInventoryComponent_InventoryComponent, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_ConsumableComponent(int32 EntryPoint, const struct FGuid& CallFunc_GetInstanceID_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AEquippableItem* K2Node_DynamicCast_AsEquippable_Item, bool K2Node_DynamicCast_bSuccess, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference);
	void ConsumableEffectsApplied__DelegateSignature();
};

}


