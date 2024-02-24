#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x4F - 0x40)
// BlueprintGeneratedClass bc_Base_UseAction_Template_Healing.bc_Base_UseAction_Template_Healing_C
class Ubc_Base_UseAction_Template_Healing_C : public Ubc_Base_UseAction_C
{
public:
	float                                        ModHealth;                                         // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModRadiation;                                      // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ModMorale;                                         // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MustModHP;                                         // 0x4C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MustModRadiation;                                  // 0x4D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         MustModMorale;                                     // 0x4E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubc_Base_UseAction_Template_Healing_C* GetDefaultObj();

	bool WillModOverTreshhold(float Target, float SegmentMod, float Max, float SegmentSize, bool Debug, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ActionBody(bool* Success, class USoundBase** SoundToPlay, bool MoraleChanged, bool RadiationChanged, bool HPChanged, bool WillModMorale, bool WillModRadiation, bool WillModHp, float CallFunc_Remove_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float CallFunc_GetMorale_CurrentMorale, bool CallFunc_WillModOverTreshhold_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, int32 CallFunc_GetUIBarSegments_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetMaxHP_ReturnValue, float CallFunc_GetCurrentRadiation_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_WillModOverTreshhold_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_5, int32 CallFunc_GetUIBarSegments_ReturnValue_1, float CallFunc_GetCurrentRadiation_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_GetMaxHP_ReturnValue_1, float CallFunc_GetCurrentHP_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_WillModOverTreshhold_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_ChangeRadPercentage_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_6, float CallFunc_GetMorale_CurrentMorale_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_K2_ChangeHP_ReturnValue);
};

}


