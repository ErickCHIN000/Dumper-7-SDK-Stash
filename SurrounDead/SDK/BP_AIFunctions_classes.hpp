#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_AIFunctions.BP_AIFunctions_C
class UBP_AIFunctions_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_AIFunctions_C* GetDefaultObj();

	void Same_Team_(class UBP_SmartAIComponent_C* AI_1, class UBP_SmartAIComponent_C* AI_2, class UObject* __WorldContext, bool* Match, bool Same_Team_L, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Is_Hitbox_(class FName Bone_Name, class UObject* __WorldContext, enum class E_HitboxTypeAI* HitBox, const TArray<struct FS_BoneHitbox>& Bone_Hitbox_L, int32 Temp_int_Array_Index_Variable, TArray<struct FS_BoneHitbox>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_BoneHitbox& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue);
};

}


