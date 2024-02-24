#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x5C0 - 0x5B0)
// Class CustomMeshComponent.CustomMeshComponent
class UCustomMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_1D01[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCustomMeshComponent* GetDefaultObj();

	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle>& Triangles);
};

}


