#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x5B8 - 0x5A4)
// BlueprintGeneratedClass BP_VoxelRock.BP_VoxelRock_C
class ABP_VoxelRock_C : public ABP_VoxelResource_Base_C
{
public:
	uint8                                        Pad_2E61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  Mesh;                                              // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  EditorMesh;                                        // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_VoxelRock_C* GetDefaultObj();

};

}


