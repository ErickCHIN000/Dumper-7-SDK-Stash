#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0x132 - 0x110)
// BlueprintGeneratedClass BP_InventoryAbility.BP_InventoryAbility_C
class UBP_InventoryAbility_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakInventoryItem*                     InventoryAbility_Item;                             // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         InventoryAbility_Character;                        // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOakPlayerAbilityEventHub*             InventoryAbility_EventHub;                         // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Pause_OnInjured;                                   // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class Enum_InventoryRarity              InvetoryAbility_ItemRarity;                        // 0x131(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InventoryAbility_C* GetDefaultObj();

	enum class EGbxAbilityState CalculateAbilityState(bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue);
	void OnActivated();
	void ExecuteUbergraph_BP_InventoryAbility(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakInventoryItem* K2Node_DynamicCast_AsOak_Inventory_Item, bool K2Node_DynamicCast_bSuccess1, class UInventoryBalanceStateComponent* CallFunc_GetInventoryBalanceState_ReturnValue, class UInventoryRarityData* CallFunc_GetInventoryRarityData_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue4);
};

}


