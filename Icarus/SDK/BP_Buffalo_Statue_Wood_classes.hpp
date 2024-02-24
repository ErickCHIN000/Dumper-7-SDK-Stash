#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x780 - 0x774)
// BlueprintGeneratedClass BP_Buffalo_Statue_Wood.BP_Buffalo_Statue_Wood_C
class ABP_Buffalo_Statue_Wood_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_3E83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Buffalo_Statue_Wood_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Buffalo_Statue_Wood(int32 EntryPoint);
};

}


