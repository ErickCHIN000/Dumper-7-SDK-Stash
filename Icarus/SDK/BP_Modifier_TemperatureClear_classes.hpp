#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x3A1 - 0x398)
// BlueprintGeneratedClass BP_Modifier_TemperatureClear.BP_Modifier_TemperatureClear_C
class UBP_Modifier_TemperatureClear_C : public UBP_Modifier_Base_C
{
public:
	bool                                         Healing;                                           // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B2D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        HealTime;                                          // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HealingEnabled;                                    // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_Modifier_TemperatureClear_C* GetDefaultObj();

	void TemperatureUpdated(int32 NewTemperature);
	void TriggerCheck(bool CallFunc_CanHeal_CanHeal, bool CallFunc_EqualEqual_BoolBool_ReturnValue);
	void CanHeal(bool* CanHeal, class AActor* CallFunc_GetOwner_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, class UPlayerCharacterState* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	bool ModifierApplied(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ModifierApplied_ReturnValue, class UPlayerCharacterState* K2Node_DynamicCast_AsPlayer_Character_State, bool K2Node_DynamicCast_bSuccess_1);
};

}


