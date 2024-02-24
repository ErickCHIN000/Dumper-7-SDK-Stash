#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ConnectingOverlay.UMG_ConnectingOverlay_C
// (None)

class UClass* UUMG_ConnectingOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ConnectingOverlay_C");

	return Clss;
}


// UMG_ConnectingOverlay_C UMG_ConnectingOverlay.Default__UMG_ConnectingOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ConnectingOverlay_C* UUMG_ConnectingOverlay_C::GetDefaultObj()
{
	static class UUMG_ConnectingOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ConnectingOverlay_C*>(UUMG_ConnectingOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.IsEscapeMenuDisabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ConnectingOverlay_C::IsEscapeMenuDisabled(bool* Disabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "IsEscapeMenuDisabled");

	Params::UUMG_ConnectingOverlay_C_IsEscapeMenuDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Disabled != nullptr)
		*Disabled = Parms.Disabled;

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Show Pak Meta Popup if Required
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ShouldShowPopup_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPakMetaLongMessage_MessageOut                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetPakMetaShortMessage_OutMessage                       (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UUMG_UserInterface_TitleScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_TitleScreen_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::Show_Pak_Meta_Popup_if_Required(bool CallFunc_ShouldShowPopup_ReturnValue, class FText CallFunc_GetPakMetaLongMessage_MessageOut, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetPakMetaShortMessage_OutMessage, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UUMG_UserInterface_TitleScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_Array_IsValidIndex_ReturnValue, class UUMG_UserInterface_TitleScreen_C* CallFunc_Array_Get_Item, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "Show Pak Meta Popup if Required");

	Params::UUMG_ConnectingOverlay_C_Show_Pak_Meta_Popup_if_Required_Params Parms{};

	Parms.CallFunc_ShouldShowPopup_ReturnValue = CallFunc_ShouldShowPopup_ReturnValue;
	Parms.CallFunc_GetPakMetaLongMessage_MessageOut = CallFunc_GetPakMetaLongMessage_MessageOut;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetPakMetaShortMessage_OutMessage = CallFunc_GetPakMetaShortMessage_OutMessage;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.GetPakMetaShortMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPakMetaDetail              PakDetail                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        OutMessage                                                       (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPakResultMatch_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ConnectingOverlay_C::GetPakMetaShortMessage(const struct FPakMetaDetail& PakDetail, class FText* OutMessage, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsPakResultMatch_ReturnValue, bool CallFunc_IsPakResultMatch_ReturnValue_1, bool CallFunc_IsPakResultMatch_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "GetPakMetaShortMessage");

	Params::UUMG_ConnectingOverlay_C_GetPakMetaShortMessage_Params Parms{};

	Parms.PakDetail = PakDetail;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsPakResultMatch_ReturnValue = CallFunc_IsPakResultMatch_ReturnValue;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_1 = CallFunc_IsPakResultMatch_ReturnValue_1;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_2 = CallFunc_IsPakResultMatch_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMessage != nullptr)
		*OutMessage = Parms.OutMessage;

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.GetPakMetaLongMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPakMetaDetail              PakDetail                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        MessageOut                                                       (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_IsPakResultMatch_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_FileDetailsToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileDetailsToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_5                         (None)
// class FString                      CallFunc_FileDetailsToString_ReturnValue_2                       (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_6                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_7                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_FileDetailsToString_ReturnValue_3                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_8                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_12                          (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)

void UUMG_ConnectingOverlay_C::GetPakMetaLongMessage(const struct FPakMetaDetail& PakDetail, class FText* MessageOut, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_IsPakResultMatch_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_FileDetailsToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, bool CallFunc_IsPakResultMatch_ReturnValue_1, const class FString& CallFunc_FileDetailsToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText CallFunc_MakeLiteralText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_5, const class FString& CallFunc_FileDetailsToString_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, class FText CallFunc_Conv_StringToText_ReturnValue_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, bool CallFunc_IsPakResultMatch_ReturnValue_2, class FText CallFunc_Format_ReturnValue_3, class FText CallFunc_MakeLiteralText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class FText CallFunc_Conv_StringToText_ReturnValue_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, bool CallFunc_IsPakResultMatch_ReturnValue_3, const class FString& CallFunc_FileDetailsToString_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_12, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "GetPakMetaLongMessage");

	Params::UUMG_ConnectingOverlay_C_GetPakMetaLongMessage_Params Parms{};

	Parms.PakDetail = PakDetail;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_IsPakResultMatch_ReturnValue = CallFunc_IsPakResultMatch_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_FileDetailsToString_ReturnValue = CallFunc_FileDetailsToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_1 = CallFunc_IsPakResultMatch_ReturnValue_1;
	Parms.CallFunc_FileDetailsToString_ReturnValue_1 = CallFunc_FileDetailsToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_5 = CallFunc_Conv_StringToText_ReturnValue_5;
	Parms.CallFunc_FileDetailsToString_ReturnValue_2 = CallFunc_FileDetailsToString_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.CallFunc_Conv_StringToText_ReturnValue_6 = CallFunc_Conv_StringToText_ReturnValue_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_2 = CallFunc_IsPakResultMatch_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_Conv_StringToText_ReturnValue_7 = CallFunc_Conv_StringToText_ReturnValue_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_3 = CallFunc_IsPakResultMatch_ReturnValue_3;
	Parms.CallFunc_FileDetailsToString_ReturnValue_3 = CallFunc_FileDetailsToString_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_8 = CallFunc_Conv_StringToText_ReturnValue_8;
	Parms.K2Node_MakeStruct_FormatArgumentData_12 = K2Node_MakeStruct_FormatArgumentData_12;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (MessageOut != nullptr)
		*MessageOut = Parms.MessageOut;

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CheckPakMeta
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetPakMetaShortMessage_OutMessage                       (None)
// bool                               CallFunc_IsPakResultMatch_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPakResultMatch_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetPakMetaLongMessage_MessageOut                        (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPakMetaDetail              CallFunc_CheckGameContentHash_ReturnValue                        (None)

void UUMG_ConnectingOverlay_C::CheckPakMeta(class FText CallFunc_GetPakMetaShortMessage_OutMessage, bool CallFunc_IsPakResultMatch_ReturnValue, bool CallFunc_IsPakResultMatch_ReturnValue_1, bool CallFunc_IsPakResultMatch_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FText CallFunc_GetPakMetaLongMessage_MessageOut, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FSlateColor& K2Node_Select_Default, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const struct FPakMetaDetail& CallFunc_CheckGameContentHash_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "CheckPakMeta");

	Params::UUMG_ConnectingOverlay_C_CheckPakMeta_Params Parms{};

	Parms.CallFunc_GetPakMetaShortMessage_OutMessage = CallFunc_GetPakMetaShortMessage_OutMessage;
	Parms.CallFunc_IsPakResultMatch_ReturnValue = CallFunc_IsPakResultMatch_ReturnValue;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_1 = CallFunc_IsPakResultMatch_ReturnValue_1;
	Parms.CallFunc_IsPakResultMatch_ReturnValue_2 = CallFunc_IsPakResultMatch_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetPakMetaLongMessage_MessageOut = CallFunc_GetPakMetaLongMessage_MessageOut;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_CheckGameContentHash_ReturnValue = CallFunc_CheckGameContentHash_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.DoNothing
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::DoNothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "DoNothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Log
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::Log(const class FString& Description, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "Log");

	Params::UUMG_ConnectingOverlay_C_Log_Params Parms{};

	Parms.Description = Description;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ShowCharacterSelectScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::ShowCharacterSelectScreen(const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "ShowCharacterSelectScreen");

	Params::UUMG_ConnectingOverlay_C_ShowCharacterSelectScreen_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Initialise
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class UUMG_UserInterface_TitleScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_TitleScreen_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TitleScreenGameMode_C*   K2Node_DynamicCast_AsBP_Title_Screen_Game_Mode                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CheckIfDriversAreUpToDate_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_IcarusGameInstance_C*    K2Node_DynamicCast_AsBP_Icarus_Game_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ConnectingOverlay_C::Initialise(bool Temp_bool_Variable, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UUMG_UserInterface_TitleScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class UUMG_UserInterface_TitleScreen_C* CallFunc_Array_Get_Item, class ABP_TitleScreenGameMode_C* K2Node_DynamicCast_AsBP_Title_Screen_Game_Mode, bool K2Node_DynamicCast_bSuccess, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, const class FString& CallFunc_CheckIfDriversAreUpToDate_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Select_Default, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "Initialise");

	Params::UUMG_ConnectingOverlay_C_Initialise_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Title_Screen_Game_Mode = K2Node_DynamicCast_AsBP_Title_Screen_Game_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.CallFunc_CheckIfDriversAreUpToDate_ReturnValue = CallFunc_CheckIfDriversAreUpToDate_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Game_Instance = K2Node_DynamicCast_AsBP_Icarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Finished_E78F06674F46BAE2FA5469B944A0976A
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::Finished_E78F06674F46BAE2FA5469B944A0976A()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "Finished_E78F06674F46BAE2FA5469B944A0976A");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_2E20AAC94911EA94788DB58E9DB4C4EF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetUserProfile          Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ConnectingOverlay_C::OnFail_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "OnFail_2E20AAC94911EA94788DB58E9DB4C4EF");

	Params::UUMG_ConnectingOverlay_C_OnFail_2E20AAC94911EA94788DB58E9DB4C4EF_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetUserProfile          Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ConnectingOverlay_C::OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF");

	Params::UUMG_ConnectingOverlay_C_OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_721D4B3242A6C8BE1C7381BDBF55A696
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetUserProfile          Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ConnectingOverlay_C::OnFail_721D4B3242A6C8BE1C7381BDBF55A696(struct FResGetUserProfile& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "OnFail_721D4B3242A6C8BE1C7381BDBF55A696");

	Params::UUMG_ConnectingOverlay_C_OnFail_721D4B3242A6C8BE1C7381BDBF55A696_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FResGetUserProfile          Response                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_ConnectingOverlay_C::OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696(struct FResGetUserProfile& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696");

	Params::UUMG_ConnectingOverlay_C_OnSuccess_721D4B3242A6C8BE1C7381BDBF55A696_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateConnectingProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::UpdateConnectingProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "UpdateConnectingProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnConnectMessageEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ConnectingOverlay_C::OnConnectMessageEvent(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "OnConnectMessageEvent");

	Params::UUMG_ConnectingOverlay_C_OnConnectMessageEvent_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.MoveToCharacterSelection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::MoveToCharacterSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "MoveToCharacterSelection");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.QuitGame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::QuitGame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "QuitGame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.EscapeKeyPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::EscapeKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "EscapeKeyPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_ConnectingOverlay_C_BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnContentServerConnectionSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::OnContentServerConnectionSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "OnContentServerConnectionSuccess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CheckIfConnectionFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::CheckIfConnectionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "CheckIfConnectionFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUMG_ConnectingOverlay_C_BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseSettings
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::CloseSettings(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "CloseSettings");

	Params::UUMG_ConnectingOverlay_C_CloseSettings_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUMG_ConnectingOverlay_C_BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.LoginFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoginFailure           ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::LoginFailed(enum class ELoginFailure ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "LoginFailed");

	Params::UUMG_ConnectingOverlay_C_LoginFailed_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature");

	Params::UUMG_ConnectingOverlay_C_BndEvt__ButtonOffline_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_ConnectingOverlay_C_BndEvt__UMG_ConnectingOverlay_ButtonCredits_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseCredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::CloseCredits(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "CloseCredits");

	Params::UUMG_ConnectingOverlay_C_CloseCredits_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__UMG_ConnectingOverlay_Discord_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__UMG_ConnectingOverlay_PatchNotes_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__UMG_ConnectingOverlay_Feedback_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.GetOwnedPackageIds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::GetOwnedPackageIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "GetOwnedPackageIds");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.RetryFetchPackages
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::RetryFetchPackages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "RetryFetchPackages");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ShowMigrationError
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::ShowMigrationError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "ShowMigrationError");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.DoNothing2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::DoNothing2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "DoNothing2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Visbility_Changed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::Visbility_Changed(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "Visbility_Changed");

	Params::UUMG_ConnectingOverlay_C_Visbility_Changed_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.FrameGenerationUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ConnectingOverlay_C::FrameGenerationUpdated(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "FrameGenerationUpdated");

	Params::UUMG_ConnectingOverlay_C_FrameGenerationUpdated_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateDLSSMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ConnectingOverlay_C::UpdateDLSSMode(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "UpdateDLSSMode");

	Params::UUMG_ConnectingOverlay_C_UpdateDLSSMode_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ConnectingOverlay_PakMetaCopy_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ConnectingOverlay_C::BndEvt__UMG_ConnectingOverlay_PakMetaCopy_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "BndEvt__UMG_ConnectingOverlay_PakMetaCopy_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ExecuteUbergraph_UMG_ConnectingOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPakMetaLongMessage_MessageOut                        (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FResGetUserProfile          K2Node_CustomEvent_Response_3                                    (ConstParm)
