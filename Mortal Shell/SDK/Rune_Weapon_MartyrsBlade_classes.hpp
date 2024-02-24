#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x100 - 0xD9)
// BlueprintGeneratedClass Rune_Weapon_MartyrsBlade.Rune_Weapon_MartyrsBlade_C
class URune_Weapon_MartyrsBlade_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_69A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AEnemyCharacter_C*                     Enemy;                                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HitActor;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifesteal_Value;                                   // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_Weapon_MartyrsBlade_C* GetDefaultObj();

	struct FTransform GetFrostCloudSpawnTransform(const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	float GetX__Percentage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void GlacialBlade_OnEnemyHit(class AActor* HitActor);
	void GlacialBlade_OnEnemyHit_Unbind();
	void Rune_Disable();
	void Rune_Enable();
	void FrozenLeech_Bind(float Damage, class AActor* Actor, class FName Socket);
	void FrozenLeech_Unbind();
	void GlacialBlade_OnAttackEnd_Bind();
	void GlacialBlade_OnAttackEnd_Set();
	void GlacialBlade_OnAttackEnd_Unbind();
	void OnFrozenOnDamage();
	void RestorativeBlizzard_Set(class AActor* HitActor);
	void RestorativeBlizzard_Unbind();
	void ExecuteUbergraph_Rune_Weapon_MartyrsBlade(int32 EntryPoint, bool K2Node_SwitchName_CmpSuccess, class AActor* K2Node_CustomEvent_HitActor_1, float CallFunc_GetX__Percentage_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, float CallFunc_GetX_Value_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetX__Percentage_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetX__Percentage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetX__Percentage_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Add_FloatFloat_ReturnValue_2, float K2Node_CustomEvent_Damage, class AActor* K2Node_CustomEvent_Actor, class FName K2Node_CustomEvent_Socket, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetX__Percentage_ReturnValue_5, float CallFunc_GetX_Value_ReturnValue_1, bool CallFunc_CanHealPlayer_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_HealEffectChaser_C* CallFunc_FinishSpawningActor_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, class AActor* K2Node_CustomEvent_HitActor, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetX__Percentage_ReturnValue_6, bool CallFunc_RandomBoolWithWeight_ReturnValue_1, bool CallFunc_WasKilledThisFrame_bYes_1, const struct FTransform& CallFunc_GetFrostCloudSpawnTransform_ReturnValue, float CallFunc_GetX_Value_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_FrostCloud_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetX__Percentage_ReturnValue_7);
};

}


