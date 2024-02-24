#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x8C - 0x88)
// BlueprintGeneratedClass Condition_Shield_Rune_Body.Condition_Shield_Rune_Body_C
class UCondition_Shield_Rune_Body_C : public UGbxCondition_Blueprint
{
public:
	float                                        BodyRuneValue;                                     // 0x88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCondition_Shield_Rune_Body_C* GetDefaultObj();

	bool EvaluateCondition(class UObject* Context, class UObject* OptionalContext, bool FoundBodyRune, TArray<class AOakCharacter_Player*>& CallFunc_GetAllPlayerCharacters_Characters, bool Temp_bool_True_if_break_was_hit_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class AOakCharacter_Player* CallFunc_Array_Get_Item, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
};

}


