#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_CanGetEffects.I_CanGetEffects_C
class II_CanGetEffects_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_CanGetEffects_C* GetDefaultObj();

	bool CanEffectBeApplied(enum class E_EffectType Type, class AActor* Applier);
};

}


