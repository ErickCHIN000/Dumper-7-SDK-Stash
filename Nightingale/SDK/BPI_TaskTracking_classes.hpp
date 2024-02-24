#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_TaskTracking.BPI_TaskTracking_C
class IBPI_TaskTracking_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_TaskTracking_C* GetDefaultObj();

	void CallOnInteractedWithPlayer(class APawn* InteractingPawn);
	void CallFishCaught(struct FFish& CaughtFish);
	void CallOnGlyphRevealed();
	void CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast);
	void CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult);
	void CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag);
	void CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID);
	void CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount);
	void CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle);
	void CallGiveTag(const struct FGameplayTag& Gameplay_Tag);
	void CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
};

}


