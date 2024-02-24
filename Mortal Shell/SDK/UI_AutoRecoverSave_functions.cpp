#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_AutoRecoverSave.UI_AutoRecoverSave_C
// (None)

class UClass* UUI_AutoRecoverSave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_AutoRecoverSave_C");

	return Clss;
}


// UI_AutoRecoverSave_C UI_AutoRecoverSave.Default__UI_AutoRecoverSave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_AutoRecoverSave_C* UUI_AutoRecoverSave_C::GetDefaultObj()
{
	static class UUI_AutoRecoverSave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_AutoRecoverSave_C*>(UUI_AutoRecoverSave_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.UpdateMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_CheckAllSaves_SaveExist                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_AutoRecoverSave_C::UpdateMainMenu(bool CallFunc_CheckAllSaves_SaveExist)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "UpdateMainMenu");

	Params::UUI_AutoRecoverSave_C_UpdateMainMenu_Params Parms{};

	Parms.CallFunc_CheckAllSaves_SaveExist = CallFunc_CheckAllSaves_SaveExist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.ShowSlotsLackingSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::ShowSlotsLackingSave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "ShowSlotsLackingSave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.FixTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_AutoRecoverSave_C::FixTime(int32 Input, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "FixTime");

	Params::UUI_AutoRecoverSave_C_FixTime_Params Parms{};

	Parms.Input = Input;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Get Date Time Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   InDateTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_3                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixTime_ReturnValue_4                                   (ZeroConstructor, HasGetValueTypeHash)
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
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_AutoRecoverSave_C::Get_Date_Time_Text(const struct FDateTime& InDateTime, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_FixTime_ReturnValue_3, const class FString& CallFunc_FixTime_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Get Date Time Text");

	Params::UUI_AutoRecoverSave_C_Get_Date_Time_Text_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_FixTime_ReturnValue = CallFunc_FixTime_ReturnValue;
	Parms.CallFunc_FixTime_ReturnValue_1 = CallFunc_FixTime_ReturnValue_1;
	Parms.CallFunc_FixTime_ReturnValue_2 = CallFunc_FixTime_ReturnValue_2;
	Parms.CallFunc_FixTime_ReturnValue_3 = CallFunc_FixTime_ReturnValue_3;
	Parms.CallFunc_FixTime_ReturnValue_4 = CallFunc_FixTime_ReturnValue_4;
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
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.LoadBackupDate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Get_Date_Time_Text_ReturnValue                          (None)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Get_Date_Time_Text_ReturnValue_1                        (None)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Get_Date_Time_Text_ReturnValue_2                        (None)

void UUI_AutoRecoverSave_C::LoadBackupDate(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, class FText CallFunc_Get_Date_Time_Text_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_1, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Get_Date_Time_Text_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_2, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game_2, bool K2Node_DynamicCast_bSuccess_2, class FText CallFunc_Get_Date_Time_Text_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "LoadBackupDate");

	Params::UUI_AutoRecoverSave_C_LoadBackupDate_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_Get_Date_Time_Text_ReturnValue = CallFunc_Get_Date_Time_Text_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue_1 = CallFunc_DHLoadGameFromSlot_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsServer_Save_Game_1 = K2Node_DynamicCast_AsServer_Save_Game_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Date_Time_Text_ReturnValue_1 = CallFunc_Get_Date_Time_Text_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue_2 = CallFunc_GetInstance_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue_2 = CallFunc_DHLoadGameFromSlot_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsServer_Save_Game_2 = K2Node_DynamicCast_AsServer_Save_Game_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Get_Date_Time_Text_ReturnValue_2 = CallFunc_Get_Date_Time_Text_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.OnOpen_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::OnOpen_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "OnOpen_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.OnOpenAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::OnOpenAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "OnOpenAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Nav_Back_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::Nav_Back_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Nav_Back_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Nav_Back_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::Nav_Back_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Nav_Back_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Nav_Confirm_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::Nav_Confirm_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Nav_Confirm_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Nav_Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::Nav_Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Nav_Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.AutoRestore_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::AutoRestore_1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "AutoRestore_1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.RestoreInProgress_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::RestoreInProgress_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "RestoreInProgress_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.RestoreInProgress_Check
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::RestoreInProgress_Check()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "RestoreInProgress_Check");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.AutoRestore_2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::AutoRestore_2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "AutoRestore_2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.AutoRestore_3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::AutoRestore_3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "AutoRestore_3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.AutoRestore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::AutoRestore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "AutoRestore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.OnCloseAnimFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_AutoRecoverSave_C::OnCloseAnimFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "OnCloseAnimFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_AutoRecoverSave.UI_AutoRecoverSave_C.ExecuteUbergraph_UI_AutoRecoverSave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRestoreOperationInProgress_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_AutoRecoverSave_C::ExecuteUbergraph_UI_AutoRecoverSave(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsRestoreOperationInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_AutoRecoverSave_C", "ExecuteUbergraph_UI_AutoRecoverSave");

	Params::UUI_AutoRecoverSave_C_ExecuteUbergraph_UI_AutoRecoverSave_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_IsRestoreOperationInProgress_ReturnValue = CallFunc_IsRestoreOperationInProgress_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


