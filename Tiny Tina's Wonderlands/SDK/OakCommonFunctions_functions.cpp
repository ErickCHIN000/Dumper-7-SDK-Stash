#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OakCommonFunctions.OakCommonFunctions_C
// (None)

class UClass* UOakCommonFunctions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakCommonFunctions_C");

	return Clss;
}


// OakCommonFunctions_C OakCommonFunctions.Default__OakCommonFunctions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOakCommonFunctions_C* UOakCommonFunctions_C::GetDefaultObj()
{
	static class UOakCommonFunctions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOakCommonFunctions_C*>(UOakCommonFunctions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumArrayToInt
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<uint8>                      Enum                                                             (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Bitmask                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MyBitmaskAdds                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      MyEnumUnique                                                     (Edit, BlueprintVisible, ZeroConstructor)
// int32                              MyBitmaskInt                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, uint8>                 MyBitmaskLookup                                                  (Edit, BlueprintVisible, ZeroConstructor)
// TArray<int32>                      MyBytes                                                          (Edit, BlueprintVisible, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, uint8>                 K2Node_MakeVariable_MakeVariableOutput                           (ZeroConstructor)
// uint8                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Array_Get_Item1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Bitmask_EnumToInt_Bitmask                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::Bitmask_EnumArrayToInt(TArray<uint8>& Enum, class UObject* __WorldContext, int32* Bitmask, int32 MyBitmaskAdds, const TArray<uint8>& MyEnumUnique, int32 MyBitmaskInt, TMap<int32, uint8> MyBitmaskLookup, const TArray<int32>& MyBytes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable1, TMap<int32, uint8> K2Node_MakeVariable_MakeVariableOutput, uint8 CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable1, uint8 CallFunc_Array_Get_Item1, int32 CallFunc_Array_Length_ReturnValue1, int32 CallFunc_Bitmask_EnumToInt_Bitmask, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Bitmask_EnumArrayToInt");

	Params::UOakCommonFunctions_C_Bitmask_EnumArrayToInt_Params Parms{};

	Parms.Enum = Enum;
	Parms.__WorldContext = __WorldContext;
	Parms.MyBitmaskAdds = MyBitmaskAdds;
	Parms.MyEnumUnique = MyEnumUnique;
	Parms.MyBitmaskInt = MyBitmaskInt;
	Parms.MyBitmaskLookup = MyBitmaskLookup;
	Parms.MyBytes = MyBytes;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable1 = Temp_int_Array_Index_Variable1;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable1 = Temp_int_Loop_Counter_Variable1;
	Parms.CallFunc_Array_Get_Item1 = CallFunc_Array_Get_Item1;
	Parms.CallFunc_Array_Length_ReturnValue1 = CallFunc_Array_Length_ReturnValue1;
	Parms.CallFunc_Bitmask_EnumToInt_Bitmask = CallFunc_Bitmask_EnumToInt_Bitmask;
	Parms.CallFunc_Less_IntInt_ReturnValue1 = CallFunc_Less_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue1 = CallFunc_Add_IntInt_ReturnValue1;
	Parms.CallFunc_Add_IntInt_ReturnValue2 = CallFunc_Add_IntInt_ReturnValue2;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bitmask != nullptr)
		*Bitmask = Parms.Bitmask;

}


// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_EnumToInt
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// uint8                              Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Bitmask                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MyBitmaskInt                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, uint8>                 MyBitmaskLookup                                                  (Edit, BlueprintVisible, ZeroConstructor)
// TArray<int32>                      MyBytes                                                          (Edit, BlueprintVisible, ZeroConstructor)
// TMap<int32, uint8>                 K2Node_MakeVariable_MakeVariableOutput                           (ZeroConstructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::Bitmask_EnumToInt(uint8 Enum, class UObject* __WorldContext, int32* Bitmask, int32 MyBitmaskInt, TMap<int32, uint8> MyBitmaskLookup, const TArray<int32>& MyBytes, TMap<int32, uint8> K2Node_MakeVariable_MakeVariableOutput, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Bitmask_EnumToInt");

	Params::UOakCommonFunctions_C_Bitmask_EnumToInt_Params Parms{};

	Parms.Enum = Enum;
	Parms.__WorldContext = __WorldContext;
	Parms.MyBitmaskInt = MyBitmaskInt;
	Parms.MyBitmaskLookup = MyBitmaskLookup;
	Parms.MyBytes = MyBytes;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Bitmask != nullptr)
		*Bitmask = Parms.Bitmask;

}


