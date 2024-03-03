#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C
// (None)

class UClass* UW_05_notification_CarnalInstinct_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_05_notification_CarnalInstinct_C");

	return Clss;
}


// w_05_notification_CarnalInstinct_C w_05_notification_CarnalInstinct.Default__w_05_notification_CarnalInstinct_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_05_notification_CarnalInstinct_C* UW_05_notification_CarnalInstinct_C::GetDefaultObj()
{
	static class UW_05_notification_CarnalInstinct_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_05_notification_CarnalInstinct_C*>(UW_05_notification_CarnalInstinct_C::StaticClass()->DefaultObject);

	return Default;
}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.Get Percent Progress Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent_Progress_Value                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_05_notification_CarnalInstinct_C::Get_Percent_Progress_Value(float* Percent_Progress_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "Get Percent Progress Value");

	Params::UW_05_notification_CarnalInstinct_C_Get_Percent_Progress_Value_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Percent_Progress_Value != nullptr)
		*Percent_Progress_Value = Parms.Percent_Progress_Value;

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.GetQuestName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        NextQuestText                                                    (Parm, OutParm)

void UW_05_notification_CarnalInstinct_C::GetQuestName(class FText* NextQuestText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "GetQuestName");

	Params::UW_05_notification_CarnalInstinct_C_GetQuestName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NextQuestText != nullptr)
		*NextQuestText = Parms.NextQuestText;

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.Finished_1EFF0B14433310A63985A899628F500F
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_05_notification_CarnalInstinct_C::Finished_1EFF0B14433310A63985A899628F500F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "Finished_1EFF0B14433310A63985A899628F500F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UW_05_notification_CarnalInstinct_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.Setup Event Dispatchers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_05_notification_CarnalInstinct_C::Setup_Event_Dispatchers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "Setup Event Dispatchers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.Event Refresh Parameters
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_05_notification_CarnalInstinct_C::Event_Refresh_Parameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "Event Refresh Parameters");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.Refresh Progress Value
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UW_05_notification_CarnalInstinct_C::Refresh_Progress_Value()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "Refresh Progress Value");



	UObject::ProcessEvent(Func, nullptr);

}


// Function w_05_notification_CarnalInstinct.w_05_notification_CarnalInstinct_C.ExecuteUbergraph_w_05_notification_CarnalInstinct
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_ProgressBars_C>K2Node_DynamicCast_AsBPi_Progress_Bars                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_NormalizeToRange_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_05_notification_CarnalInstinct_C::ExecuteUbergraph_w_05_notification_CarnalInstinct(int32 EntryPoint, TScriptInterface<class IBPi_ProgressBars_C> K2Node_DynamicCast_AsBPi_Progress_Bars, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText CallFunc_Conv_FloatToText_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_NormalizeToRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("w_05_notification_CarnalInstinct_C", "ExecuteUbergraph_w_05_notification_CarnalInstinct");

	Params::UW_05_notification_CarnalInstinct_C_ExecuteUbergraph_w_05_notification_CarnalInstinct_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPi_Progress_Bars = K2Node_DynamicCast_AsBPi_Progress_Bars;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_NormalizeToRange_ReturnValue = CallFunc_NormalizeToRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


