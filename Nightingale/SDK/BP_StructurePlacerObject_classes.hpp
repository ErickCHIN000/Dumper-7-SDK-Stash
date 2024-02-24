#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_StructurePlacerObject.BP_StructurePlacerObject_C
class UBP_StructurePlacerObject_C : public UStructurePlacerObject
{
public:

	static class UClass* StaticClass();
	static class UBP_StructurePlacerObject_C* GetDefaultObj();

	class UMaterialInstance* GetPlacementMaterial(class UObject* Structure, struct FStructurePlacementFeedback& PlacementData, class UMaterialInstance* CallFunc_GetPlacementMaterial_ReturnValue);
};

}


