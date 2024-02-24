#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0xF8 - 0xD9)
// BlueprintGeneratedClass Rune_Weapon_HallowedSword.Rune_Weapon_HallowedSword_C
class URune_Weapon_HallowedSword_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_17C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AEnemyCharacter_C*                     Enemy;                                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HitActor;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_Weapon_HallowedSword_C* GetDefaultObj();

	float GetX_Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Value(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetX__Percentage(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void FlamingSword_OnEnemyHit(class AActor* HitActor);
	void FlamingSword_OnEnemyHit_Unbind();
	void OnEnemyDeath_GlimpseBoost(class AActor* HitActor);
	void OnEnemyDeath_GlimpseBoost_Unbind();
	void ExecuteUbergraph_Rune_Weapon_HallowedSword(int32 EntryPoint, float CallFunc_GetX__Percentage_ReturnValue, bool K2Node_SwitchName_CmpSuccess, float CallFunc_GetX__Percentage_ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_GetX_Value_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes, class AActor* K2Node_CustomEvent_HitActor_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetX__Percentage_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_1, bool K2Node_SwitchName_CmpSuccess_1, float CallFunc_GetX__Percentage_ReturnValue_4, float CallFunc_Add_FloatFloat_ReturnValue_2, class AActor* K2Node_CustomEvent_HitActor, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_WasKilledThisFrame_bYes_1, float CallFunc_GetX__Percentage_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


