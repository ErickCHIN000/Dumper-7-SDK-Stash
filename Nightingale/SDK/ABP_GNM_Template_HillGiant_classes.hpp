#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x1C4C - 0x1C40)
// AnimBlueprintGeneratedClass ABP_GNM_Template_HillGiant.ABP_GNM_Template_HillGiant_C
class UABP_GNM_Template_HillGiant_C : public UABP_GNM_Template_C
{
public:
	bool                                         IsDown;                                            // 0x1C40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnarm;                                           // 0x1C41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsArm;                                             // 0x1C42(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DC1[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ArmKey;                                            // 0x1C44(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_GNM_Template_HillGiant_C* GetDefaultObj();

	void SetAITarget(class AActor* AITarget, bool* Success);
};

}


