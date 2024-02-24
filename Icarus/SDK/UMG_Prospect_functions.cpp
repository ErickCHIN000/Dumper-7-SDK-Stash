#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Prospect.UMG_Prospect_C
// (None)

class UClass* UUMG_Prospect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Prospect_C");

	return Clss;
}


// UMG_Prospect_C UMG_Prospect.Default__UMG_Prospect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Prospect_C* UUMG_Prospect_C::GetDefaultObj()
{
	static class UUMG_Prospect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Prospect_C*>(UUMG_Prospect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Prospect.UMG_Prospect_C.UpdateFavoriteState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Toggled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Prospect_C::UpdateFavoriteState(bool Toggled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "UpdateFavoriteState");

	Params::UUMG_Prospect_C_UpdateFavoriteState_Params Parms{};

	Parms.Toggled = Toggled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.UpdatePing
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUMG_Prospect_C::UpdatePing(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "UpdatePing");

	Params::UUMG_Prospect_C_UpdatePing_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.GetProspectDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMissionDifficulty      Difficulty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowName                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Prospect_C::GetProspectDifficulty(enum class EMissionDifficulty Difficulty, class FName* RowName, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "GetProspectDifficulty");

	Params::UUMG_Prospect_C_GetProspectDifficulty_Params Parms{};

	Parms.Difficulty = Difficulty;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RowName != nullptr)
		*RowName = Parms.RowName;

}


