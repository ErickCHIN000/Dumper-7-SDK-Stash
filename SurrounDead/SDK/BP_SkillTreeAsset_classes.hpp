#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x140 - 0x100)
// BlueprintGeneratedClass BP_SkillTreeAsset.BP_SkillTreeAsset_C
class UBP_SkillTreeAsset_C : public UTechnologyAsset
{
public:
	enum class Enum_SkillType                    Type;                                              // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PrimaryText;                                       // 0x108(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Cost;                                              // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C8E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ToolTipText;                                       // 0x128(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_SkillTreeAsset_C* GetDefaultObj();

};

}


