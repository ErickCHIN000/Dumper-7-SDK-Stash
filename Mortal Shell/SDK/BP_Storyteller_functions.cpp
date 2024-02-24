#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Storyteller.BP_Storyteller_C
// (Actor)

class UClass* ABP_Storyteller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Storyteller_C");

	return Clss;
}


// BP_Storyteller_C BP_Storyteller.Default__BP_Storyteller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Storyteller_C* ABP_Storyteller_C::GetDefaultObj()
{
	static class ABP_Storyteller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Storyteller_C*>(ABP_Storyteller_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Storyteller.BP_Storyteller_C.DisplayText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)

void ABP_Storyteller_C::DisplayText(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "DisplayText");

	Params::ABP_Storyteller_C_DisplayText_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller.BP_Storyteller_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Storyteller_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller.BP_Storyteller_C.StartStoryteller
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                TextToDisplay                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void ABP_Storyteller_C::StartStoryteller(TArray<class FText>& TextToDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "StartStoryteller");

	Params::ABP_Storyteller_C_StartStoryteller_Params Parms{};

	Parms.TextToDisplay = TextToDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller.BP_Storyteller_C.RunStoryTeller
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_C::RunStoryTeller()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "RunStoryTeller");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller.BP_Storyteller_C.FinishCurrentLineNow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_C::FinishCurrentLineNow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "FinishCurrentLineNow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller.BP_Storyteller_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_Storyteller_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller.BP_Storyteller_C.ExecuteUbergraph_BP_Storyteller
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_CustomEvent_TextToDisplay                                 (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void ABP_Storyteller_C::ExecuteUbergraph_BP_Storyteller(int32 EntryPoint, class FText CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class FText>& K2Node_CustomEvent_TextToDisplay, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, class FText CallFunc_Array_Get_Item_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "ExecuteUbergraph_BP_Storyteller");

	Params::ABP_Storyteller_C_ExecuteUbergraph_BP_Storyteller_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_TextToDisplay = K2Node_CustomEvent_TextToDisplay;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Storyteller.BP_Storyteller_C.Storyteller_Loaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_C::Storyteller_Loaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "Storyteller_Loaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Storyteller.BP_Storyteller_C.AllTextDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Storyteller_C::AllTextDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Storyteller_C", "AllTextDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


