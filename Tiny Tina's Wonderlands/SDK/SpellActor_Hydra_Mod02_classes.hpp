#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x828 - 0x820)
// BlueprintGeneratedClass SpellActor_Hydra_Mod02.SpellActor_Hydra_Mod02_C
class ASpellActor_Hydra_Mod02_C : public ASpellActor_Hydra_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Hydra_Mod02_C* GetDefaultObj();

	void HasValidTarget(bool* Res);
	void UserConstructionScript();
	void HydraSpellActor_FireProjectile(enum class EHydraHeads Head);
	void ExecuteUbergraph_SpellActor_Hydra_Mod02(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, enum class EHydraHeads K2Node_Event_Head, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
};

}


