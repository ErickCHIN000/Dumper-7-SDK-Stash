#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x51 - 0x30)
// BlueprintGeneratedClass Init_PlayerPassiveParent.Init_PlayerPassiveParent_C
class UInit_PlayerPassiveParent_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 SkillScalar;                                       // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UClass*                                PassiveSkill;                                      // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseNegative;                                       // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_PlayerPassiveParent_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, bool Temp_bool_Variable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, float Temp_float_Variable1, float K2Node_Select_Default, class UGbxAbility* CallFunc_FindAbility_ReturnValue, TScriptInterface<class IIPassive_Parent_C> K2Node_DynamicCast_AsIPassive_Parent, bool K2Node_DynamicCast_bSuccess1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, int32 CallFunc_GetSkillGrade_Res, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


