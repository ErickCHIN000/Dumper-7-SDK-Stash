#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x318 (0x738 - 0x420)
// BlueprintGeneratedClass GA_QuickConsume.GA_QuickConsume_C
class UGA_QuickConsume_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InventoryComponent_C*              InventoryComponent;                                // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerCharacter*                   Character;                                         // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BB9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       Entry;                                             // 0x440(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                         DrinkAudioEvent;                                   // 0x730(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_QuickConsume_C* GetDefaultObj();

	void IsValidInDeathStates(bool* IsValid);
	void GetEntryToConsume(bool* bSuccess, struct FInventoryEntry* InventoryEntry, class AController* CallFunc_GetActivatingController_ReturnValue, TScriptInterface<class IToolbarAccessInterface> K2Node_DynamicCast_AsToolbar_Access_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IToolbarArrangementInterface> CallFunc_FindToolbarArrangement_BP_ReturnValue, TScriptInterface<class IToolbarSlotEntryObjectInterface> CallFunc_GetSlotEntryObjectAtIndex_ReturnValue, class UBP_TEMP_ToolbarSlotObject_InventoryItem_C* K2Node_DynamicCast_AsBP_TEMP_Toolbar_Slot_Object_Inventory_Item, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_QuickConsume(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_GetEntryToConsume_bSuccess, const struct FInventoryEntry& CallFunc_GetEntryToConsume_InventoryEntry, bool CallFunc_K2_CommitAbility_ReturnValue, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue, class ACharacter* CallFunc_GetActivatingCharacter_Character, class AController* CallFunc_GetActivatingController_ReturnValue, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UBP_InventoryComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FInventoryEntry& CallFunc_GetItem_Entry, bool CallFunc_GetItem_ReturnValue, const struct FInstanceData_Traits& CallFunc_TryGetItemTraits_Traits, enum class EGetResult CallFunc_TryGetItemTraits_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_HasAuthority_ReturnValue, bool CallFunc_HasTag_ReturnValue, class ACharacter* CallFunc_GetActivatingCharacter_Character_1, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue);
};

}


