#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x788 - 0x774)
// BlueprintGeneratedClass BP_AlphaWolf_Trophy.BP_AlphaWolf_Trophy_C
class ABP_AlphaWolf_Trophy_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_1A1B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGFurComponent*                        GFur;                                              // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AlphaWolf_Trophy_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_AlphaWolf_Trophy(int32 EntryPoint);
};

}