// Function UMG_Prospect.UMG_Prospect_C.UpdateToolTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ToolTipText                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Prospect_C::UpdateToolTip(class FText ToolTipText, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "UpdateToolTip");

	Params::UUMG_Prospect_C_UpdateToolTip_Params Parms{};

	Parms.ToolTipText = ToolTipText;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ProspectState         NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFProspectPinState          CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State          (HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Prospect_C::SetState(enum class E_ProspectState NewState, enum class E_ButtonState Temp_byte_Variable, const struct FFProspectPinState& CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "SetState");

	Params::UUMG_Prospect_C_SetState_Params Parms{};

	Parms.NewState = NewState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State = CallFunc_Get_Prospect_Pin_State_Data_Prospect_Pin_State;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.GetTimeRemaining
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRemainingProspectTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FormatRawSecondsToTimeLength_Formatted                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUMG_Prospect_C::GetTimeRemaining(class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, int32 CallFunc_GetRemainingProspectTime_ReturnValue, const class FString& CallFunc_FormatRawSecondsToTimeLength_Formatted, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "GetTimeRemaining");

	Params::UUMG_Prospect_C_GetTimeRemaining_Params Parms{};

	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_GetRemainingProspectTime_ReturnValue = CallFunc_GetRemainingProspectTime_ReturnValue;
	Parms.CallFunc_FormatRawSecondsToTimeLength_Formatted = CallFunc_FormatRawSecondsToTimeLength_Formatted;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Prospect.UMG_Prospect_C.UpdateProspectInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FString                      CallFunc_GetSessionVersion_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSessionVersion_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// enum class EMissionDifficulty      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_4                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_4                                    (None)
// class FString                      CallFunc_GetSessionName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class UVersionSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_GetFormattedVersion_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_IsInLobby_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFactionMissionsRowHandle   CallFunc_GetFactionMissionRow_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectInfo               CallFunc_GetProspectInfo_ReturnValue                             (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectListRowHandle      CallFunc_GetProspectRow_ReturnValue                              (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetProspectDifficulty_RowName                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFDifficultyColour          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_5                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_5                                    (None)
// int32                              CallFunc_GetMaxPlayerCount_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// int32                              CallFunc_GetPingInMs_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerCount_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_6                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_6                                    (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Prospect_C::UpdateProspectInfo(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_GetSessionVersion_ReturnValue, const class FString& CallFunc_GetSessionVersion_ReturnValue_1, enum class EMissionDifficulty Temp_byte_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_4, class FText CallFunc_Format_ReturnValue_4, const class FString& CallFunc_GetSessionName_ReturnValue, class UVersionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_GetFormattedVersion_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_IsInLobby_ReturnValue, const struct FFactionMissionsRowHandle& CallFunc_GetFactionMissionRow_ReturnValue, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, const struct FProspectInfo& CallFunc_GetProspectInfo_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FProspectListRowHandle& CallFunc_GetProspectRow_ReturnValue, class FText K2Node_Select_Default, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, class FName CallFunc_GetProspectDifficulty_RowName, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFDifficultyColour& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_TextToUpper_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_5, class FText CallFunc_Format_ReturnValue_5, int32 CallFunc_GetMaxPlayerCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, int32 CallFunc_GetPingInMs_ReturnValue, int32 CallFunc_GetPlayerCount_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_6, class FText CallFunc_Format_ReturnValue_6, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "UpdateProspectInfo");

	Params::UUMG_Prospect_C_UpdateProspectInfo_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_GetSessionVersion_ReturnValue = CallFunc_GetSessionVersion_ReturnValue;
	Parms.CallFunc_GetSessionVersion_ReturnValue_1 = CallFunc_GetSessionVersion_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Format_ReturnValue_4 = CallFunc_Format_ReturnValue_4;
	Parms.CallFunc_GetSessionName_ReturnValue = CallFunc_GetSessionName_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_GetFormattedVersion_ReturnValue = CallFunc_GetFormattedVersion_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_IsInLobby_ReturnValue = CallFunc_IsInLobby_ReturnValue;
	Parms.CallFunc_GetFactionMissionRow_ReturnValue = CallFunc_GetFactionMissionRow_ReturnValue;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.CallFunc_GetProspectInfo_ReturnValue = CallFunc_GetProspectInfo_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetProspectRow_ReturnValue = CallFunc_GetProspectRow_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.CallFunc_GetProspectDifficulty_RowName = CallFunc_GetProspectDifficulty_RowName;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.CallFunc_Format_ReturnValue_5 = CallFunc_Format_ReturnValue_5;
	Parms.CallFunc_GetMaxPlayerCount_ReturnValue = CallFunc_GetMaxPlayerCount_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.CallFunc_GetPingInMs_ReturnValue = CallFunc_GetPingInMs_ReturnValue;
	Parms.CallFunc_GetPlayerCount_ReturnValue = CallFunc_GetPlayerCount_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.CallFunc_Format_ReturnValue_6 = CallFunc_Format_ReturnValue_6;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Prospect_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BP_OnItemExpansionChanged");

	Params::UUMG_Prospect_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Prospect_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BP_OnItemSelectionChanged");

	Params::UUMG_Prospect_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Prospect_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "OnListItemObjectSet");

	Params::UUMG_Prospect_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.UpdateTextColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Prospect_C::UpdateTextColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "UpdateTextColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Prospect_C::BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature");

	Params::UUMG_Prospect_C_BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Prospect_C::BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature");

	Params::UUMG_Prospect_C_BndEvt__UMG_Prospect_UMG_ToggleButton_Favorites_361_K2Node_ComponentBoundEvent_1_Untoggled__DelegateSignature_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Prospect.UMG_Prospect_C.ExecuteUbergraph_UMG_Prospect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchmakingSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusSessionResult*        K2Node_DynamicCast_AsIcarus_Session_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPressed_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class E_ButtonState           K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           K2Node_Select_Default_1                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOuterObject_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_HostProspectsList_C*    K2Node_DynamicCast_AsUMG_Host_Prospects_List                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFProspectServerInfo        K2Node_MakeStruct_FProspectServerInfo                            (HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_ComponentBoundEvent_ToggleButton                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// bool                               CallFunc_RemoveFavoriteServer_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddFavoriteServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFavoriteServer_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Prospect_C::ExecuteUbergraph_UMG_Prospect(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UMatchmakingSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UIcarusSessionResult* K2Node_DynamicCast_AsIcarus_Session_Result, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, enum class E_ButtonState K2Node_Select_Default, enum class E_ButtonState K2Node_Select_Default_1, const struct FSlateColor& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool Temp_bool_Variable_3, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_Select_Default_2, class UObject* CallFunc_GetOuterObject_ReturnValue, class UObject* CallFunc_GetOuterObject_ReturnValue_1, class UUMG_HostProspectsList_C* K2Node_DynamicCast_AsUMG_Host_Prospects_List, bool K2Node_DynamicCast_bSuccess_1, const struct FFProspectServerInfo& K2Node_MakeStruct_FProspectServerInfo, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_ComponentBoundEvent_ToggleButton, class FText Temp_text_Variable, bool CallFunc_RemoveFavoriteServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_AddFavoriteServer_ReturnValue, bool CallFunc_IsFavoriteServer_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Prospect_C", "ExecuteUbergraph_UMG_Prospect");

	Params::UUMG_Prospect_C_ExecuteUbergraph_UMG_Prospect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_2 = CallFunc_MakeLiteralByte_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsIcarus_Session_Result = K2Node_DynamicCast_AsIcarus_Session_Result;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsPressed_ReturnValue = CallFunc_IsPressed_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetOuterObject_ReturnValue = CallFunc_GetOuterObject_ReturnValue;
	Parms.CallFunc_GetOuterObject_ReturnValue_1 = CallFunc_GetOuterObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsUMG_Host_Prospects_List = K2Node_DynamicCast_AsUMG_Host_Prospects_List;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_MakeStruct_FProspectServerInfo = K2Node_MakeStruct_FProspectServerInfo;
	Parms.K2Node_ComponentBoundEvent_ToggleButton_1 = K2Node_ComponentBoundEvent_ToggleButton_1;
	Parms.K2Node_ComponentBoundEvent_ToggleButton = K2Node_ComponentBoundEvent_ToggleButton;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_RemoveFavoriteServer_ReturnValue = CallFunc_RemoveFavoriteServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_AddFavoriteServer_ReturnValue = CallFunc_AddFavoriteServer_ReturnValue;
	Parms.CallFunc_IsFavoriteServer_ReturnValue = CallFunc_IsFavoriteServer_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


