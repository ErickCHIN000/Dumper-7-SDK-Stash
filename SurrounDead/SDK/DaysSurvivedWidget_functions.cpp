#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DaysSurvivedWidget.DaysSurvivedWidget_C
// (None)

class UClass* UDaysSurvivedWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DaysSurvivedWidget_C");

	return Clss;
}


// DaysSurvivedWidget_C DaysSurvivedWidget.Default__DaysSurvivedWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDaysSurvivedWidget_C* UDaysSurvivedWidget_C::GetDefaultObj()
{
	static class UDaysSurvivedWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDaysSurvivedWidget_C*>(UDaysSurvivedWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DaysSurvivedWidget.DaysSurvivedWidget_C.Event_Survived
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDaysSurvivedWidget_C::Event_Survived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaysSurvivedWidget_C", "Event_Survived");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DaysSurvivedWidget.DaysSurvivedWidget_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UDaysSurvivedWidget_C::FadeOutFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaysSurvivedWidget_C", "FadeOutFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DaysSurvivedWidget.DaysSurvivedWidget_C.ExecuteUbergraph_DaysSurvivedWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Plus_One__Int__Return_Value                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDaysSurvivedWidget_C::ExecuteUbergraph_DaysSurvivedWidget(int32 EntryPoint, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, int32 CallFunc_Plus_One__Int__Return_Value, const class FString& CallFunc_GetSubstring_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DaysSurvivedWidget_C", "ExecuteUbergraph_DaysSurvivedWidget");

	Params::UDaysSurvivedWidget_C_ExecuteUbergraph_DaysSurvivedWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Plus_One__Int__Return_Value = CallFunc_Plus_One__Int__Return_Value;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