// Function OakCommonFunctions.OakCommonFunctions_C.Bitmask_RandomEnum
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              BitmaskInt                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              RandomEnum                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, uint8>                 MyBitmaskLookup                                                  (Edit, BlueprintVisible, ZeroConstructor)
// TArray<int32>                      MyBytes                                                          (Edit, BlueprintVisible, ZeroConstructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, uint8>                 K2Node_MakeVariable_MakeVariableOutput                           (ZeroConstructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_And_IntInt_ReturnValue4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue6                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue7                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue8                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue9                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue10                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue11                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue12                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue11                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue12                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue13                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue14                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue13                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue14                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue15                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_And_IntInt_ReturnValue15                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::Bitmask_RandomEnum(int32 BitmaskInt, class UObject* __WorldContext, uint8* RandomEnum, TMap<int32, uint8> MyBitmaskLookup, const TArray<int32>& MyBytes, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue1, int32 CallFunc_And_IntInt_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue1, TMap<int32, uint8> K2Node_MakeVariable_MakeVariableOutput, int32 CallFunc_MakeLiteralInt_ReturnValue2, int32 CallFunc_And_IntInt_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue3, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue3, int32 CallFunc_Array_Get_Item, int32 CallFunc_MakeLiteralInt_ReturnValue4, uint8 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_And_IntInt_ReturnValue4, int32 CallFunc_MakeLiteralInt_ReturnValue5, int32 CallFunc_MakeLiteralInt_ReturnValue6, int32 CallFunc_And_IntInt_ReturnValue5, int32 CallFunc_And_IntInt_ReturnValue6, int32 CallFunc_MakeLiteralInt_ReturnValue7, int32 CallFunc_MakeLiteralInt_ReturnValue8, int32 CallFunc_And_IntInt_ReturnValue7, int32 CallFunc_And_IntInt_ReturnValue8, int32 CallFunc_MakeLiteralInt_ReturnValue9, int32 CallFunc_MakeLiteralInt_ReturnValue10, int32 CallFunc_And_IntInt_ReturnValue9, int32 CallFunc_And_IntInt_ReturnValue10, int32 CallFunc_MakeLiteralInt_ReturnValue11, int32 CallFunc_MakeLiteralInt_ReturnValue12, int32 CallFunc_And_IntInt_ReturnValue11, int32 CallFunc_And_IntInt_ReturnValue12, int32 CallFunc_MakeLiteralInt_ReturnValue13, int32 CallFunc_MakeLiteralInt_ReturnValue14, int32 CallFunc_And_IntInt_ReturnValue13, int32 CallFunc_And_IntInt_ReturnValue14, int32 CallFunc_MakeLiteralInt_ReturnValue15, int32 Temp_int_Variable, int32 CallFunc_And_IntInt_ReturnValue15, TArray<int32>& K2Node_MakeArray_Array, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Bitmask_RandomEnum");

	Params::UOakCommonFunctions_C_Bitmask_RandomEnum_Params Parms{};

	Parms.BitmaskInt = BitmaskInt;
	Parms.__WorldContext = __WorldContext;
	Parms.MyBitmaskLookup = MyBitmaskLookup;
	Parms.MyBytes = MyBytes;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue1 = CallFunc_MakeLiteralInt_ReturnValue1;
	Parms.CallFunc_And_IntInt_ReturnValue = CallFunc_And_IntInt_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue1 = CallFunc_And_IntInt_ReturnValue1;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_MakeLiteralInt_ReturnValue2 = CallFunc_MakeLiteralInt_ReturnValue2;
	Parms.CallFunc_And_IntInt_ReturnValue2 = CallFunc_And_IntInt_ReturnValue2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue3 = CallFunc_MakeLiteralInt_ReturnValue3;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue3 = CallFunc_And_IntInt_ReturnValue3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_MakeLiteralInt_ReturnValue4 = CallFunc_MakeLiteralInt_ReturnValue4;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_And_IntInt_ReturnValue4 = CallFunc_And_IntInt_ReturnValue4;
	Parms.CallFunc_MakeLiteralInt_ReturnValue5 = CallFunc_MakeLiteralInt_ReturnValue5;
	Parms.CallFunc_MakeLiteralInt_ReturnValue6 = CallFunc_MakeLiteralInt_ReturnValue6;
	Parms.CallFunc_And_IntInt_ReturnValue5 = CallFunc_And_IntInt_ReturnValue5;
	Parms.CallFunc_And_IntInt_ReturnValue6 = CallFunc_And_IntInt_ReturnValue6;
	Parms.CallFunc_MakeLiteralInt_ReturnValue7 = CallFunc_MakeLiteralInt_ReturnValue7;
	Parms.CallFunc_MakeLiteralInt_ReturnValue8 = CallFunc_MakeLiteralInt_ReturnValue8;
	Parms.CallFunc_And_IntInt_ReturnValue7 = CallFunc_And_IntInt_ReturnValue7;
	Parms.CallFunc_And_IntInt_ReturnValue8 = CallFunc_And_IntInt_ReturnValue8;
	Parms.CallFunc_MakeLiteralInt_ReturnValue9 = CallFunc_MakeLiteralInt_ReturnValue9;
	Parms.CallFunc_MakeLiteralInt_ReturnValue10 = CallFunc_MakeLiteralInt_ReturnValue10;
	Parms.CallFunc_And_IntInt_ReturnValue9 = CallFunc_And_IntInt_ReturnValue9;
	Parms.CallFunc_And_IntInt_ReturnValue10 = CallFunc_And_IntInt_ReturnValue10;
	Parms.CallFunc_MakeLiteralInt_ReturnValue11 = CallFunc_MakeLiteralInt_ReturnValue11;
	Parms.CallFunc_MakeLiteralInt_ReturnValue12 = CallFunc_MakeLiteralInt_ReturnValue12;
	Parms.CallFunc_And_IntInt_ReturnValue11 = CallFunc_And_IntInt_ReturnValue11;
	Parms.CallFunc_And_IntInt_ReturnValue12 = CallFunc_And_IntInt_ReturnValue12;
	Parms.CallFunc_MakeLiteralInt_ReturnValue13 = CallFunc_MakeLiteralInt_ReturnValue13;
	Parms.CallFunc_MakeLiteralInt_ReturnValue14 = CallFunc_MakeLiteralInt_ReturnValue14;
	Parms.CallFunc_And_IntInt_ReturnValue13 = CallFunc_And_IntInt_ReturnValue13;
	Parms.CallFunc_And_IntInt_ReturnValue14 = CallFunc_And_IntInt_ReturnValue14;
	Parms.CallFunc_MakeLiteralInt_ReturnValue15 = CallFunc_MakeLiteralInt_ReturnValue15;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_And_IntInt_ReturnValue15 = CallFunc_And_IntInt_ReturnValue15;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RandomEnum != nullptr)
		*RandomEnum = Parms.RandomEnum;

}


// Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeArrayStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UClass*>              Challenge_Array                                                  (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class APlayerController*           Chracter_Controller                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              Completed_Challenges_Array                                       (Parm, OutParm, ZeroConstructor)
// TArray<class UClass*>              CompletedChallengeArray                                          (Edit, BlueprintVisible, ZeroConstructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckChallengeStatus_Complete                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::CheckChallengeArrayStatus(TArray<class UClass*>& Challenge_Array, class APlayerController* Chracter_Controller, class UObject* __WorldContext, TArray<class UClass*>* Completed_Challenges_Array, const TArray<class UClass*>& CompletedChallengeArray, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_Array_Get_Item, bool CallFunc_CheckChallengeStatus_Complete, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "CheckChallengeArrayStatus");

	Params::UOakCommonFunctions_C_CheckChallengeArrayStatus_Params Parms{};

	Parms.Challenge_Array = Challenge_Array;
	Parms.Chracter_Controller = Chracter_Controller;
	Parms.__WorldContext = __WorldContext;
	Parms.CompletedChallengeArray = CompletedChallengeArray;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CheckChallengeStatus_Complete = CallFunc_CheckChallengeStatus_Complete;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Completed_Challenges_Array != nullptr)
		*Completed_Challenges_Array = std::move(Parms.Completed_Challenges_Array);

}


