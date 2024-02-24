#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C
// (None)

class UClass* UWBP_Popup_Codex_Template_TarotReading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Popup_Codex_Template_TarotReading_C");

	return Clss;
}


// WBP_Popup_Codex_Template_TarotReading_C WBP_Popup_Codex_Template_TarotReading.Default__WBP_Popup_Codex_Template_TarotReading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Popup_Codex_Template_TarotReading_C* UWBP_Popup_Codex_Template_TarotReading_C::GetDefaultObj()
{
	static class UWBP_Popup_Codex_Template_TarotReading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Popup_Codex_Template_TarotReading_C*>(UWBP_Popup_Codex_Template_TarotReading_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.GetScrollBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UScrollBox*                  CallFunc_GetScrollBox_ScrollBox                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_Codex_Template_TarotReading_C::GetScrollBox(class UScrollBox** ScrollBox, class UScrollBox* CallFunc_GetScrollBox_ScrollBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "GetScrollBox");

	Params::UWBP_Popup_Codex_Template_TarotReading_C_GetScrollBox_Params Parms{};

	Parms.CallFunc_GetScrollBox_ScrollBox = CallFunc_GetScrollBox_ScrollBox;

	UObject::ProcessEvent(Func, &Parms);

	if (ScrollBox != nullptr)
		*ScrollBox = Parms.ScrollBox;

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.PopulateTemplate
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_ObjectToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Specific_Codex_Subentry_For_Popup_CodexSubentryText (None)
// class FText                        CallFunc_Get_All_Unlocked_Codex_Subentries_For_Popup_CodexSubentryText(None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_Codex_Template_TarotReading_C::PopulateTemplate(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_IsGameplayTagValid_ReturnValue, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Get_Specific_Codex_Subentry_For_Popup_CodexSubentryText, class FText CallFunc_Get_All_Unlocked_Codex_Subentries_For_Popup_CodexSubentryText, TSoftObjectPtr<class UTexture2D> CallFunc_Array_Get_Item, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "PopulateTemplate");

	Params::UWBP_Popup_Codex_Template_TarotReading_C_PopulateTemplate_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_ObjectToText_ReturnValue = CallFunc_Conv_ObjectToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Get_Specific_Codex_Subentry_For_Popup_CodexSubentryText = CallFunc_Get_Specific_Codex_Subentry_For_Popup_CodexSubentryText;
	Parms.CallFunc_Get_All_Unlocked_Codex_Subentries_For_Popup_CodexSubentryText = CallFunc_Get_All_Unlocked_Codex_Subentries_For_Popup_CodexSubentryText;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_Template_TarotReading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_Codex_Template_TarotReading_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "PreConstruct");

	Params::UWBP_Popup_Codex_Template_TarotReading_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.ExecuteUbergraph_WBP_Popup_Codex_Template_TarotReading
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Popup_Codex_Template_TarotReading_C::ExecuteUbergraph_WBP_Popup_Codex_Template_TarotReading(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "ExecuteUbergraph_WBP_Popup_Codex_Template_TarotReading");

	Params::UWBP_Popup_Codex_Template_TarotReading_C_ExecuteUbergraph_WBP_Popup_Codex_Template_TarotReading_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.Button3_Clicked_0_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_Template_TarotReading_C::Button3_Clicked_0_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "Button3_Clicked_0_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.Button2_Clicked_0_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_Template_TarotReading_C::Button2_Clicked_0_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "Button2_Clicked_0_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Popup_Codex_Template_TarotReading.WBP_Popup_Codex_Template_TarotReading_C.Button1_Clicked_0_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Popup_Codex_Template_TarotReading_C::Button1_Clicked_0_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Popup_Codex_Template_TarotReading_C", "Button1_Clicked_0_0__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


