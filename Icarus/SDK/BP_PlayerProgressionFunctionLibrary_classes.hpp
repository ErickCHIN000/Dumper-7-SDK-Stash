#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PlayerProgressionFunctionLibrary.BP_PlayerProgressionFunctionLibrary_C
class UBP_PlayerProgressionFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_PlayerProgressionFunctionLibrary_C* GetDefaultObj();

	void CalculatePlayerLevelFromExp(int32 Experience, class UObject* __WorldContext, int32* Level, int32* RemainingXP, float* PercentageToNextLevel, int32 ConsumedXP, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterGrowthRowHandle& CallFunc_MakeLiteralCharacterGrowth_ReturnValue, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue);
};

}


