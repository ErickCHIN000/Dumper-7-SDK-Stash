#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BFL_SaveGames.BFL_SaveGames_C
// (None)

class UClass* UBFL_SaveGames_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BFL_SaveGames_C");

	return Clss;
}


// BFL_SaveGames_C BFL_SaveGames.Default__BFL_SaveGames_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBFL_SaveGames_C* UBFL_SaveGames_C::GetDefaultObj()
{
	static class UBFL_SaveGames_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBFL_SaveGames_C*>(UBFL_SaveGames_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BFL_SaveGames.BFL_SaveGames_C.ZeroFill
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Int                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Out                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      LeadingZero                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_SaveGames_C::ZeroFill(int32 Int, class UObject* __WorldContext, class FString* Out, const class FString& LeadingZero, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "ZeroFill");

	Params::UBFL_SaveGames_C_ZeroFill_Params Parms{};

	Parms.Int = Int;
	Parms.__WorldContext = __WorldContext;
	Parms.LeadingZero = LeadingZero;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = std::move(Parms.Out);

}


// Function BFL_SaveGames.BFL_SaveGames_C.DateToString_AutoSave
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   InDateTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ZeroFill_Out                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ZeroFill_Out_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ZeroFill_Out_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ZeroFill_Out_3                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_DateMonth_Date                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

class FString UBFL_SaveGames_C::DateToString_AutoSave(const struct FDateTime& InDateTime, class UObject* __WorldContext, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_ZeroFill_Out, const class FString& CallFunc_ZeroFill_Out_1, const class FString& CallFunc_ZeroFill_Out_2, const class FString& CallFunc_ZeroFill_Out_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_DateMonth_Date, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "DateToString_AutoSave");

	Params::UBFL_SaveGames_C_DateToString_AutoSave_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_ZeroFill_Out = CallFunc_ZeroFill_Out;
	Parms.CallFunc_ZeroFill_Out_1 = CallFunc_ZeroFill_Out_1;
	Parms.CallFunc_ZeroFill_Out_2 = CallFunc_ZeroFill_Out_2;
	Parms.CallFunc_ZeroFill_Out_3 = CallFunc_ZeroFill_Out_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_DateMonth_Date = CallFunc_DateMonth_Date;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BFL_SaveGames.BFL_SaveGames_C.DateMonth
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Month                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Date                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Text                                                             (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_SaveGames_C::DateMonth(int32 Month, class UObject* __WorldContext, class FName* Date, const class FString& Text, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "DateMonth");

	Params::UBFL_SaveGames_C_DateMonth_Params Parms{};

	Parms.Month = Month;
	Parms.__WorldContext = __WorldContext;
	Parms.Text = Text;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Date != nullptr)
		*Date = Parms.Date;

}


