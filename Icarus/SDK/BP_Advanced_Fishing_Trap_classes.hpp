#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x7D0 - 0x7C1)
// BlueprintGeneratedClass BP_Advanced_Fishing_Trap.BP_Advanced_Fishing_Trap_C
class ABP_Advanced_Fishing_Trap_C : public ABP_Basic_Fishing_Trap_C
{
public:
	uint8                                        Pad_68C7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Advanced_Fishing_Trap_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Advanced_Fishing_Trap(int32 EntryPoint);
};

}


