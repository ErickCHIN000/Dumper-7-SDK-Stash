#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3A1 - 0x3A1)
// BlueprintGeneratedClass BP_Modifier_TemperatureClearHot.BP_Modifier_TemperatureClearHot_C
class UBP_Modifier_TemperatureClearHot_C : public UBP_Modifier_TemperatureClear_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Modifier_TemperatureClearHot_C* GetDefaultObj();

	void CanHeal(bool* CanHeal, class AActor* CallFunc_GetOwner_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, class UPlayerCharacterState* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


