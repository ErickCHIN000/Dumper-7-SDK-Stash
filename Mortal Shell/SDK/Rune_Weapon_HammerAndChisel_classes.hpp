#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x100 - 0xD9)
// BlueprintGeneratedClass Rune_Weapon_HammerAndChisel.Rune_Weapon_HammerAndChisel_C
class URune_Weapon_HammerAndChisel_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_519[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AEnemyCharacter_C*                     Enemy;                                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifesteal_Value;                                   // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_520[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_Weapon_HammerAndChisel_C* GetDefaultObj();

	struct FTransform GetChiselMiasmSpawnTransform(const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	float GetX__Percentage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	void InfinityHammer_OnEnemyHit_Unbind();
	void InfinityHammer_OnEnemyHit(class AActor* HitActor);
	void OnSuper_1_Start();
	void OnSuper_1_Stop();
	void OnSuper_2_Start();
	void OnSuper_2_Stop();
	void Rune_Disable();
	void Rune_Enable();
	void ChiselMiasm_OnEnemyHit(class AActor* HitActor);
	void ChiselMiasm_Unbind();
	void OnHittingEnemyWithDamage(float Damage, class AActor* Actor, class FName Socket);
	void OnHittingEnemyWithDamage_Unbind();
	void ExecuteUbergraph_Rune_Weapon_HammerAndChisel(int32 EntryPoint, float CallFunc_GetX__Percentage_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, float CallFunc_GetX_Value_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, class AActor* K2Node_CustomEvent_HitActor_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ABP_Hammer_SpecialEffect_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetX__Percentage_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetX__Percentage_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetX__Percentage_ReturnValue_5, float CallFunc_Add_FloatFloat_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_EqualEqual_NameName_ReturnValue, class AActor* K2Node_CustomEvent_HitActor, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_WasKilledThisFrame_bYes_1, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTransform& CallFunc_GetChiselMiasmSpawnTransform_ReturnValue, float CallFunc_GetX_Value_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, float CallFunc_GetX__Percentage_ReturnValue_6, class ABP_ChiselMiasm_C* CallFunc_FinishSpawningActor_ReturnValue_1, float CallFunc_GetX_Value_ReturnValue_2, float K2Node_CustomEvent_Damage, class AActor* K2Node_CustomEvent_Actor, class FName K2Node_CustomEvent_Socket, float CallFunc_GetX__Percentage_ReturnValue_7, bool CallFunc_EqualEqual_NameName_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetX_Value_ReturnValue_3, float CallFunc_FClamp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CanHealPlayer_ReturnValue);
};

}