// Function OakCommonFunctions.OakCommonFunctions_C.CheckChallengeStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CharacterController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Complete                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UChallengesComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChallengeComplete_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::CheckChallengeStatus(class APlayerController* CharacterController, class UClass* Challenge, class UObject* __WorldContext, bool* Complete, bool CallFunc_IsValid_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "CheckChallengeStatus");

	Params::UOakCommonFunctions_C_CheckChallengeStatus_Params Parms{};

	Parms.CharacterController = CharacterController;
	Parms.Challenge = Challenge;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsChallengeComplete_ReturnValue = CallFunc_IsChallengeComplete_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Complete != nullptr)
		*Complete = Parms.Complete;

}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete_AllPlayers
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AOakCharacter_Player*>CallFunc_GetAllPlayerCharacters_Characters                       (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::ChallengeComplete_AllPlayers(class UClass* Challenge, class UObject* __WorldContext, TArray<class AOakCharacter_Player*>& CallFunc_GetAllPlayerCharacters_Characters, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AOakCharacter_Player* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "ChallengeComplete_AllPlayers");

	Params::UOakCommonFunctions_C_ChallengeComplete_AllPlayers_Params Parms{};

	Parms.Challenge = Challenge;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllPlayerCharacters_Characters = CallFunc_GetAllPlayerCharacters_Characters;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate_AllPlayers
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AOakCharacter_Player*>CallFunc_GetAllPlayerCharacters_Characters                       (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AOakCharacter_Player*        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::ChallengeActivate_AllPlayers(class UClass* Challenge, class UObject* __WorldContext, TArray<class AOakCharacter_Player*>& CallFunc_GetAllPlayerCharacters_Characters, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class AOakCharacter_Player* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "ChallengeActivate_AllPlayers");

	Params::UOakCommonFunctions_C_ChallengeActivate_AllPlayers_Params Parms{};

	Parms.Challenge = Challenge;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllPlayerCharacters_Characters = CallFunc_GetAllPlayerCharacters_Characters;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeComplete
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengesComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::ChallengeComplete(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "ChallengeComplete");

	Params::UOakCommonFunctions_C_ChallengeComplete_Params Parms{};

	Parms.Character = Character;
	Parms.Challenge = Challenge;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.ChallengeActivate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Challenge                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UChallengesComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::ChallengeActivate(class AOakCharacter_Player* Character, class UClass* Challenge, class UObject* __WorldContext, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "ChallengeActivate");

	Params::UOakCommonFunctions_C_ChallengeActivate_Params Parms{};

	Parms.Character = Character;
	Parms.Challenge = Challenge;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.Cosh
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              _result                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Exp_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Exp_ReturnValue1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::Cosh(float A, class UObject* __WorldContext, float* _result, float CallFunc_Exp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Exp_ReturnValue1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Cosh");

	Params::UOakCommonFunctions_C_Cosh_Params Parms{};

	Parms.A = A;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Exp_ReturnValue = CallFunc_Exp_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Exp_ReturnValue1 = CallFunc_Exp_ReturnValue1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (_result != nullptr)
		*_result = Parms._result;

}


// Function OakCommonFunctions.OakCommonFunctions_C.SetMissionDoorState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference  ObjectiveRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Door                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_Door_C>K2Node_DynamicCast_AsBPI_Door                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_Door_C>K2Node_DynamicCast_AsBPI_Door1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_Door_C>K2Node_DynamicCast_AsBPI_Door2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::SetMissionDoorState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext, class UObject* Door, TScriptInterface<class IBPI_Door_C> K2Node_DynamicCast_AsBPI_Door, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_Door_C> K2Node_DynamicCast_AsBPI_Door1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_Door_C> K2Node_DynamicCast_AsBPI_Door2, bool K2Node_DynamicCast_bSuccess2, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "SetMissionDoorState");

	Params::UOakCommonFunctions_C_SetMissionDoorState_Params Parms{};

	Parms.ObjectiveRef = ObjectiveRef;
	Parms.Context = Context;
	Parms.__WorldContext = __WorldContext;
	Parms.Door = Door;
	Parms.K2Node_DynamicCast_AsBPI_Door = K2Node_DynamicCast_AsBPI_Door;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Door1 = K2Node_DynamicCast_AsBPI_Door1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsBPI_Door2 = K2Node_DynamicCast_AsBPI_Door2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_GetMissionObjectiveStatusRef_ReturnValue = CallFunc_GetMissionObjectiveStatusRef_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.SetMissionSwitchState
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMissionObjectiveReference  ObjectiveRef                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Switch                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_IO_Switch_C>K2Node_DynamicCast_AsBPI_IO_Switch                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_IO_Switch_C>K2Node_DynamicCast_AsBPI_IO_Switch1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_IO_Switch_C>K2Node_DynamicCast_AsBPI_IO_Switch2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::SetMissionSwitchState(const struct FMissionObjectiveReference& ObjectiveRef, class UObject* Context, class UObject* __WorldContext, class UObject* Switch, TScriptInterface<class IBPI_IO_Switch_C> K2Node_DynamicCast_AsBPI_IO_Switch, bool K2Node_DynamicCast_bSuccess, enum class EMissionObjectiveStatus CallFunc_GetMissionObjectiveStatusRef_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_IO_Switch_C> K2Node_DynamicCast_AsBPI_IO_Switch1, bool K2Node_DynamicCast_bSuccess1, TScriptInterface<class IBPI_IO_Switch_C> K2Node_DynamicCast_AsBPI_IO_Switch2, bool K2Node_DynamicCast_bSuccess2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "SetMissionSwitchState");

	Params::UOakCommonFunctions_C_SetMissionSwitchState_Params Parms{};

	Parms.ObjectiveRef = ObjectiveRef;
	Parms.Context = Context;
	Parms.__WorldContext = __WorldContext;
	Parms.Switch = Switch;
	Parms.K2Node_DynamicCast_AsBPI_IO_Switch = K2Node_DynamicCast_AsBPI_IO_Switch;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionObjectiveStatusRef_ReturnValue = CallFunc_GetMissionObjectiveStatusRef_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBPI_IO_Switch1 = K2Node_DynamicCast_AsBPI_IO_Switch1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsBPI_IO_Switch2 = K2Node_DynamicCast_AsBPI_IO_Switch2;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.SetDebugConsoleCommands
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Stat_Unit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Stat_FPS                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowDebug_Missions                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ToggleAllScreenMessages                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               BalanceMe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoTarget                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               God                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Demigod                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               AllAmmo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Player                                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEditorSession_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::SetDebugConsoleCommands(class APlayerController* PlayerController, bool Stat_Unit, bool Stat_FPS, bool ShowDebug_Missions, bool ToggleAllScreenMessages, bool BalanceMe, bool NoTarget, bool God, bool Demigod, bool Loaded, bool AllAmmo, class UObject* __WorldContext, class APlayerController* Player, bool CallFunc_IsEditorSession_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "SetDebugConsoleCommands");

	Params::UOakCommonFunctions_C_SetDebugConsoleCommands_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Stat_Unit = Stat_Unit;
	Parms.Stat_FPS = Stat_FPS;
	Parms.ShowDebug_Missions = ShowDebug_Missions;
	Parms.ToggleAllScreenMessages = ToggleAllScreenMessages;
	Parms.BalanceMe = BalanceMe;
	Parms.NoTarget = NoTarget;
	Parms.God = God;
	Parms.Demigod = Demigod;
	Parms.Loaded = Loaded;
	Parms.AllAmmo = AllAmmo;
	Parms.__WorldContext = __WorldContext;
	Parms.Player = Player;
	Parms.CallFunc_IsEditorSession_ReturnValue = CallFunc_IsEditorSession_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.MissionTempHudText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::MissionTempHudText(class UObject* WorldContextObject, class FText Text, float TextSize, float Duration, const struct FLinearColor& TextColor, class UObject* __WorldContext, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "MissionTempHudText");

	Params::UOakCommonFunctions_C_MissionTempHudText_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Text = Text;
	Parms.TextSize = TextSize;
	Parms.Duration = Duration;
	Parms.TextColor = TextColor;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.MissionTempSpeakText
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      ActorClass                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              TextSize                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FacePlayer                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AOakCharacter*>       CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AOakCharacter*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPInterface_TempHudTextProvider_C>K2Node_DynamicCast_AsBPInterface_Temp_Hud_Text_Provider          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::MissionTempSpeakText(class UObject* WorldContextObject, class UClass* ActorClass, class FText Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer, class UObject* __WorldContext, TArray<class AOakCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, class AOakCharacter* CallFunc_Array_Get_Item, TScriptInterface<class IBPInterface_TempHudTextProvider_C> K2Node_DynamicCast_AsBPInterface_Temp_Hud_Text_Provider, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "MissionTempSpeakText");

	Params::UOakCommonFunctions_C_MissionTempSpeakText_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ActorClass = ActorClass;
	Parms.Text = Text;
	Parms.TextSize = TextSize;
	Parms.Duration = Duration;
	Parms.TextColor = TextColor;
	Parms.FacePlayer = FacePlayer;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPInterface_Temp_Hud_Text_Provider = K2Node_DynamicCast_AsBPInterface_Temp_Hud_Text_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.DisplayErrorMessage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ErrorMessage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue1                              (ZeroConstructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::DisplayErrorMessage(class UObject* Context, const class FString& ErrorMessage, class UObject* __WorldContext, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "DisplayErrorMessage");

	Params::UOakCommonFunctions_C_DisplayErrorMessage_Params Parms{};

	Parms.Context = Context;
	Parms.ErrorMessage = ErrorMessage;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue1 = CallFunc_Concat_StrStr_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.Compare Damage Source
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDamageSource*               Damage_Source_1                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Damage_Source_2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Equal                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Not_Equal                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOakCommonFunctions_C::Compare_Damage_Source(class UDamageSource* Damage_Source_1, class UClass* Damage_Source_2, class UObject* __WorldContext, bool* Equal, bool* Not_Equal, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Compare Damage Source");

	Params::UOakCommonFunctions_C_Compare_Damage_Source_Params Parms{};

	Parms.Damage_Source_1 = Damage_Source_1;
	Parms.Damage_Source_2 = Damage_Source_2;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Equal != nullptr)
		*Equal = Parms.Equal;

	if (Not_Equal != nullptr)
		*Not_Equal = Parms.Not_Equal;

}


// Function OakCommonFunctions.OakCommonFunctions_C.Make Transforms Around Cone
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Cone_Axis                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Cone_Location                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Cone_Angle_Min                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Cone_Angle_Max                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Rotation_Angle_Divergence                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Sweep_Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Distance_From_Cone_Center                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Number_Of_Transforms                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          Out_Transforms                                                   (Parm, OutParm, ZeroConstructor)
// TArray<struct FTransform>          Transforms                                                       (Edit, BlueprintVisible, ZeroConstructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformDirection_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue1                       (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue1                              (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::Make_Transforms_Around_Cone(const struct FVector& Cone_Axis, const struct FVector& Cone_Location, float Cone_Angle_Min, float Cone_Angle_Max, float Rotation_Angle_Divergence, float Sweep_Angle, float Distance_From_Cone_Center, int32 Number_Of_Transforms, class UObject* __WorldContext, TArray<struct FTransform>* Out_Transforms, const TArray<struct FTransform>& Transforms, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Variable, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue1, const struct FTransform& CallFunc_MakeTransform_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Make Transforms Around Cone");

	Params::UOakCommonFunctions_C_Make_Transforms_Around_Cone_Params Parms{};

	Parms.Cone_Axis = Cone_Axis;
	Parms.Cone_Location = Cone_Location;
	Parms.Cone_Angle_Min = Cone_Angle_Min;
	Parms.Cone_Angle_Max = Cone_Angle_Max;
	Parms.Rotation_Angle_Divergence = Rotation_Angle_Divergence;
	Parms.Sweep_Angle = Sweep_Angle;
	Parms.Distance_From_Cone_Center = Distance_From_Cone_Center;
	Parms.Number_Of_Transforms = Number_Of_Transforms;
	Parms.__WorldContext = __WorldContext;
	Parms.Transforms = Transforms;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue1 = CallFunc_RandomFloatInRange_ReturnValue1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TransformDirection_ReturnValue = CallFunc_TransformDirection_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue1 = CallFunc_Conv_VectorToRotator_ReturnValue1;
	Parms.CallFunc_MakeTransform_ReturnValue1 = CallFunc_MakeTransform_ReturnValue1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out_Transforms != nullptr)
		*Out_Transforms = std::move(Parms.Out_Transforms);

}


