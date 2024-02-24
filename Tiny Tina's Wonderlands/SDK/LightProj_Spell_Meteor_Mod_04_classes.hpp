#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x3D0 - 0x380)
// BlueprintGeneratedClass LightProj_Spell_Meteor_Mod_04.LightProj_Spell_Meteor_Mod_04_C
class ULightProj_Spell_Meteor_Mod_04_C : public ULightProj_Spell_Meteor_C
{
public:
	TMap<enum class EOakElementalType, class UWwiseEvent*> AudioExp;                                          // 0x380(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULightProj_Spell_Meteor_Mod_04_C* GetDefaultObj();

	void OnExplode(class ULightProjectile* Projectile, const TArray<struct FTransform>& HeatDeathTransforms, const struct FSpawnableSpellBasicData& SpellData, float Temp_float_Variable, class APawn* CallFunc_GetInstigator_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_MakeTransform_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnCone_ReturnValue, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 CallFunc_Array_LastIndex_ReturnValue, float Temp_float_Variable1, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsGbx_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, int32 Temp_int_Loop_Counter_Variable, const struct FLightProjectileInitializationData& K2Node_MakeStruct_LightProjectileInitializationData, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}


