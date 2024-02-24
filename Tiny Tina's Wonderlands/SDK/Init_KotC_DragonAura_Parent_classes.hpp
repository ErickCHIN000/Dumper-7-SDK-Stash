#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x60 - 0x30)
// BlueprintGeneratedClass Init_KotC_DragonAura_Parent.Init_KotC_DragonAura_Parent_C
class UInit_KotC_DragonAura_Parent_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                 PassiveScalar;                                     // 0x30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UGbxAttributeData*                     PassiveAttribute;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ContextIsFeat;                                     // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2815[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAttributeData*                     AuraScalar;                                        // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UInit_KotC_DragonAura_Parent_C* GetDefaultObj();

	float CalculateAttributeInitialValue(class UObject* Context, bool Temp_bool_Variable, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class UOakAbility* K2Node_DynamicCast_AsOak_Ability, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* K2Node_Select_Default, int32 CallFunc_GetValueOfAttributeAsInteger_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

}


