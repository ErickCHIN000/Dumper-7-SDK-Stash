#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x88 - 0x88)
// BlueprintGeneratedClass Condition_IsMeleeDamage.Condition_IsMeleeDamage_C
class UCondition_IsMeleeDamage_C : public UGbxCondition_Blueprint
{
public:

	static class UClass* StaticClass();
	static class UCondition_IsMeleeDamage_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, bool IsMelee, const TArray<class UClass*>& MeleeDamageSources, class UDamageSource* K2Node_DynamicCast_AsDamage_Source, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


