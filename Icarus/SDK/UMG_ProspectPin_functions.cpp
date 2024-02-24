#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProspectPin.UMG_ProspectPin_C
// (None)

class UClass* UUMG_ProspectPin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProspectPin_C");

	return Clss;
}


// UMG_ProspectPin_C UMG_ProspectPin.Default__UMG_ProspectPin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProspectPin_C* UUMG_ProspectPin_C::GetDefaultObj()
{
	static class UUMG_ProspectPin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProspectPin_C*>(UUMG_ProspectPin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProspectPin.UMG_ProspectPin_C.SetHoverdPrompt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ProspectState         ProspectState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 OccupiedColour                                                   (Edit, BlueprintVisible)
// struct FSlateColor                 JoinColour                                                       (Edit, BlueprintVisible)
// struct FSlateColor                 SettledColour                                                    (Edit, BlueprintVisible)
// struct FSlateColor                 ClaimedColour                                                    (Edit, BlueprintVisible)
// struct FSlateColor                 HostColour                                                       (Edit, BlueprintVisible)
// struct FSlateColor                 InactiveColour                                                   (Edit, BlueprintVisible)
// struct FSlateBrush                 OccupiedButton                                                   (Edit, BlueprintVisible)
// struct FSlateBrush                 JoinButton                                                       (Edit, BlueprintVisible)
// struct FSlateBrush                 SettledButton                                                    (Edit, BlueprintVisible)
// struct FSlateBrush                 ClaimedButton                                                    (Edit, BlueprintVisible)
// struct FSlateBrush                 HostButton                                                       (Edit, BlueprintVisible)
// struct FSlateBrush                 InactiveButton                                                   (Edit, BlueprintVisible)
// enum class E_ProspectState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ProspectState         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// enum class E_ProspectState         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateBrush                 K2Node_Select_Default_2                                          (ConstParm)

void UUMG_ProspectPin_C::SetHoverdPrompt(enum class E_ProspectState ProspectState, const struct FSlateColor& OccupiedColour, const struct FSlateColor& JoinColour, const struct FSlateColor& SettledColour, const struct FSlateColor& ClaimedColour, const struct FSlateColor& HostColour, const struct FSlateColor& InactiveColour, const struct FSlateBrush& OccupiedButton, const struct FSlateBrush& JoinButton, const struct FSlateBrush& SettledButton, const struct FSlateBrush& ClaimedButton, const struct FSlateBrush& HostButton, const struct FSlateBrush& InactiveButton, enum class E_ProspectState Temp_byte_Variable, enum class E_ProspectState Temp_byte_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, enum class E_ProspectState Temp_byte_Variable_2, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "SetHoverdPrompt");

	Params::UUMG_ProspectPin_C_SetHoverdPrompt_Params Parms{};

	Parms.ProspectState = ProspectState;
	Parms.OccupiedColour = OccupiedColour;
	Parms.JoinColour = JoinColour;
	Parms.SettledColour = SettledColour;
	Parms.ClaimedColour = ClaimedColour;
	Parms.HostColour = HostColour;
	Parms.InactiveColour = InactiveColour;
	Parms.OccupiedButton = OccupiedButton;
	Parms.JoinButton = JoinButton;
	Parms.SettledButton = SettledButton;
	Parms.ClaimedButton = ClaimedButton;
	Parms.HostButton = HostButton;
	Parms.InactiveButton = InactiveButton;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.SetPromptText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ProspectState         ProspectState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Claimed                                                          (Edit, BlueprintVisible)
// class FText                        Inactive                                                         (Edit, BlueprintVisible)
// class FText                        Settled                                                          (Edit, BlueprintVisible)
// class FText                        Occupied                                                         (Edit, BlueprintVisible)
// class FText                        Join_In_Progress                                                 (Edit, BlueprintVisible)
// class FText                        Begin_Hosting                                                    (Edit, BlueprintVisible)
// enum class E_ProspectState         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (ConstParm)

void UUMG_ProspectPin_C::SetPromptText(enum class E_ProspectState ProspectState, class FText Claimed, class FText Inactive, class FText Settled, class FText Occupied, class FText Join_In_Progress, class FText Begin_Hosting, enum class E_ProspectState Temp_byte_Variable, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "SetPromptText");

	Params::UUMG_ProspectPin_C_SetPromptText_Params Parms{};

	Parms.ProspectState = ProspectState;
	Parms.Claimed = Claimed;
	Parms.Inactive = Inactive;
	Parms.Settled = Settled;
	Parms.Occupied = Occupied;
	Parms.Join_In_Progress = Join_In_Progress;
	Parms.Begin_Hosting = Begin_Hosting;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.SetHasClaimedProspect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectPin_C::SetHasClaimedProspect(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "SetHasClaimedProspect");

	Params::UUMG_ProspectPin_C_SetHasClaimedProspect_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.SetTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)

void UUMG_ProspectPin_C::SetTime(TArray<class FString>& Time, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Array_Get_Item_2, const class FString& CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "SetTime");

	Params::UUMG_ProspectPin_C_SetTime_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_ProspectState         NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectPin_C::SetState(enum class E_ProspectState NewState, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "SetState");

	Params::UUMG_ProspectPin_C_SetState_Params Parms{};

	Parms.NewState = NewState;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.Update Pin Visuals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_PinState              PinState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PinState              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PinState              Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PinState              Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PinState              Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PinState              Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_PinState              Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default_4                                          (None)
// struct FSlateColor                 K2Node_Select_Default_5                                          (None)

void UUMG_ProspectPin_C::Update_Pin_Visuals(enum class E_PinState PinState, enum class E_PinState Temp_byte_Variable, enum class E_PinState Temp_byte_Variable_1, enum class E_PinState Temp_byte_Variable_2, enum class E_PinState Temp_byte_Variable_3, enum class E_PinState Temp_byte_Variable_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FLinearColor& K2Node_Select_Default_3, enum class E_PinState Temp_byte_Variable_5, const struct FSlateColor& K2Node_Select_Default_4, const struct FSlateColor& K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "Update Pin Visuals");

	Params::UUMG_ProspectPin_C_Update_Pin_Visuals_Params Parms{};

	Parms.PinState = PinState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.SetProspectInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UVersionSubsystem*           CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFormattedVersion_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMissionsRowHandle   CallFunc_MakeFactionMissions_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// enum class EIcarusProspectDifficultyTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue_1                          (NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList_1                    (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSession_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxPlayers_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentPlayers_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSession_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FSessionPropertyKeyPair>CallFunc_GetExtraSettings_ExtraSettings                          (ReferenceParm)
// class FString                      CallFunc_GetGameVersionFromExtraSettings_ReturnValue             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_LeftS                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Split_RightS                                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Split_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ProspectState         CallFunc_CalculateProspectState_ProspectState                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUserID_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_4                                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProspectPin_C::SetProspectInfo(const struct FFProspectServerInfo& Prospect, class UVersionSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const class FString& CallFunc_GetFormattedVersion_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetSubstring_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Format_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue_1, const struct FFactionMissionsRowHandle& CallFunc_MakeFactionMissions_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, enum class EIcarusProspectDifficulty Temp_byte_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FName CallFunc_Conv_StringToName_ReturnValue_2, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue_1, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList_1, enum class EValid CallFunc_GetProspectListStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSession_ReturnValue, int32 CallFunc_GetMaxPlayers_ReturnValue, int32 CallFunc_GetCurrentPlayers_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, class FText K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValidSession_ReturnValue_1, TArray<struct FSessionPropertyKeyPair>& CallFunc_GetExtraSettings_ExtraSettings, const class FString& CallFunc_GetGameVersionFromExtraSettings_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue_4, enum class ESlateVisibility Temp_byte_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class E_ProspectState CallFunc_CalculateProspectState_ProspectState, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_3, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const class FString& CallFunc_GetUserID_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText K2Node_Select_Default_4, class FText CallFunc_TextToUpper_ReturnValue_1, bool Temp_bool_Variable_4, enum class ESlateVisibility K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "SetProspectInfo");

	Params::UUMG_ProspectPin_C_SetProspectInfo_Params Parms{};

	Parms.Prospect = Prospect;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetFormattedVersion_ReturnValue = CallFunc_GetFormattedVersion_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = CallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_MakeFactionMissions_ReturnValue = CallFunc_MakeFactionMissions_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = CallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_MakeProspectList_ReturnValue_1 = CallFunc_MakeProspectList_ReturnValue_1;
	Parms.CallFunc_GetProspectListStruct_ProspectList_1 = CallFunc_GetProspectListStruct_ProspectList_1;
	Parms.CallFunc_GetProspectListStruct_Paths_1 = CallFunc_GetProspectListStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsValidSession_ReturnValue = CallFunc_IsValidSession_ReturnValue;
	Parms.CallFunc_GetMaxPlayers_ReturnValue = CallFunc_GetMaxPlayers_ReturnValue;
	Parms.CallFunc_GetCurrentPlayers_ReturnValue = CallFunc_GetCurrentPlayers_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValidSession_ReturnValue_1 = CallFunc_IsValidSession_ReturnValue_1;
	Parms.CallFunc_GetExtraSettings_ExtraSettings = CallFunc_GetExtraSettings_ExtraSettings;
	Parms.CallFunc_GetGameVersionFromExtraSettings_ReturnValue = CallFunc_GetGameVersionFromExtraSettings_ReturnValue;
	Parms.CallFunc_Split_LeftS = CallFunc_Split_LeftS;
	Parms.CallFunc_Split_RightS = CallFunc_Split_RightS;
	Parms.CallFunc_Split_ReturnValue = CallFunc_Split_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_CalculateProspectState_ProspectState = CallFunc_CalculateProspectState_ProspectState;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetUserID_ReturnValue = CallFunc_GetUserID_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ProspectPin_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ProspectPin_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ProspectPin_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "Tick");

	Params::UUMG_ProspectPin_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ProspectPin_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ProspectPin_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_ProspectPin_C::BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.ExecuteUbergraph_UMG_ProspectPin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDateTime                   CallFunc_UtcNow_ReturnValue                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_Int64ToInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDateTime                   CallFunc_ConvertToDateTime_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_FormatTimeLengthDigital_Time                            (ReferenceParm)
