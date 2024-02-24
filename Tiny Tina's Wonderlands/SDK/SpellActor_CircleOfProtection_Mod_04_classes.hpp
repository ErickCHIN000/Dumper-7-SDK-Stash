#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x7A8 - 0x79C)
// BlueprintGeneratedClass SpellActor_CircleOfProtection_Mod_04.SpellActor_CircleOfProtection_Mod_04_C
class ASpellActor_CircleOfProtection_Mod_04_C : public ASpellActor_CircleOfProtection_Base_C
{
public:
	uint8                                        Pad_44E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_CircleOfProtection_Mod_04_C* GetDefaultObj();

	void PulseSelfCastDamage(float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, const struct FHitResult& Temp_struct_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FCauseDamageStatusEffectOverrides& K2Node_MakeStruct_CauseDamageStatusEffectOverrides);
	void UserConstructionScript();
	void SetupMod4();
	void SpawnFX();
	void InitialMaterialSetup();
	void SpawnDecal();
	void DoCircleDamage();
	void ExecuteUbergraph_SpellActor_CircleOfProtection_Mod_04(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable1, class UParticleSystem* Temp_object_Variable2, class UParticleSystem* Temp_object_Variable3, class UParticleSystem* Temp_object_Variable4, enum class EOakElementalType Temp_byte_Variable, class UParticleSystem* Temp_object_Variable5, class UParticleSystem* Temp_object_Variable6, class UParticleSystem* Temp_object_Variable7, class UParticleSystem* Temp_object_Variable8, class UParticleSystem* Temp_object_Variable9, class UParticleSystem* Temp_object_Variable10, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystem* K2Node_Select_Default, class UParticleSystem* Temp_object_Variable11, enum class EOakElementalType Temp_byte_Variable1, class UParticleSystem* K2Node_Select1_Default, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
};

}


