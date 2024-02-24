#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass BP_RewardBehaviour_Technique_Multiple.BP_RewardBehaviour_Technique_Multiple_C
class UBP_RewardBehaviour_Technique_Multiple_C : public UBP_RewardBehaviour_Technique_Base_C
{
public:
	struct FSkillReferenceContainer              SkillReferences;                                   // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_RewardBehaviour_Technique_Multiple_C* GetDefaultObj();

	void GetSkillsToReward(struct FSkillReferenceContainer* SkillReferences);
};

}


