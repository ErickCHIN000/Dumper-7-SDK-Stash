#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0xFC - 0xE0)
// BlueprintGeneratedClass BP_EquippableModifier_IronwoodResources.BP_EquippableModifier_IronwoodResources_C
class UBP_EquippableModifier_IronwoodResources_C : public UEquippableModifier
{
public:
	class FText                                  ItemName;                                          // 0xE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ID;                                                // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_EquippableModifier_IronwoodResources_C* GetDefaultObj();

	bool ItemUnequipped(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ItemUnequipped_ReturnValue, bool CallFunc_RemoveModifierState_ReturnValue);
	bool ItemEquipped(const struct FModifier& K2Node_MakeStruct_Modifier, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ItemEquipped_ReturnValue, int32 CallFunc_AddModifierState_ReturnValue);
};

}


