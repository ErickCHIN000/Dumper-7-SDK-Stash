#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FeedBackMenu.WBP_FeedbackMenu_C
// (None)

class UClass* UWBP_FeedbackMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FeedbackMenu_C");

	return Clss;
}


// WBP_FeedbackMenu_C WBP_FeedBackMenu.Default__WBP_FeedbackMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FeedbackMenu_C* UWBP_FeedbackMenu_C::GetDefaultObj()
{
	static class UWBP_FeedbackMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FeedbackMenu_C*>(UWBP_FeedbackMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.GetTextToSend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsDateTime_DateTime_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)

class FString UWBP_FeedbackMenu_C::GetTextToSend(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_AsDateTime_DateTime_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "GetTextToSend");

	Params::UWBP_FeedbackMenu_C_GetTextToSend_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_AsDateTime_DateTime_ReturnValue = CallFunc_AsDateTime_DateTime_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.Get_TestText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetTextToSend_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWBP_FeedbackMenu_C::Get_TestText_Text_0(const class FString& CallFunc_GetTextToSend_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "Get_TestText_Text_0");

	Params::UWBP_FeedbackMenu_C_Get_TestText_Text_0_Params Parms{};

	Parms.CallFunc_GetTextToSend_ReturnValue = CallFunc_GetTextToSend_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.FailedToSendEmail_4F0475C44D3891686830058B504EED22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FeedbackMenu_C::FailedToSendEmail_4F0475C44D3891686830058B504EED22(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "FailedToSendEmail_4F0475C44D3891686830058B504EED22");

	Params::UWBP_FeedbackMenu_C_FailedToSendEmail_4F0475C44D3891686830058B504EED22_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.EmailSent_4F0475C44D3891686830058B504EED22
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FeedbackMenu_C::EmailSent_4F0475C44D3891686830058B504EED22(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "EmailSent_4F0475C44D3891686830058B504EED22");

	Params::UWBP_FeedbackMenu_C_EmailSent_4F0475C44D3891686830058B504EED22_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FeedbackMenu_C::FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9");

	Params::UWBP_FeedbackMenu_C_FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.EmailSent_C21F788940184ED8FAA72C850F56D3C9
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FeedbackMenu_C::EmailSent_C21F788940184ED8FAA72C850F56D3C9(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "EmailSent_C21F788940184ED8FAA72C850F56D3C9");

	Params::UWBP_FeedbackMenu_C_EmailSent_C21F788940184ED8FAA72C850F56D3C9_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_FeedbackMenu_C::BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FeedbackMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.SendMail
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                      AttachedFilesData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FeedbackMenu_C::SendMail(TArray<uint8>& AttachedFilesData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "SendMail");

	Params::UWBP_FeedbackMenu_C_SendMail_Params Parms{};

	Parms.AttachedFilesData = AttachedFilesData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.ImageRecieved
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                      Image                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FeedbackMenu_C::ImageRecieved(TArray<uint8>& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "ImageRecieved");

	Params::UWBP_FeedbackMenu_C_ImageRecieved_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FeedBackMenu.WBP_FeedbackMenu_C.ExecuteUbergraph_WBP_FeedbackMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<uint8>                      K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class FString>              Temp_string_Variable                                             (ConstParm, ReferenceParm)
// TArray<class FString>              Temp_string_Variable_1                                           (ConstParm, ReferenceParm)
// int32                              K2Node_CustomEvent_ErrorCode_3                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_ErrorCode_2                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_ErrorCode_1                                   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ErrorCode                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UScreenshotTaker*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Temp_string_Variable_2                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetTextToSend_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// TArray<class FString>              Temp_string_Variable_3                                           (ConstParm, ReferenceParm)
// TArray<class FString>              Temp_string_Variable_4                                           (ConstParm, ReferenceParm)
// TArray<uint8>                      K2Node_CustomEvent_AttachedFilesData                             (ConstParm, ReferenceParm)
// TArray<class FString>              Temp_string_Variable_5                                           (ConstParm, ReferenceParm)
// class FString                      CallFunc_GetTextToSend_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class USendEmailWithGmailProxy*    CallFunc_SendEmailWithGmail_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USendEmailWithGmailProxy*    CallFunc_SendEmailWithGmail_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<uint8>                      K2Node_CustomEvent_Image                                         (ConstParm, ReferenceParm)
// TArray<uint8>                      K2Node_MakeArray_Array_2                                         (ConstParm, ReferenceParm)

void UWBP_FeedbackMenu_C::ExecuteUbergraph_WBP_FeedbackMenu(int32 EntryPoint, TArray<uint8>& K2Node_MakeArray_Array, TArray<class FString>& Temp_string_Variable, TArray<class FString>& Temp_string_Variable_1, int32 K2Node_CustomEvent_ErrorCode_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ErrorCode_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_ErrorCode_1, int32 K2Node_CustomEvent_ErrorCode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable_1, class UScreenshotTaker* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsChecked_ReturnValue, TArray<class FString>& Temp_string_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_GetTextToSend_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& Temp_string_Variable_3, TArray<class FString>& Temp_string_Variable_4, TArray<uint8>& K2Node_CustomEvent_AttachedFilesData, TArray<class FString>& Temp_string_Variable_5, const class FString& CallFunc_GetTextToSend_ReturnValue_1, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<uint8>& K2Node_CustomEvent_Image, TArray<uint8>& K2Node_MakeArray_Array_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FeedbackMenu_C", "ExecuteUbergraph_WBP_FeedbackMenu");

	Params::UWBP_FeedbackMenu_C_ExecuteUbergraph_WBP_FeedbackMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_CustomEvent_ErrorCode_3 = K2Node_CustomEvent_ErrorCode_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_ErrorCode_2 = K2Node_CustomEvent_ErrorCode_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_ErrorCode_1 = K2Node_CustomEvent_ErrorCode_1;
	Parms.K2Node_CustomEvent_ErrorCode = K2Node_CustomEvent_ErrorCode;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetTextToSend_ReturnValue = CallFunc_GetTextToSend_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.K2Node_CustomEvent_AttachedFilesData = K2Node_CustomEvent_AttachedFilesData;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.CallFunc_GetTextToSend_ReturnValue_1 = CallFunc_GetTextToSend_ReturnValue_1;
	Parms.CallFunc_SendEmailWithGmail_ReturnValue = CallFunc_SendEmailWithGmail_ReturnValue;
	Parms.CallFunc_SendEmailWithGmail_ReturnValue_1 = CallFunc_SendEmailWithGmail_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Image = K2Node_CustomEvent_Image;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


