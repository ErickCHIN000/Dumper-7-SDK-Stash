#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x104 - 0xD9)
// BlueprintGeneratedClass Rune_Weapon_FireMace.Rune_Weapon_FireMace_C
class URune_Weapon_FireMace_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1516[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                HitActor;                                          // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     Enemy;                                             // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Explosion_Radius;                                  // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Explosion_PoiseDamage;                             // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Explosion_Damage;                                  // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_Weapon_FireMace_C* GetDefaultObj();

	void Handle_Explosion_Dmg(class AActor* RefActor, float Radius, float BaseDamage, float PoiseDamage, bool* Success, class AEnemyCharacter_C* EnemyChar, const TArray<class AEnemyCharacter_C*>& TracedEnemies, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 Temp_int_Array_Index_Variable_1, TArray<class AActor*>& K2Node_MakeArray_Array, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_DirectionTo2D_Dir, float CallFunc_ApplyDamage_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1);
	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Percentage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void OnSuper_2_Start();
	void OnSuper_2_Stop();
	void Rune_Disable();
	void RekindledMace_OnEnemyHit(class AActor* HitActor);
	void RekindledMace_OnEnemyHit_Unbind();
	void RekindledMace_OnAttackEnd_Bind();
	void RekindledMace_OnAttackEnd_Set();
	void RekindledMace_OnAttackEnd_Unbind();
	void RekindledMace_Add();
	void SubToDamageApplied();
	void UnsubFromDamageApplied();
	void ExplodeFX(const struct FTransform& SpawnTransform);
	void Rune_Enable();
	void OnEnemyGettingHit(enum class Enum_AttackType AttackType, class AActor* HitEnemy, int32 ComboCount, int32 ComboMax);
	void SubToOnEnemyGettingHitWithAttackType();
	void UnsubFromOnEnemyGettingHitWithAttackType();
	void OnDmgApplied(enum class Enum_AttackType AttackType, class AActor* HitEnemy, int32 ComboCount, int32 ComboMax);
	void ExecuteUbergraph_Rune_Weapon_FireMace(int32 EntryPoint, float CallFunc_GetX__Percentage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetX__Percentage_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_GetX__Percentage_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetX__Percentage_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_4, bool K2Node_SwitchName_CmpSuccess, class AActor* K2Node_CustomEvent_HitActor, float CallFunc_GetX__Percentage_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, float CallFunc_GetX_Value_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchName_CmpSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchName_CmpSuccess_2, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_RandomFloat_ReturnValue, const struct FTransform& K2Node_CustomEvent_SpawnTransform, bool CallFunc_Less_FloatFloat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, enum class Enum_AttackType K2Node_CustomEvent_AttackType_1, class AActor* K2Node_CustomEvent_HitEnemy_1, int32 K2Node_CustomEvent_ComboCount_1, int32 K2Node_CustomEvent_ComboMax_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchName_CmpSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_GetX_Value_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue, enum class Enum_AttackType K2Node_CustomEvent_AttackType, class AActor* K2Node_CustomEvent_HitEnemy, int32 K2Node_CustomEvent_ComboCount, int32 K2Node_CustomEvent_ComboMax, float CallFunc_Divide_FloatFloat_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Handle_Explosion_Dmg_Success, bool CallFunc_Handle_Explosion_Dmg_Success_1, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

}


