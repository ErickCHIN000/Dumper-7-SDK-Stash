#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_Destructible.BPI_Destructible_C
class IBPI_Destructible_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_Destructible_C* GetDefaultObj();

	void BPI_SetFracturable(bool Fracturable);
	void BPI_SkipToDestroyedState();
	void BPI_ScriptedTotalDestruction(float DamageRadius, float ImpulseStrength);
};

}


