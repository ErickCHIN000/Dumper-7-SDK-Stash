#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x780 - 0x774)
// BlueprintGeneratedClass BP_SnowLeopard_Statue_Bronze.BP_SnowLeopard_Statue_Bronze_C
class ABP_SnowLeopard_Statue_Bronze_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_66D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_SnowLeopard_Statue_Bronze_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_SnowLeopard_Statue_Bronze(int32 EntryPoint);
};

}

