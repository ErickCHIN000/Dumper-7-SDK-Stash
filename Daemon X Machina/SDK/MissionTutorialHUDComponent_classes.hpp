#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x138 - 0x130)
// BlueprintGeneratedClass MissionTutorialHUDComponent.MissionTutorialHUDComponent_C
class UMissionTutorialHUDComponent_C : public UTTLMissionTutorialHUDComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UMissionTutorialHUDComponent_C* GetDefaultObj();

	void GetAllAnimationBP();
	void ExecuteUbergraph_MissionTutorialHUDComponent(int32 EntryPoint, class UCmn_tutorial_top01_C* K2Node_DynamicCast_AsCmn_Tutorial_Top_01, bool K2Node_DynamicCast_bSuccess);
};

}


