#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x140 - 0x110)
// BlueprintGeneratedClass Ability_TED_Gluttony.Ability_TED_Gluttony_C
class UAbility_TED_Gluttony_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AOakCharacter_Player*                  PlayerOwner;                                       // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 EnableDamageScalar;                                // 0x120(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class AOakWeapon*                            WeaponOwner;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_TED_Gluttony_C* GetDefaultObj();

	enum class EGbxAbilityState CalculateAbilityState(bool Temp_bool_Variable, enum class EGbxAbilityState Temp_byte_Variable, enum class EGbxAbilityState Temp_byte_Variable1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetCurrentHealthPercent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EGbxAbilityState CallFunc_CalculateAbilityState_ReturnValue, enum class EGbxAbilityState K2Node_Select_Default);
	void OnActivated();
	void OnResumed();
	void OnPaused();
	void ExecuteUbergraph_Ability_TED_Gluttony(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AOakWeapon* K2Node_DynamicCast_AsOak_Weapon, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess1);
};

}


