#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass iActionSkill_KotC_AS4.iActionSkill_KotC_AS4_C
class IIActionSkill_KotC_AS4_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIActionSkill_KotC_AS4_C* GetDefaultObj();

	void KnightOfTheClawAllowHammerRecall();
	void KnightOfTheClawStartRecall();
	void KnightOfTheClawGetHammerRef(class AActor** Res);
	void KnightOfTheClawRegisterHammer(class AActor* Hammer, bool* Res);
};

}


