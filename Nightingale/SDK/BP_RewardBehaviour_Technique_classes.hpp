#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE8 (0x120 - 0x38)
// BlueprintGeneratedClass BP_RewardBehaviour_Technique.BP_RewardBehaviour_Technique_C
class UBP_RewardBehaviour_Technique_C : public UBP_RewardBehaviour_Technique_Base_C
{
public:
	uint8                                        Pad_215F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillDataReference                   SkillReference;                                    // 0x40(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Technique_C* GetDefaultObj();

	void GetSkillsToReward(struct FSkillReferenceContainer* SkillReferences, TArray<struct FSkillDataReference>& K2Node_MakeArray_Array, const struct FSkillReferenceContainer& K2Node_MakeStruct_SkillReferenceContainer);
};

}


