#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPQ_Common_Progress.BPQ_Common_Progress_C
// (Actor)

class UClass* ABPQ_Common_Progress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPQ_Common_Progress_C");

	return Clss;
}


// BPQ_Common_Progress_C BPQ_Common_Progress.Default__BPQ_Common_Progress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPQ_Common_Progress_C* ABPQ_Common_Progress_C::GetDefaultObj()
{
	static class ABPQ_Common_Progress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPQ_Common_Progress_C*>(ABPQ_Common_Progress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.GetMaxTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVariation_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABPQ_Common_Progress_C::GetMaxTime(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, int32 CallFunc_GetVariation_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "GetMaxTime");

	Params::ABPQ_Common_Progress_C_GetMaxTime_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.CallFunc_GetVariation_ReturnValue = CallFunc_GetVariation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.PlayersLeftArea
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPQ_Common_Progress_C::PlayersLeftArea()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "PlayersLeftArea");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.GetDescription
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InDescription                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        OutDescription                                                   (Parm, OutParm)
// bool                               bOutComplete                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBooleanVariable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatVariable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_GetFloatVariable_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void ABPQ_Common_Progress_C::GetDescription(class FText& InDescription, class FText* OutDescription, bool* bOutComplete, bool CallFunc_GetBooleanVariable_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetFloatVariable_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "GetDescription");

	Params::ABPQ_Common_Progress_C_GetDescription_Params Parms{};

	Parms.InDescription = InDescription;
	Parms.CallFunc_GetBooleanVariable_ReturnValue = CallFunc_GetBooleanVariable_ReturnValue;
	Parms.CallFunc_GetFloatVariable_ReturnValue = CallFunc_GetFloatVariable_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetFloatVariable_ReturnValue_1 = CallFunc_GetFloatVariable_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutDescription != nullptr)
		*OutDescription = Parms.OutDescription;

	if (bOutComplete != nullptr)
		*bOutComplete = Parms.bOutComplete;

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.Check
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBooleanVariable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool ABPQ_Common_Progress_C::Check(bool CallFunc_GetBooleanVariable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "Check");

	Params::ABPQ_Common_Progress_C_Check_Params Parms{};

	Parms.CallFunc_GetBooleanVariable_ReturnValue = CallFunc_GetBooleanVariable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.RunOperations
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPQ_Common_Progress_C::RunOperations(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "RunOperations");

	Params::ABPQ_Common_Progress_C_RunOperations_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.Setup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFirstTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPQ_Common_Progress_C::Setup(bool bFirstTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "Setup");

	Params::ABPQ_Common_Progress_C_Setup_Params Parms{};

	Parms.bFirstTime = bFirstTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.CheckPlayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPQ_Common_Progress_C::CheckPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "CheckPlayers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPQ_Common_Progress.BPQ_Common_Progress_C.ExecuteUbergraph_BPQ_Common_Progress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatVariable_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatVariable_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFirstTime                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatVariable_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFloatVariable_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AIcarusPlayerCharacter*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByDistanceFromOrigin_ReturnValue              (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetBooleanVariable_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetMaxTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPQ_Common_Progress_C::ExecuteUbergraph_BPQ_Common_Progress(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_DeltaSeconds, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, bool K2Node_Event_bFirstTime, float CallFunc_GetFloatVariable_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_GetFloatVariable_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class AIcarusPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& CallFunc_SortActorsByDistanceFromOrigin_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetBooleanVariable_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, float CallFunc_GetMaxTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPQ_Common_Progress_C", "ExecuteUbergraph_BPQ_Common_Progress");

	Params::ABPQ_Common_Progress_C_ExecuteUbergraph_BPQ_Common_Progress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetFloatVariable_ReturnValue = CallFunc_GetFloatVariable_ReturnValue;
	Parms.CallFunc_GetFloatVariable_ReturnValue_1 = CallFunc_GetFloatVariable_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_bFirstTime = K2Node_Event_bFirstTime;
	Parms.CallFunc_GetFloatVariable_ReturnValue_2 = CallFunc_GetFloatVariable_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetFloatVariable_ReturnValue_3 = CallFunc_GetFloatVariable_ReturnValue_3;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SortActorsByDistanceFromOrigin_ReturnValue = CallFunc_SortActorsByDistanceFromOrigin_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetBooleanVariable_ReturnValue = CallFunc_GetBooleanVariable_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetMaxTime_ReturnValue = CallFunc_GetMaxTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


