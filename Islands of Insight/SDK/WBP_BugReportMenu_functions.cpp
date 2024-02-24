#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BugReportMenu.WBP_BugReportMenu_C
// (None)

class UClass* UWBP_BugReportMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BugReportMenu_C");

	return Clss;
}


// WBP_BugReportMenu_C WBP_BugReportMenu.Default__WBP_BugReportMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BugReportMenu_C* UWBP_BugReportMenu_C::GetDefaultObj()
{
	static class UWBP_BugReportMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BugReportMenu_C*>(UWBP_BugReportMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.GetTextToSend
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetText_ReturnValue_1                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_2                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_3                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_4                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_5                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_6                                   (None)
// class FText                        CallFunc_GetText_ReturnValue_7                                   (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_6                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_7                         (ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_Now_ReturnValue                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsDateTime_DateTime_ReturnValue                         (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_8                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)

class FString UWBP_BugReportMenu_C::GetTextToSend(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_GetText_ReturnValue_4, class FText CallFunc_GetText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_GetText_ReturnValue_6, class FText CallFunc_GetText_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, const struct FDateTime& CallFunc_Now_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class FText CallFunc_AsDateTime_DateTime_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "GetTextToSend");

	Params::UWBP_BugReportMenu_C_GetTextToSend_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_GetText_ReturnValue_2 = CallFunc_GetText_ReturnValue_2;
	Parms.CallFunc_GetText_ReturnValue_3 = CallFunc_GetText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_GetText_ReturnValue_4 = CallFunc_GetText_ReturnValue_4;
	Parms.CallFunc_GetText_ReturnValue_5 = CallFunc_GetText_ReturnValue_5;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_GetText_ReturnValue_6 = CallFunc_GetText_ReturnValue_6;
	Parms.CallFunc_GetText_ReturnValue_7 = CallFunc_GetText_ReturnValue_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue_6 = CallFunc_Conv_TextToString_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_7 = CallFunc_Conv_TextToString_ReturnValue_7;
	Parms.CallFunc_Now_ReturnValue = CallFunc_Now_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_AsDateTime_DateTime_ReturnValue = CallFunc_AsDateTime_DateTime_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_8 = CallFunc_Conv_TextToString_ReturnValue_8;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.Get_TestText_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetTextToSend_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWBP_BugReportMenu_C::Get_TestText_Text_0(const class FString& CallFunc_GetTextToSend_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "Get_TestText_Text_0");

	Params::UWBP_BugReportMenu_C_Get_TestText_Text_0_Params Parms{};

	Parms.CallFunc_GetTextToSend_ReturnValue = CallFunc_GetTextToSend_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.FailedToSendEmail_702721C24711106FF138BD9934ACA1CA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BugReportMenu_C::FailedToSendEmail_702721C24711106FF138BD9934ACA1CA(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "FailedToSendEmail_702721C24711106FF138BD9934ACA1CA");

	Params::UWBP_BugReportMenu_C_FailedToSendEmail_702721C24711106FF138BD9934ACA1CA_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.EmailSent_702721C24711106FF138BD9934ACA1CA
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BugReportMenu_C::EmailSent_702721C24711106FF138BD9934ACA1CA(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "EmailSent_702721C24711106FF138BD9934ACA1CA");

	Params::UWBP_BugReportMenu_C_EmailSent_702721C24711106FF138BD9934ACA1CA_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.FailedToSendEmail_F9E5C638429FBC9D37C5B7AC19D4F765
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BugReportMenu_C::FailedToSendEmail_F9E5C638429FBC9D37C5B7AC19D4F765(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "FailedToSendEmail_F9E5C638429FBC9D37C5B7AC19D4F765");

	Params::UWBP_BugReportMenu_C_FailedToSendEmail_F9E5C638429FBC9D37C5B7AC19D4F765_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.EmailSent_F9E5C638429FBC9D37C5B7AC19D4F765
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_BugReportMenu_C::EmailSent_F9E5C638429FBC9D37C5B7AC19D4F765(int32& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "EmailSent_F9E5C638429FBC9D37C5B7AC19D4F765");

	Params::UWBP_BugReportMenu_C_EmailSent_F9E5C638429FBC9D37C5B7AC19D4F765_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BugReportMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_BugReportMenu_C::BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.SendMail
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                      AttachedFilesData                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BugReportMenu_C::SendMail(TArray<uint8>& AttachedFilesData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "SendMail");

	Params::UWBP_BugReportMenu_C_SendMail_Params Parms{};

	Parms.AttachedFilesData = AttachedFilesData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.ImageRecieved
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<uint8>                      Image                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_BugReportMenu_C::ImageRecieved(TArray<uint8>& Image)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "ImageRecieved");

	Params::UWBP_BugReportMenu_C_ImageRecieved_Params Parms{};

	Parms.Image = Image;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BugReportMenu.WBP_BugReportMenu_C.ExecuteUbergraph_WBP_BugReportMenu
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
// TArray<class FString>              Temp_string_Variable_2                                           (ConstParm, ReferenceParm)
// class UScreenshotTaker*            CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              Temp_string_Variable_3                                           (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetTextToSend_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
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

void UWBP_BugReportMenu_C::ExecuteUbergraph_WBP_BugReportMenu(int32 EntryPoint, TArray<uint8>& K2Node_MakeArray_Array, TArray<class FString>& Temp_string_Variable, TArray<class FString>& Temp_string_Variable_1, int32 K2Node_CustomEvent_ErrorCode_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ErrorCode_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_ErrorCode_1, int32 K2Node_CustomEvent_ErrorCode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable_1, TArray<class FString>& Temp_string_Variable_2, class UScreenshotTaker* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsChecked_ReturnValue, TArray<class FString>& Temp_string_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_GetTextToSend_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& Temp_string_Variable_4, TArray<uint8>& K2Node_CustomEvent_AttachedFilesData, TArray<class FString>& Temp_string_Variable_5, const class FString& CallFunc_GetTextToSend_ReturnValue_1, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<uint8>& K2Node_CustomEvent_Image, TArray<uint8>& K2Node_MakeArray_Array_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BugReportMenu_C", "ExecuteUbergraph_WBP_BugReportMenu");

	Params::UWBP_BugReportMenu_C_ExecuteUbergraph_WBP_BugReportMenu_Params Parms{};

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
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetTextToSend_ReturnValue = CallFunc_GetTextToSend_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
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


