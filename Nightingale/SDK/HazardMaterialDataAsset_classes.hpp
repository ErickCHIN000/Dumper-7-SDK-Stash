#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x40 - 0x30)
// BlueprintGeneratedClass HazardMaterialDataAsset.HazardMaterialDataAsset_C
class UHazardMaterialDataAsset_C : public UPrimaryDataAsset
{
public:
	TArray<struct FS_HazardMaterial>             HazardStruct;                                      // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UHazardMaterialDataAsset_C* GetDefaultObj();

};

}