// bool                               CallFunc_Less_DateTimeDateTime_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectPin_C::ExecuteUbergraph_UMG_ProspectPin(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, const struct FDateTime& CallFunc_ConvertToDateTime_ReturnValue, TArray<class FString>& CallFunc_FormatTimeLengthDigital_Time, bool CallFunc_Less_DateTimeDateTime_ReturnValue, bool CallFunc_IsHovered_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "ExecuteUbergraph_UMG_ProspectPin");

	Params::UUMG_ProspectPin_C_ExecuteUbergraph_UMG_ProspectPin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_UtcNow_ReturnValue = CallFunc_UtcNow_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue = CallFunc_Conv_Int64ToInt_ReturnValue;
	Parms.CallFunc_Conv_Int64ToInt_ReturnValue_1 = CallFunc_Conv_Int64ToInt_ReturnValue_1;
	Parms.CallFunc_ConvertToDateTime_ReturnValue = CallFunc_ConvertToDateTime_ReturnValue;
	Parms.CallFunc_FormatTimeLengthDigital_Time = CallFunc_FormatTimeLengthDigital_Time;
	Parms.CallFunc_Less_DateTimeDateTime_ReturnValue = CallFunc_Less_DateTimeDateTime_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.ProspectExpired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ProspectPin_C::ProspectExpired__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "ProspectExpired__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ProspectPin.UMG_ProspectPin_C.ProspectSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFProspectServerInfo        Prospect                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ProspectPin_C::ProspectSelected__DelegateSignature(const struct FFProspectServerInfo& Prospect, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectPin_C", "ProspectSelected__DelegateSignature");

	Params::UUMG_ProspectPin_C_ProspectSelected__DelegateSignature_Params Parms{};

	Parms.Prospect = Prospect;
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

}

}


