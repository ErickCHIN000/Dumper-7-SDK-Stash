#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xB0 - 0x9C)
// BlueprintGeneratedClass BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C
class UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C : public UBP_ConditionBehaviour_Creature_Killed_Base_C
{
public:
	struct FGameplayTag                          Creature_Trait;                                    // 0x9C(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_6E0D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemConstraintPresentationDataAsset*  ItemConstraintPresentationData;                    // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C* GetDefaultObj();

	void CheckCreatureTags(const struct FGameplayTagContainer& CurrentCreatureTags, bool* bHasCreatureTraits, bool CallFunc_HasTag_ReturnValue);
	void GetCreatureTraitInfo(class FText* CreatureTraitInfo, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