// struct FResGetUserProfile          K2Node_CustomEvent_Response_2                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FResGetUserProfile          Temp_struct_Variable                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UOfflinePackageFlagsSubsystem*CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FResGetUserProfile          K2Node_CustomEvent_Response_1                                    (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FResGetUserProfile          K2Node_CustomEvent_Response                                      (ConstParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FResGetUserProfile          Temp_struct_Variable_1                                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// TArray<int32>                      CallFunc_FetchAndGrantPackageFlagsForCurrentUser_PackageFlags    (ReferenceParm)
// class FString                      CallFunc_FetchAndGrantPackageFlagsForCurrentUser_FailReason      (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_FetchAndGrantPackageFlagsForCurrentUser_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusLogSubsystem*         CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class UIcarusLogSubsystem*         CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class UIcarusLogSubsystem*         CallFunc_GetGameInstanceSubsystem_ReturnValue_3                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsConnectedIcarusBackend_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsConnectedIcarusBackend_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELoginFailure           K2Node_CustomEvent_ErrorCode                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetIcarusPlayerId_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FReqGetUserProfile          K2Node_MakeStruct_ReqGetUserProfile                              (None)
// class UUMG_ButtonBase_C*           K2Node_CustomEvent_Button                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGetUserProfileCallbackProxyGen*CallFunc_GetUserProfile_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCPackageDataEnum         CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// struct FDLCPackageDataEnum         CallFunc_MakeDLCPackageDataEnum_ReturnValue                      (HasGetValueTypeHash)
// class FName                        CallFunc_StructToName_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetIcarusPlayerId_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// struct FReqGetUserProfile          K2Node_MakeStruct_ReqGetUserProfile_1                            (None)
// class UGetUserProfileCallbackProxyGen*CallFunc_GetUserProfile_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class UDataMigratorManager*        CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_PerformMigrations_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUMG_UserInterface_TitleScreen_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// class UUMG_UserInterface_TitleScreen_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRunningLocalAdmin_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_CustomEvent_InVisibility                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               K2Node_CustomEvent_Enabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUStreamlineDLSSGMode   CallFunc_GetDLSSGMode_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusGameUserSettings*     CallFunc_GetIcarusGameUserSettings_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFrameGeneration_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_3                                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPakMetaShortMessage_OutMessage                       (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)

