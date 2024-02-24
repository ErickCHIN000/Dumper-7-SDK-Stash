#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x140 - 0x108)
// Class MeshWidget.MeshWidget
class UMeshWidget : public UWidget
{
public:
	uint8                                        Pad_45A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRequestMeshInstanceUpdate;                       // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMeshWidget* GetDefaultObj();

	void UpdatePerInstanceBuffer(int32 MeshId, const TArray<struct FVector4>& Data);
	void UpdateMeshInstance(int32 MeshId, int32 InstanceId, const struct FMeshInstanceData& NewData);
	struct FGeometry GetCachedAllottedGeometry();
	void EnableInstancing(int32 MeshId, int32 InstanceCount);
	class UMaterialInstanceDynamic* ConvertToMaterialInstanceDynamic(int32 MeshId);
	void ClearRuns(int32 NumRuns);
	void AddRenderRun(int32 InMeshIndex, int32 InInstanceOffset, int32 InNumInstances);
	int32 AddMeshWithInstancing(class USlateVectorArtData* InMeshData, int32 InstanceCount);
	int32 AddMesh(class USlateVectorArtData* InMeshData);
};

}


