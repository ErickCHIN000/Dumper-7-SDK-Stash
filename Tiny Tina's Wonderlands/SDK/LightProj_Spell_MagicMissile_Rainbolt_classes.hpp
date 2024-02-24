#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3A8 - 0x380)
// BlueprintGeneratedClass LightProj_Spell_MagicMissile_Rainbolt.LightProj_Spell_MagicMissile_Rainbolt_C
class ULightProj_Spell_MagicMissile_Rainbolt_C : public ULightProj_Spell_MagicMissile_Base_C
{
public:
	TArray<class UClass*>                        DamageTypes;                                       // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                        BonusDmgScalar;                                    // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D99[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        NewVar_0;                                          // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ULightProj_Spell_MagicMissile_Rainbolt_C* GetDefaultObj();

	void OnImpact(class ULightProjectile* Projectile, struct FHitResult& Hit, TMap<class UStatusEffectData*, class UClass*> DamageTypeLookup, const TArray<class UStatusEffectData*>& StatusEffects, bool ApplyEffect, int32 Temp_int_Array_Index_Variable, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AActor* CallFunc_GetHitActor_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FSpawnableSpellBasicData& CallFunc_GetSpellData_Res, int32 CallFunc_Add_IntInt_ReturnValue, TMap<class UStatusEffectData*, class UClass*> K2Node_MakeVariable_MakeVariableOutput, TArray<class UStatusEffectData*>& K2Node_MakeArray_Array, class UStatusEffectData* CallFunc_Array_Get_Item, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, class UClass* K2Node_ClassDynamicCast_AsOak_Damage_Type, bool K2Node_ClassDynamicCast_bSuccess, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


