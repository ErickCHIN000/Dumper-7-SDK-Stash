#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x798 - 0x78A)
// BlueprintGeneratedClass BP_TackleBox.BP_TackleBox_C
class ABP_TackleBox_C : public ABP_DeployableContainerBase_C
{
public:
	uint8                                        Pad_2136[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_TackleBox_C* GetDefaultObj();

	void OnBecomeInteractedWith();
	void OnNoLongerInteractedWith();
	void ExecuteUbergraph_BP_TackleBox(int32 EntryPoint);
};

}


