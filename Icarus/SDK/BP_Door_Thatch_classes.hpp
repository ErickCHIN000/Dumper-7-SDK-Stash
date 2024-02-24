#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x7C0 - 0x7B4)
// BlueprintGeneratedClass BP_Door_Thatch.BP_Door_Thatch_C
class ABP_Door_Thatch_C : public ABP_Door_Base_C
{
public:
	uint8                                        Pad_352B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Door_Thatch_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Door_Thatch(int32 EntryPoint);
};

}


