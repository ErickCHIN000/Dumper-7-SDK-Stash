#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IFeat_GunMage.IFeat_GunMage_C
class IIFeat_GunMage_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIFeat_GunMage_C* GetDefaultObj();

	void GunMageSetWildMagicGrade(int32 NewGrade, bool* Res);
	void TogglePolymorphLocks(class AActor* PolymoprhTarget, bool EnableLocks, class UTeam* StartingTeam, bool* Res);
	void GetSpellweavingStacks(int32* Res);
	void RemoveAllSpellweavingStacks(bool Force, bool* Res);
	void RemoveSpellweavingStacks(int32 Stacks, int32* Res);
	void AddSpellweavingStacks(int32 Stacks, int32* Res);
};

}


