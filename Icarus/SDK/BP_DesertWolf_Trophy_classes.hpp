#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x788 - 0x774)
// BlueprintGeneratedClass BP_DesertWolf_Trophy.BP_DesertWolf_Trophy_C
class ABP_DesertWolf_Trophy_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_6873[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGFurComponent*                        GFur;                                              // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_DesertWolf_Trophy_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_DesertWolf_Trophy(int32 EntryPoint);
};

}


