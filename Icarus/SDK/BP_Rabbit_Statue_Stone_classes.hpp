#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x780 - 0x774)
// BlueprintGeneratedClass BP_Rabbit_Statue_Stone.BP_Rabbit_Statue_Stone_C
class ABP_Rabbit_Statue_Stone_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_678F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Rabbit_Statue_Stone_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Rabbit_Statue_Stone(int32 EntryPoint);
};

}

