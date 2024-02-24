#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C
// (None)

class UClass* UUMG_SentryReportDialogContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SentryReportDialogContent_C");

	return Clss;
}


// UMG_SentryReportDialogContent_C UMG_SentryReportDialogContent.Default__UMG_SentryReportDialogContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SentryReportDialogContent_C* UUMG_SentryReportDialogContent_C::GetDefaultObj()
{
	static class UUMG_SentryReportDialogContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SentryReportDialogContent_C*>(UUMG_SentryReportDialogContent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.UpdateCharacterLimit
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_SentryReportDialogContent_C::UpdateCharacterLimit(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "UpdateCharacterLimit");

	Params::UUMG_SentryReportDialogContent_C_UpdateCharacterLimit_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_SentryReportDialogContent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_SentryReportDialogContent_C::BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UUMG_SentryReportDialogContent_C_BndEvt__UMG_SentryReportDialogContent_MultiLineEditableTextBox_130_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SentryReportDialogContent_C::BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UUMG_SentryReportDialogContent_C_BndEvt__UMG_SentryReportDialogContent_ReportInput_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.BndEvt__UMG_SentryReportDialogContent_UMG_ExternalDiscord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SentryReportDialogContent_C::BndEvt__UMG_SentryReportDialogContent_UMG_ExternalDiscord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "BndEvt__UMG_SentryReportDialogContent_UMG_ExternalDiscord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.BndEvt__UMG_SentryReportDialogContent_UMG_ExternaUpvote_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_SentryReportDialogContent_C::BndEvt__UMG_SentryReportDialogContent_UMG_ExternaUpvote_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "BndEvt__UMG_SentryReportDialogContent_UMG_ExternaUpvote_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_SentryReportDialogContent.UMG_SentryReportDialogContent_C.ExecuteUbergraph_UMG_SentryReportDialogContent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_Text_1                                (ConstParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (ConstParm)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_GetSubstring_ReturnValue_1                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UUMG_SentryReportDialogContent_C::ExecuteUbergraph_UMG_SentryReportDialogContent(int32 EntryPoint, class FText K2Node_ComponentBoundEvent_Text_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Len_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SentryReportDialogContent_C", "ExecuteUbergraph_UMG_SentryReportDialogContent");

	Params::UUMG_SentryReportDialogContent_C_ExecuteUbergraph_UMG_SentryReportDialogContent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Text_1 = K2Node_ComponentBoundEvent_Text_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue_1 = CallFunc_GetSubstring_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


