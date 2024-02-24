#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x27 (0x100 - 0xD9)
// BlueprintGeneratedClass Rune_GettingHitOnHarden.Rune_GettingHitOnHarden_C
class URune_GettingHitOnHarden_C : public URuneUpgradeBase_C
{
public:
	uint8                                        Pad_1891[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Actor;                                             // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Amount;                                            // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_189D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     Enemy;                                             // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URune_GettingHitOnHarden_C* GetDefaultObj();

	float GetAmountX(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue);
	float GetAmount_(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void Rune_Enable();
	void Rune_Disable();
	void OnGettingHit(class AActor* SourceActor, float Amount);
	void ExecuteUbergraph_Rune_GettingHitOnHarden(int32 EntryPoint, float CallFunc_GetAmountX_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class AActor* K2Node_CustomEvent_SourceActor, float K2Node_CustomEvent_Amount, float CallFunc_GetAmount__ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_FClamp_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, float CallFunc_ApplyDamage_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_GetAmount__ReturnValue_1, bool CallFunc_RandomBoolWithWeight_ReturnValue);
};

}


