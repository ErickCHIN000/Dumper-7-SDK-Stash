#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass Init_Shaman_03_WardRestored.Init_Shaman_03_WardRestored_C
class UInit_Shaman_03_WardRestored_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 WardRegenerationHandle;                            // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableValueHandle                 WardDurationHandle;                                // 0x48(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Shaman_03_WardRestored_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_GetSkillGrade_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


