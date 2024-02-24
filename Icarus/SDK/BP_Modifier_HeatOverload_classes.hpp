#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x3D0 - 0x3D0)
// BlueprintGeneratedClass BP_Modifier_HeatOverload.BP_Modifier_HeatOverload_C
class UBP_Modifier_HeatOverload_C : public UBP_ModifierStateBehaviour_AfflictionHeat_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Modifier_HeatOverload_C* GetDefaultObj();

	void CanHeal(bool* CanHeal, class AActor* CallFunc_GetOwner_ReturnValue, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, class UPlayerCharacterState* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetInternalTemperature_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetStat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


