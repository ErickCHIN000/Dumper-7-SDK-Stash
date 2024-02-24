#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SpellActor_Hydra.BPI_SpellActor_Hydra_C
class IBPI_SpellActor_Hydra_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SpellActor_Hydra_C* GetDefaultObj();

	void HydraSpellActor_Audio_SpawnAmmo();
	void HydraSpellActor_FinishDespawn();
	void HydraSpellActor_BeginAttacking();
	void HydraSpellActor_FireProjectile(enum class EHydraHeads Head);
};

}


