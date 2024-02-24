#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_PlaceableStructure.BPI_PlaceableStructure_C
class IBPI_PlaceableStructure_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_PlaceableStructure_C* GetDefaultObj();

	void GetSupportMesh(class UStaticMeshComponent** SupportMesh);
};

}


