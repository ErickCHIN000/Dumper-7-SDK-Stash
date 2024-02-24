#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C
class UShieldAug_Recharge_Delay_C : public UAttributeValueResolver
{
public:
	struct FDataTableRowHandle                   Table_ShieldAug;                                   // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UGbxAttributeData*                     Attribute_AugTier;                                 // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UShieldAug_Recharge_Delay_C* GetDefaultObj();

	bool SetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float Value);
	float GetValueForAttribute(class UGbxAttributeData* Attribute, class UObject* Context, float MyReturn, class UObject* MyContext, float CallFunc_GetValueOfAttribute_ReturnValue, const struct FStruct_ShieldAugData& CallFunc_GetDataTableRowFromHandle_OutRow, bool CallFunc_GetDataTableRowFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


