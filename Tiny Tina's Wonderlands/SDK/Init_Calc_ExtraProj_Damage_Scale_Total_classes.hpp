#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// BlueprintGeneratedClass Init_Calc_ExtraProj_Damage_Scale_Total.Init_Calc_ExtraProj_Damage_Scale_Total_C
class UInit_Calc_ExtraProj_Damage_Scale_Total_C : public UAttributeInitializer
{
public:
	class UBPInvPart_SpellMod_C*                 SpellPart;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 BonusTableValue;                                   // 0x38(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UInit_Calc_ExtraProj_Damage_Scale_Total_C* GetDefaultObj();

	void GetScaleValue(float SimpleScaleValue, float* ScaleValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void GetSimpleScaleValue(float ScaleValue, float* SimpleScaleValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, float CallFunc_Divide_FloatFloat_ReturnValue);
	void GetPartCount(class UObject* Context, class UBPInvPart_SpellMod_C* PartToCheck, int32* PartCount, int32 PartsFound, int32 Temp_int_Loop_Counter_Variable, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class UInventoryBalanceStateComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class UInventoryPartData*>& CallFunc_GetPartList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UInventoryPartData* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue1);
	float CalculateAttributeInitialValue(class UObject* Context, int32 PartCount, float ScaleValue, int32 Temp_int_Variable, float CallFunc_GetValueOfAttribute_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, class FName Temp_name_Variable6, class FName Temp_name_Variable7, int32 Temp_int_Variable1, class FName Temp_name_Variable8, class FName Temp_name_Variable9, class FName Temp_name_Variable10, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FName K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue2, int32 CallFunc_Clamp_ReturnValue1, int32 CallFunc_GetPartCount_PartCount, class FName K2Node_Select1_Default, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetSimpleScaleValue_SimpleScaleValue);
};

}


