#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x7E0 - 0x7D4)
// BlueprintGeneratedClass BP_Wood_Sign_Small.BP_Wood_Sign_Small_C
class ABP_Wood_Sign_Small_C : public ABP_Sign_Base_C
{
public:
	uint8                                        Pad_2843[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Wood_Sign_Small_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Wood_Sign_Small(int32 EntryPoint);
};

}