// Function OakCommonFunctions.OakCommonFunctions_C.Get Player View Trace
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        Player_Character                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Trace_Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Trace_Start                                                      (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Trace_End                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorAimViewPoint_OutLocation                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetActorAimViewPoint_OutRotation                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::Get_Player_View_Trace(class AOakCharacter_Player* Player_Character, float Trace_Length, class UObject* __WorldContext, struct FVector* Trace_Start, struct FVector* Trace_End, class AController* CallFunc_GetController_ReturnValue, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Get Player View Trace");

	Params::UOakCommonFunctions_C_Get_Player_View_Trace_Params Parms{};

	Parms.Player_Character = Player_Character;
	Parms.Trace_Length = Trace_Length;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetActorAimViewPoint_OutLocation = CallFunc_GetActorAimViewPoint_OutLocation;
	Parms.CallFunc_GetActorAimViewPoint_OutRotation = CallFunc_GetActorAimViewPoint_OutRotation;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Trace_Start != nullptr)
		*Trace_Start = std::move(Parms.Trace_Start);

	if (Trace_End != nullptr)
		*Trace_End = std::move(Parms.Trace_End);

}


// Function OakCommonFunctions.OakCommonFunctions_C.Get Regeneration Rate
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max_Regen_Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Regen_Rate                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EvaluateAttributeInitializer_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOakCommonFunctions_C::Get_Regeneration_Rate(class UObject* Context, float Max_Regen_Rate, class UObject* __WorldContext, float* Regen_Rate, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_EvaluateAttributeInitializer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OakCommonFunctions_C", "Get Regeneration Rate");

	Params::UOakCommonFunctions_C_Get_Regeneration_Rate_Params Parms{};

	Parms.Context = Context;
	Parms.Max_Regen_Rate = Max_Regen_Rate;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_EvaluateAttributeInitializer_ReturnValue = CallFunc_EvaluateAttributeInitializer_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (Regen_Rate != nullptr)
		*Regen_Rate = Parms.Regen_Rate;

}

}


