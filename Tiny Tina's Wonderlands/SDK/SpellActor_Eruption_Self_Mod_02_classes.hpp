#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x510 - 0x508)
// BlueprintGeneratedClass SpellActor_Eruption_Self_Mod_02.SpellActor_Eruption_Self_Mod_02_C
class ASpellActor_Eruption_Self_Mod_02_C : public ASpellActor_Eruption_Self_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Eruption_Self_Mod_02_C* GetDefaultObj();

	void DoInitialMod2Explosion(float NextRadius, float NextDamage, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_GetDataTableValue_OutValue1, bool CallFunc_GetDataTableValue_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FHitResult& Temp_struct_Variable);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpellActor_Eruption_Self_Mod_02(int32 EntryPoint);
};

}


