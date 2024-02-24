#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x780 - 0x774)
// BlueprintGeneratedClass BP_Railing_Base.BP_Railing_Base_C
class ABP_Railing_Base_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_5EE5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Railing_Base_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Railing_Base(int32 EntryPoint);
};

}


