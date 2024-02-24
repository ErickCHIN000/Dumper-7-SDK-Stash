#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass Init_CurseOfMal.Init_CurseOfMal_C
class UInit_CurseOfMal_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 BonusHandle;                                       // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_CurseOfMal_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, class ABPChar_Player_C* K2Node_DynamicCast_AsBPChar_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentHealthPercent_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


