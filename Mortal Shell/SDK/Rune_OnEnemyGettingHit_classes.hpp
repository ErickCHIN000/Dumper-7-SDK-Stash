#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x100 - 0xD9)
// BlueprintGeneratedClass Rune_OnEnemyGettingHit.Rune_OnEnemyGettingHit_C
class URune_OnEnemyGettingHit_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_2512[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class Enum_AttackType                   AttackType;                                        // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2519[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ComboCount;                                        // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ComboMax;                                          // 0xFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_OnEnemyGettingHit_C* GetDefaultObj();

	void LightComboFinisherStagger(class AEnemyCharacter_C* Local_Enemy, const struct FVector& CallFunc_DirectionTo2D_Dir, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, float CallFunc_GetChance_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HeavyComboFinisherRiposte(class AEnemyCharacter_C* Local_Enemy, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetChance_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void HeavyComboHandleResolve(bool CallFunc_Has_Enough_Resolve_To_Empowered_Riposte__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	float GetChance(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void OnEnemyGettingHit(enum class Enum_AttackType AttackType, class AActor* HitEnemy, int32 ComboCount, int32 ComboMax);
	void ExecuteUbergraph_Rune_OnEnemyGettingHit(int32 EntryPoint, enum class Enum_AttackType K2Node_CustomEvent_AttackType, class AActor* K2Node_CustomEvent_HitEnemy, int32 K2Node_CustomEvent_ComboCount, int32 K2Node_CustomEvent_ComboMax, bool K2Node_SwitchName_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


