#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x47 (0x120 - 0xD9)
// BlueprintGeneratedClass Rune_Weapon_Axatana.Rune_Weapon_Axatana_C
class URune_Weapon_Axatana_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1BE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        IconIndex;                                         // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BEA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            StaminaCostIgnoreIcon;                             // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          BuffTimer;                                         // 0xF8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     HitEnemy;                                          // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttackType                   AttackType;                                        // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1BFA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABaseCharacter_C*                      HitBaseChar;                                       // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              StaminaIgnoreVFX;                                  // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_Weapon_Axatana_C* GetDefaultObj();

	struct FVector GetAxatanaSpawnLoc(const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	bool ShouldRiposte(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6);
	void GetCurrentHitActor(class AActor** HitActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd);
	void HandleResolveForRiposte(bool CallFunc_Has_Enough_Resolve_To_Empowered_Riposte__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Rune_Disable();
	void OnTransformingAxatana(class FName TransformID);
	void OnTransformingAxatana_Unbind();
	void Rune_Enable();
	void SubToDamageApplied();
	void UnsubFromDamageApplied();
	void OnDamageAppliedToHitActor();
	void StaminaBuffOver();
	void OnEnemyGettingHit(enum class Enum_AttackType AttackType, class AActor* HitEnemy, int32 ComboCount, int32 ComboMax);
	void SubToOnEnemyGettingHitWithAttackType();
	void UnsubFromOnEnemyGettingHitWithAttackType();
	void ExecuteUbergraph_Rune_Weapon_Axatana(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystem* Temp_object_Variable_1, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetChanceForTier_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_TransformID, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetChanceForTier_ReturnValue_2, float CallFunc_RandomFloat_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchName_CmpSuccess_2, float CallFunc_GetChanceForTier_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UBuffLifeStealForNextXHit_C* CallFunc_SpawnObject_ReturnValue, bool K2Node_SwitchName_CmpSuccess_3, enum class Enum_AttackType K2Node_CustomEvent_AttackType, class AActor* K2Node_CustomEvent_HitEnemy, int32 K2Node_CustomEvent_ComboCount, int32 K2Node_CustomEvent_ComboMax, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchName_CmpSuccess_4, bool CallFunc_WasKilledThisFrame_bYes, float CallFunc_GetChanceForTier_ReturnValue_4, float CallFunc_RandomFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_GetChanceForTier_ReturnValue_5, float CallFunc_RandomFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBuffObjectBleedDPS_C* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue_6, class AActor* CallFunc_GetCurrentHitActor_HitActor, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetCurrentHitActor_HitActor_1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldRiposte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_MakeLiteralFloat_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, int32 CallFunc_AddStatusIcon_IconID, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, const struct FVector& CallFunc_GetAxatanaSpawnLoc_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Axatana_TransformDamage_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1);
};

}


