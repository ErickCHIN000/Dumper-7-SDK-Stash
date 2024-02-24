#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IFeat_Necromancer.IFeat_Necromancer_C
class IIFeat_Necromancer_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIFeat_Necromancer_C* GetDefaultObj();

	void SpawnDemiLich(class AActor* SpawnedActor, const struct FPetInfo& PetData, bool* Res);
	void GetDemiLichDrone(class ADrone_PlayerCompanionParent_C** Ref);
	void DespawnDemiLich(class AActor* Pet, enum class EPetReleaseReason Reason, bool* Res);
	void GetDemiLich(class AActor** Ref);
};

}


