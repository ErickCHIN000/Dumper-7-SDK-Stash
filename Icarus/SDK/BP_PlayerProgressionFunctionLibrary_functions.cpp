#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerProgressionFunctionLibrary.BP_PlayerProgressionFunctionLibrary_C
// (None)

class UClass* UBP_PlayerProgressionFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerProgressionFunctionLibrary_C");

	return Clss;
}


// BP_PlayerProgressionFunctionLibrary_C BP_PlayerProgressionFunctionLibrary.Default__BP_PlayerProgressionFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlayerProgressionFunctionLibrary_C* UBP_PlayerProgressionFunctionLibrary_C::GetDefaultObj()
{
	static class UBP_PlayerProgressionFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlayerProgressionFunctionLibrary_C*>(UBP_PlayerProgressionFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerProgressionFunctionLibrary.BP_PlayerProgressionFunctionLibrary_C.CalculatePlayerLevelFromExp
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Experience                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Level                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RemainingXP                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PercentageToNextLevel                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ConsumedXP                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterGrowthRowHandle   CallFunc_MakeLiteralCharacterGrowth_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// struct FCharacterGrowth            CallFunc_GetCharacterGrowthStruct_CharacterGrowth                (None)
// enum class EValid                  CallFunc_GetCharacterGrowthStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerProgressionFunctionLibrary_C::CalculatePlayerLevelFromExp(int32 Experience, class UObject* __WorldContext, int32* Level, int32* RemainingXP, float* PercentageToNextLevel, int32 ConsumedXP, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_Max_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FCharacterGrowthRowHandle& CallFunc_MakeLiteralCharacterGrowth_ReturnValue, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_Conv_IntToFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerProgressionFunctionLibrary_C", "CalculatePlayerLevelFromExp");

	Params::UBP_PlayerProgressionFunctionLibrary_C_CalculatePlayerLevelFromExp_Params Parms{};

	Parms.Experience = Experience;
	Parms.__WorldContext = __WorldContext;
	Parms.ConsumedXP = ConsumedXP;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralCharacterGrowth_ReturnValue = CallFunc_MakeLiteralCharacterGrowth_ReturnValue;
	Parms.CallFunc_GetCharacterGrowthStruct_CharacterGrowth = CallFunc_GetCharacterGrowthStruct_CharacterGrowth;
	Parms.CallFunc_GetCharacterGrowthStruct_Paths = CallFunc_GetCharacterGrowthStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;

	if (RemainingXP != nullptr)
		*RemainingXP = Parms.RemainingXP;

	if (PercentageToNextLevel != nullptr)
		*PercentageToNextLevel = Parms.PercentageToNextLevel;

}

}


