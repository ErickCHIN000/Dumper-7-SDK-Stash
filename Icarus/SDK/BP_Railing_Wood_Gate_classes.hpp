#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x7C0 - 0x7B4)
// BlueprintGeneratedClass BP_Railing_Wood_Gate.BP_Railing_Wood_Gate_C
class ABP_Railing_Wood_Gate_C : public ABP_Door_Base_C
{
public:
	uint8                                        Pad_5CB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Railing_Wood_Gate_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Railing_Wood_Gate(int32 EntryPoint);
};

}

