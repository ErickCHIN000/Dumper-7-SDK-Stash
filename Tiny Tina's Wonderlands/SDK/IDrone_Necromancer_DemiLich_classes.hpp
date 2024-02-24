#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IDrone_Necromancer_DemiLich.IDrone_Necromancer_DemiLich_C
class IIDrone_Necromancer_DemiLich_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIDrone_Necromancer_DemiLich_C* GetDefaultObj();

	void GetDemiLichIsDying(bool* Res);
	void GetDemiLichOwner(class AActor** Res);
	void Passive09_LichSacrifice(bool* Res);
	void GetDemiLichCompanionTarget(class AActor** Res);
};

}