// Function BFL_SaveGames.BFL_SaveGames_C.Reset Player Stats
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*       Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPGameMode_C*            CallFunc_GetGameMode_GameMode                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_MPPlayerController_C*    CallFunc_CastToController_Controller                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBFL_SaveGames_C::Reset_Player_Stats(class ABP_PlayerCharacter_C* Player, class UObject* __WorldContext, class ABP_MPGameMode_C* CallFunc_GetGameMode_GameMode, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "Reset Player Stats");

	Params::UBFL_SaveGames_C_Reset_Player_Stats_Params Parms{};

	Parms.Player = Player;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameMode_GameMode = CallFunc_GetGameMode_GameMode;
	Parms.CallFunc_CastToController_Controller = CallFunc_CastToController_Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BFL_SaveGames.BFL_SaveGames_C.Save Custom Objects
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_General_C*             CallFunc_GetCustomSave_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_General_C*             CallFunc_GetCustomSave_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveCustom_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUltra_Dynamic_Sky_C*        CallFunc_GetUDS_UDS                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USave_Player_C*              CallFunc_GetCustomSave_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FUDS_and_UDW_State          CallFunc_Create_UDS_and_UDW_State_for_Saving_Packaged_State      (HasGetValueTypeHash)
// bool                               CallFunc_SaveCustom_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USave_Difficulties_C*        CallFunc_GetCustomSave_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SaveCustom_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_SaveGames_C::Save_Custom_Objects(class UObject* __WorldContext, class USave_General_C* CallFunc_GetCustomSave_ReturnValue, class USave_General_C* CallFunc_GetCustomSave_ReturnValue_1, bool CallFunc_SaveCustom_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_2, const struct FUDS_and_UDW_State& CallFunc_Create_UDS_and_UDW_State_for_Saving_Packaged_State, bool CallFunc_SaveCustom_ReturnValue_1, class USave_Difficulties_C* CallFunc_GetCustomSave_ReturnValue_3, bool CallFunc_SaveCustom_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "Save Custom Objects");

	Params::UBFL_SaveGames_C_Save_Custom_Objects_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCustomSave_ReturnValue = CallFunc_GetCustomSave_ReturnValue;
	Parms.CallFunc_GetCustomSave_ReturnValue_1 = CallFunc_GetCustomSave_ReturnValue_1;
	Parms.CallFunc_SaveCustom_ReturnValue = CallFunc_SaveCustom_ReturnValue;
	Parms.CallFunc_GetUDS_UDS = CallFunc_GetUDS_UDS;
	Parms.CallFunc_GetCustomSave_ReturnValue_2 = CallFunc_GetCustomSave_ReturnValue_2;
	Parms.CallFunc_Create_UDS_and_UDW_State_for_Saving_Packaged_State = CallFunc_Create_UDS_and_UDW_State_for_Saving_Packaged_State;
	Parms.CallFunc_SaveCustom_ReturnValue_1 = CallFunc_SaveCustom_ReturnValue_1;
	Parms.CallFunc_GetCustomSave_ReturnValue_3 = CallFunc_GetCustomSave_ReturnValue_3;
	Parms.CallFunc_SaveCustom_ReturnValue_2 = CallFunc_SaveCustom_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BFL_SaveGames.BFL_SaveGames_C.SaveThumbnailImage
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    CaptureComp                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      TempActor                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSlotInfoSaveGame_SaveGameName                        (ZeroConstructor, HasGetValueTypeHash)
// class UEMSInfoSaveGame*            CallFunc_GetSlotInfoSaveGame_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneCaptureComponent2D*    CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ComponentHasTag_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBFL_SaveGames_C::SaveThumbnailImage(class UObject* __WorldContext, class USceneCaptureComponent2D* CaptureComp, class AActor* TempActor, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class USceneCaptureComponent2D* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_ComponentHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "SaveThumbnailImage");

	Params::UBFL_SaveGames_C_SaveThumbnailImage_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CaptureComp = CaptureComp;
	Parms.TempActor = TempActor;
	Parms.CallFunc_GetSlotInfoSaveGame_SaveGameName = CallFunc_GetSlotInfoSaveGame_SaveGameName;
	Parms.CallFunc_GetSlotInfoSaveGame_ReturnValue = CallFunc_GetSlotInfoSaveGame_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_ComponentHasTag_ReturnValue = CallFunc_ComponentHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BFL_SaveGames.BFL_SaveGames_C.DateStringPrefix
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UBFL_SaveGames_C::DateStringPrefix(int32 A, class UObject* __WorldContext, bool Temp_bool_Variable, bool CallFunc_Less_IntInt_ReturnValue, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "DateStringPrefix");

	Params::UBFL_SaveGames_C_DateStringPrefix_Params Parms{};

	Parms.A = A;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BFL_SaveGames.BFL_SaveGames_C.DateToString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   InDateTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_DateMonth_Date                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_DateStringPrefix_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_DateStringPrefix_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_DateStringPrefix_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Name_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue_2                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_BuildString_Int_ReturnValue_3                           (ZeroConstructor, HasGetValueTypeHash)

class FString UBFL_SaveGames_C::DateToString(const struct FDateTime& InDateTime, class UObject* __WorldContext, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, class FName CallFunc_DateMonth_Date, const class FString& CallFunc_DateStringPrefix_ReturnValue, const class FString& CallFunc_DateStringPrefix_ReturnValue_1, const class FString& CallFunc_DateStringPrefix_ReturnValue_2, const class FString& CallFunc_BuildString_Int_ReturnValue, const class FString& CallFunc_BuildString_Name_ReturnValue, const class FString& CallFunc_BuildString_Int_ReturnValue_1, const class FString& CallFunc_BuildString_Int_ReturnValue_2, const class FString& CallFunc_BuildString_Int_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BFL_SaveGames_C", "DateToString");

	Params::UBFL_SaveGames_C_DateToString_Params Parms{};

	Parms.InDateTime = InDateTime;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_DateMonth_Date = CallFunc_DateMonth_Date;
	Parms.CallFunc_DateStringPrefix_ReturnValue = CallFunc_DateStringPrefix_ReturnValue;
	Parms.CallFunc_DateStringPrefix_ReturnValue_1 = CallFunc_DateStringPrefix_ReturnValue_1;
	Parms.CallFunc_DateStringPrefix_ReturnValue_2 = CallFunc_DateStringPrefix_ReturnValue_2;
	Parms.CallFunc_BuildString_Int_ReturnValue = CallFunc_BuildString_Int_ReturnValue;
	Parms.CallFunc_BuildString_Name_ReturnValue = CallFunc_BuildString_Name_ReturnValue;
	Parms.CallFunc_BuildString_Int_ReturnValue_1 = CallFunc_BuildString_Int_ReturnValue_1;
	Parms.CallFunc_BuildString_Int_ReturnValue_2 = CallFunc_BuildString_Int_ReturnValue_2;
	Parms.CallFunc_BuildString_Int_ReturnValue_3 = CallFunc_BuildString_Int_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


