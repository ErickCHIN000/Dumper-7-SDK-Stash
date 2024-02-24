#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5C0 - 0x5B8)
// BlueprintGeneratedClass BP_Mission_Meta_Voxel.BP_Mission_Meta_Voxel_C
class ABP_Mission_Meta_Voxel_C : public ABP_VoxelRock_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Mission_Meta_Voxel_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Mission_Meta_Voxel(int32 EntryPoint);
};

}


