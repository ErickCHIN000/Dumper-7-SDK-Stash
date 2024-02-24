#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_UI_GoalTracking.BPI_UI_GoalTracking_C
class IBPI_UI_GoalTracking_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_UI_GoalTracking_C* GetDefaultObj();

	void TrackBuildingEntity(const struct FStructureAssetReference& StructureAssetRef, bool IsAdding);
	void TrackCraftingEntity(const struct FCraftingRecipeReference& CraftingRecipeRef, bool IsAdding);
	void IsEntityPinned(class FName ID, bool* IsPinned);
};

}


