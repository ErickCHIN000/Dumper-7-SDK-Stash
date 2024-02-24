#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x82C - 0x820)
// BlueprintGeneratedClass SpellActor_Hydra_SpawnedFromSpell.SpellActor_Hydra_SpawnedFromSpell_C
class ASpellActor_Hydra_SpawnedFromSpell_C : public ASpellActor_Hydra_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	float                                        SpawnedSpellMultiplier;                            // 0x828(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpellActor_Hydra_SpawnedFromSpell_C* GetDefaultObj();

	void SetHydraFromSpellDuration(float DurationToUse, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void UserConstructionScript();
	void CacheHydraDamage();
	void SetHydraLifetime();
	void ExecuteUbergraph_SpellActor_Hydra_SpawnedFromSpell(int32 EntryPoint, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


