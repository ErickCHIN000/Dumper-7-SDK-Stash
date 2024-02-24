#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x438 - 0x438)
// BlueprintGeneratedClass LightProj_Spell_Fireball_Mod5_HHG.LightProj_Spell_Fireball_Mod5_HHG_C
class ULightProj_Spell_Fireball_Mod5_HHG_C : public ULightProj_Spell_Fireball_Mod5_Fire_C
{
public:

	static class UClass* StaticClass();
	static class ULightProj_Spell_Fireball_Mod5_HHG_C* GetDefaultObj();

	void SpawnProjs(class ULightProjectile* Projectile, class AActor* Temp_object_Variable, const struct FVector& CallFunc_GetAttachedImpactNormal_ReturnValue, class AActor* CallFunc_GetAttachedActor_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool Temp_bool_Variable, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FVector& Temp_struct_Variable, int32 Temp_int_Variable, const struct FVector& K2Node_Select_Default, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool Temp_bool_Variable1, class AActor* CallFunc_GetAttachedActor_ReturnValue1, class AActor* K2Node_Select1_Default, const struct FSpellLightProjectileInitializationData& K2Node_MakeStruct_SpellLightProjectileInitializationData);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor);
};

}


