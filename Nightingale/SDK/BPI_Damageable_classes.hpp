#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Damageable.BPI_Damageable_C
class IBPI_Damageable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Damageable_C* GetDefaultObj();

	void GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget);
	void GetDamageEffect(class UClass** DamageEffect);
};

}


