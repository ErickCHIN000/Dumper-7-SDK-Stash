#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xC0 - 0x9C)
// BlueprintGeneratedClass BP_ConditionBehaviour_Creature_Killed_WithTraits.BP_ConditionBehaviour_Creature_Killed_WithTraits_C
class UBP_ConditionBehaviour_Creature_Killed_WithTraits_C : public UBP_ConditionBehaviour_Creature_Killed_Base_C
{
public:
	enum class EGameplayContainerMatchType       CheckType;                                         // 0x9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_778D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CreatureTraits;                                    // 0xA0(0x20)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Creature_Killed_WithTraits_C* GetDefaultObj();

	void CheckCreatureTags(const struct FGameplayTagContainer& CurrentCreatureTags, bool* bHasCreatureTraits, bool bHasTags, bool CallFunc_HasAllTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAnyTags_ReturnValue);
	void GetCreatureTraitInfo(class FText* CreatureTraitInfo);
};

}


