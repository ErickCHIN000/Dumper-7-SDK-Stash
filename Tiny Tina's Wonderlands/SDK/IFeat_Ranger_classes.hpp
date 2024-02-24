#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IFeat_Ranger.IFeat_Ranger_C
class IIFeat_Ranger_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIFeat_Ranger_C* GetDefaultObj();

	void DespawnMushroomCompanion(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res);
	void GetMushroomCompanion(class AActor** Ref, bool* Res);
	void SpawnMushroomCompanion(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res);
};

}