void UUMG_ConnectingOverlay_C::ExecuteUbergraph_UMG_ConnectingOverlay(int32 EntryPoint, class FText CallFunc_GetPakMetaLongMessage_MessageOut, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FResGetUserProfile& K2Node_CustomEvent_Response_3, const struct FResGetUserProfile& K2Node_CustomEvent_Response_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FResGetUserProfile& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UOfflinePackageFlagsSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FResGetUserProfile& K2Node_CustomEvent_Response_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FResGetUserProfile& K2Node_CustomEvent_Response, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FResGetUserProfile& Temp_struct_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, TArray<int32>& CallFunc_FetchAndGrantPackageFlagsForCurrentUser_PackageFlags, const class FString& CallFunc_FetchAndGrantPackageFlagsForCurrentUser_FailReason, bool CallFunc_FetchAndGrantPackageFlagsForCurrentUser_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, int32 CallFunc_Array_Length_ReturnValue_1, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, class FText CallFunc_Format_ReturnValue, class UIcarusLogSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_bSuccess, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsConnectedIcarusBackend_ReturnValue, bool CallFunc_IsConnectedIcarusBackend_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_3, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, enum class ELoginFailure K2Node_CustomEvent_ErrorCode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, const struct FReqGetUserProfile& K2Node_MakeStruct_ReqGetUserProfile, class UUMG_ButtonBase_C* K2Node_CustomEvent_Button, class UGetUserProfileCallbackProxyGen* CallFunc_GetUserProfile_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Get_Item, const struct FDLCPackageDataEnum& CallFunc_IntToStruct_ReturnValue, const struct FDLCPackageDataEnum& CallFunc_MakeDLCPackageDataEnum_ReturnValue, class FName CallFunc_StructToName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetIcarusPlayerId_ReturnValue_1, const struct FReqGetUserProfile& K2Node_MakeStruct_ReqGetUserProfile_1, class UGetUserProfileCallbackProxyGen* CallFunc_GetUserProfile_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UDataMigratorManager* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PerformMigrations_ReturnValue, TArray<class UUMG_UserInterface_TitleScreen_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUMG_UserInterface_TitleScreen_C* CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsRunningLocalAdmin_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility K2Node_CustomEvent_InVisibility, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue, bool K2Node_CustomEvent_Value, class FText Temp_text_Variable_2, bool K2Node_CustomEvent_Enabled, enum class EUStreamlineDLSSGMode CallFunc_GetDLSSGMode_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UIcarusGameUserSettings* CallFunc_GetIcarusGameUserSettings_ReturnValue_1, bool CallFunc_GetFrameGeneration_ReturnValue, bool Temp_bool_Variable_3, int32 Temp_int_Loop_Counter_Variable, class FText K2Node_Select_Default_3, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetPakMetaShortMessage_OutMessage, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ConnectingOverlay_C", "ExecuteUbergraph_UMG_ConnectingOverlay");

	Params::UUMG_ConnectingOverlay_C_ExecuteUbergraph_UMG_ConnectingOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPakMetaLongMessage_MessageOut = CallFunc_GetPakMetaLongMessage_MessageOut;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CustomEvent_Response_3 = K2Node_CustomEvent_Response_3;
	Parms.K2Node_CustomEvent_Response_2 = K2Node_CustomEvent_Response_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_Response_1 = K2Node_CustomEvent_Response_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Response = K2Node_CustomEvent_Response;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_FetchAndGrantPackageFlagsForCurrentUser_PackageFlags = CallFunc_FetchAndGrantPackageFlagsForCurrentUser_PackageFlags;
	Parms.CallFunc_FetchAndGrantPackageFlagsForCurrentUser_FailReason = CallFunc_FetchAndGrantPackageFlagsForCurrentUser_FailReason;
	Parms.CallFunc_FetchAndGrantPackageFlagsForCurrentUser_ReturnValue = CallFunc_FetchAndGrantPackageFlagsForCurrentUser_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_3 = CallFunc_GetGameInstanceSubsystem_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_IsConnectedIcarusBackend_ReturnValue = CallFunc_IsConnectedIcarusBackend_ReturnValue;
	Parms.CallFunc_IsConnectedIcarusBackend_ReturnValue_1 = CallFunc_IsConnectedIcarusBackend_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_CustomEvent_Button_1 = K2Node_CustomEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_ErrorCode = K2Node_CustomEvent_ErrorCode;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetIcarusPlayerId_ReturnValue = CallFunc_GetIcarusPlayerId_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeStruct_ReqGetUserProfile = K2Node_MakeStruct_ReqGetUserProfile;
	Parms.K2Node_CustomEvent_Button = K2Node_CustomEvent_Button;
	Parms.CallFunc_GetUserProfile_ReturnValue = CallFunc_GetUserProfile_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_MakeDLCPackageDataEnum_ReturnValue = CallFunc_MakeDLCPackageDataEnum_ReturnValue;
	Parms.CallFunc_StructToName_ReturnValue = CallFunc_StructToName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerId_ReturnValue_1 = CallFunc_GetIcarusPlayerId_ReturnValue_1;
	Parms.K2Node_MakeStruct_ReqGetUserProfile_1 = K2Node_MakeStruct_ReqGetUserProfile_1;
	Parms.CallFunc_GetUserProfile_ReturnValue_1 = CallFunc_GetUserProfile_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_PerformMigrations_ReturnValue = CallFunc_PerformMigrations_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_IsRunningLocalAdmin_ReturnValue = CallFunc_IsRunningLocalAdmin_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CustomEvent_InVisibility = K2Node_CustomEvent_InVisibility;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue = CallFunc_GetIcarusGameUserSettings_ReturnValue;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CustomEvent_Enabled = K2Node_CustomEvent_Enabled;
	Parms.CallFunc_GetDLSSGMode_ReturnValue = CallFunc_GetDLSSGMode_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetIcarusGameUserSettings_ReturnValue_1 = CallFunc_GetIcarusGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetFrameGeneration_ReturnValue = CallFunc_GetFrameGeneration_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPakMetaShortMessage_OutMessage = CallFunc_GetPakMetaShortMessage_OutMessage;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


