#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xC8 - 0xA0)
// BlueprintGeneratedClass BP_ItemUsage.BP_ItemUsage_C
class UBP_ItemUsage_C : public UActorComponent
{
public:
	TArray<struct FGameplayTag>                  InteractionTags;                                   // 0xA0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                        EquipEffect;                                       // 0xB0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EquipTag;                                          // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ItemUsage_C* GetDefaultObj();

	void Initialize(const struct FItemData_Equippable& EquippableData, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags);
};

}


