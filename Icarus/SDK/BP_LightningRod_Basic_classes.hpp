#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x788 - 0x774)
// BlueprintGeneratedClass BP_LightningRod_Basic.BP_LightningRod_Basic_C
class ABP_LightningRod_Basic_C : public ABP_LightningRod_Base_C
{
public:
	uint8                                        Pad_196[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_LightningRod_Basic_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_LightningRod_Basic(int32 EntryPoint);
};

}


