#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ApplyEffects.BPI_ApplyEffects_C
class IBPI_ApplyEffects_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ApplyEffects_C* GetDefaultObj();

	void ApplyEffect(double Duration, int32 EffectType);
};

}


