#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Talent_Prospect.UMG_Talent_Prospect_C
// (None)

class UClass* UUMG_Talent_Prospect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Talent_Prospect_C");

	return Clss;
}


// UMG_Talent_Prospect_C UMG_Talent_Prospect.Default__UMG_Talent_Prospect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Talent_Prospect_C* UUMG_Talent_Prospect_C::GetDefaultObj()
{
	static class UUMG_Talent_Prospect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Talent_Prospect_C*>(UUMG_Talent_Prospect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetIsOpenWorld
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOpenWorld                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Prospect_C::SetIsOpenWorld(bool IsOpenWorld, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "SetIsOpenWorld");

	Params::UUMG_Talent_Prospect_C_SetIsOpenWorld_Params Parms{};

	Parms.IsOpenWorld = IsOpenWorld;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetFlavourText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Prospect_C::SetFlavourText(class FText InText, bool Temp_bool_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "SetFlavourText");

	Params::UUMG_Talent_Prospect_C_SetFlavourText_Params Parms{};

	Parms.InText = InText;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetProspectColour
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETalentProspectButtonStateState                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentProspectButtonStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentProspectButtonStateTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentProspectButtonStateTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_4                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_5                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_6                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_7                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_8                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_9                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_10                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_11                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_12                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_13                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_14                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_15                                  (None)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_16                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_17                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_18                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_19                                  (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_20                                  (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_21                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_22                                  (None)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_2                                   (None)
// struct FProgressBarStyle           K2Node_MakeStruct_ProgressBarStyle                               (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_3                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_4                                   (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_5                                   (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UUMG_Talent_Prospect_C::SetProspectColour(enum class ETalentProspectButtonState State, enum class ETalentProspectButtonState Temp_byte_Variable, enum class ETalentProspectButtonState Temp_byte_Variable_1, enum class ETalentProspectButtonState Temp_byte_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const struct FSlateColor& K2Node_MakeStruct_SlateColor_6, const struct FSlateColor& K2Node_MakeStruct_SlateColor_7, const struct FSlateColor& K2Node_MakeStruct_SlateColor_8, const struct FSlateColor& K2Node_MakeStruct_SlateColor_9, const struct FSlateColor& K2Node_MakeStruct_SlateColor_10, const struct FSlateColor& K2Node_MakeStruct_SlateColor_11, const struct FSlateColor& K2Node_MakeStruct_SlateColor_12, const struct FSlateColor& K2Node_MakeStruct_SlateColor_13, const struct FSlateColor& K2Node_MakeStruct_SlateColor_14, const struct FSlateColor& K2Node_MakeStruct_SlateColor_15, const struct FSlateColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor_16, const struct FSlateColor& K2Node_MakeStruct_SlateColor_17, const struct FSlateColor& K2Node_MakeStruct_SlateColor_18, const struct FSlateColor& K2Node_MakeStruct_SlateColor_19, const struct FSlateColor& K2Node_MakeStruct_SlateColor_20, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_21, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateColor& K2Node_Select_Default_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_22, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FProgressBarStyle& K2Node_MakeStruct_ProgressBarStyle, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_5, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "SetProspectColour");

	Params::UUMG_Talent_Prospect_C_SetProspectColour_Params Parms{};

	Parms.State = State;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_MakeStruct_SlateColor_4 = K2Node_MakeStruct_SlateColor_4;
	Parms.K2Node_MakeStruct_SlateColor_5 = K2Node_MakeStruct_SlateColor_5;
	Parms.K2Node_MakeStruct_SlateColor_6 = K2Node_MakeStruct_SlateColor_6;
	Parms.K2Node_MakeStruct_SlateColor_7 = K2Node_MakeStruct_SlateColor_7;
	Parms.K2Node_MakeStruct_SlateColor_8 = K2Node_MakeStruct_SlateColor_8;
	Parms.K2Node_MakeStruct_SlateColor_9 = K2Node_MakeStruct_SlateColor_9;
	Parms.K2Node_MakeStruct_SlateColor_10 = K2Node_MakeStruct_SlateColor_10;
	Parms.K2Node_MakeStruct_SlateColor_11 = K2Node_MakeStruct_SlateColor_11;
	Parms.K2Node_MakeStruct_SlateColor_12 = K2Node_MakeStruct_SlateColor_12;
	Parms.K2Node_MakeStruct_SlateColor_13 = K2Node_MakeStruct_SlateColor_13;
	Parms.K2Node_MakeStruct_SlateColor_14 = K2Node_MakeStruct_SlateColor_14;
	Parms.K2Node_MakeStruct_SlateColor_15 = K2Node_MakeStruct_SlateColor_15;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor_16 = K2Node_MakeStruct_SlateColor_16;
	Parms.K2Node_MakeStruct_SlateColor_17 = K2Node_MakeStruct_SlateColor_17;
	Parms.K2Node_MakeStruct_SlateColor_18 = K2Node_MakeStruct_SlateColor_18;
	Parms.K2Node_MakeStruct_SlateColor_19 = K2Node_MakeStruct_SlateColor_19;
	Parms.K2Node_MakeStruct_SlateColor_20 = K2Node_MakeStruct_SlateColor_20;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor_21 = K2Node_MakeStruct_SlateColor_21;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_22 = K2Node_MakeStruct_SlateColor_22;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_MakeStruct_SlateBrush_2 = K2Node_MakeStruct_SlateBrush_2;
	Parms.K2Node_MakeStruct_ProgressBarStyle = K2Node_MakeStruct_ProgressBarStyle;
	Parms.K2Node_MakeStruct_SlateBrush_3 = K2Node_MakeStruct_SlateBrush_3;
	Parms.K2Node_MakeStruct_SlateBrush_4 = K2Node_MakeStruct_SlateBrush_4;
	Parms.K2Node_MakeStruct_SlateBrush_5 = K2Node_MakeStruct_SlateBrush_5;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.IsMissionCurrentlyTimeLocked
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTimeLocked                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusGameStateSurvival*    K2Node_DynamicCast_AsIcarus_Game_State_Survival                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLevelTimeElapsedSec_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimeLockedMissionInfo      CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Prospect_C::IsMissionCurrentlyTimeLocked(bool* IsTimeLocked, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, int32 CallFunc_GetLevelTimeElapsedSec_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimeLockedMissionInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "IsMissionCurrentlyTimeLocked");

	Params::UUMG_Talent_Prospect_C_IsMissionCurrentlyTimeLocked_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_State_Survival = K2Node_DynamicCast_AsIcarus_Game_State_Survival;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.CallFunc_GetLevelTimeElapsedSec_ReturnValue = CallFunc_GetLevelTimeElapsedSec_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue = CallFunc_EqualEqual_FFactionMissionsRowHandleFFactionMissionsRowHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsTimeLocked != nullptr)
		*IsTimeLocked = Parms.IsTimeLocked;

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Set Status
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EOnProspectAvailability Status                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnProspectAvailability Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// enum class EOnProspectAvailability Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// enum class EOnProspectAvailability Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_ByteByte_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Prospect_C::Set_Status(enum class EOnProspectAvailability Status, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class EOnProspectAvailability Temp_byte_Variable_4, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class EOnProspectAvailability Temp_byte_Variable_5, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, enum class EOnProspectAvailability Temp_byte_Variable_6, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_ByteByte_ReturnValue, class FText K2Node_Select_Default_2, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "Set Status");

	Params::UUMG_Talent_Prospect_C_Set_Status_Params Parms{};

	Parms.Status = Status;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_ByteByte_ReturnValue = CallFunc_Greater_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.RefreshTalentRequirement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDLCPackageDataRowHandle    DLCRequired                                                      (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFlagsMultiRowHandle        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDLCPackageDataRowHandle    CallFunc_ToDLCPackageDataRowHandle_ReturnValue                   (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper)
// bool                               CallFunc_AreAllFlagsSet_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Prospect_C::RefreshTalentRequirement(const struct FDLCPackageDataRowHandle& DLCRequired, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsRowHandleValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FFlagsMultiRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FDLCPackageDataRowHandle& CallFunc_ToDLCPackageDataRowHandle_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue, bool CallFunc_AreAllFlagsSet_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "RefreshTalentRequirement");

	Params::UUMG_Talent_Prospect_C_RefreshTalentRequirement_Params Parms{};

	Parms.DLCRequired = DLCRequired;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ToDLCPackageDataRowHandle_ReturnValue = CallFunc_ToDLCPackageDataRowHandle_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_AreAllFlagsSet_ReturnValue = CallFunc_AreAllFlagsSet_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.RefreshSearchHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::RefreshSearchHighlight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "RefreshSearchHighlight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.GetStringForFilterSearch
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UUMG_Talent_Prospect_C::GetStringForFilterSearch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "GetStringForFilterSearch");

	Params::UUMG_Talent_Prospect_C_GetStringForFilterSearch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Array_Get_Item_3                                        (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)

void UUMG_Talent_Prospect_C::SetTime(TArray<class FString>& Time, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, const class FString& CallFunc_Array_Get_Item_2, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Array_Get_Item_3, class FText CallFunc_Conv_StringToText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "SetTime");

	Params::UUMG_Talent_Prospect_C_SetTime_Params Parms{};

	Parms.Time = Time;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Refresh Hover State
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentView                 TalentView                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_Talent_Prospect_C::Refresh_Hover_State(struct FTalentView& TalentView)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "Refresh Hover State");

	Params::UUMG_Talent_Prospect_C_Refresh_Hover_State_Params Parms{};

	Parms.TalentView = TalentView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Prospect_C::GetOverlay(class UOverlay** Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "GetOverlay");

	Params::UUMG_Talent_Prospect_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Refresh Display
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::Refresh_Display()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "Refresh Display");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.UpdateProspectSession
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::UpdateProspectSession()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "UpdateProspectSession");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Set Hover States
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                 IconColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_Talent_Prospect_C::Set_Hover_States(const struct FSlateColor& TextColor, const struct FSlateColor& IconColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "Set Hover States");

	Params::UUMG_Talent_Prospect_C_Set_Hover_States_Params Parms{};

	Parms.TextColor = TextColor;
	Parms.IconColor = IconColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.UpdateProspectTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::UpdateProspectTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "UpdateProspectTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.Set Zoom Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Prospect_C::Set_Zoom_Level(int32 Level, float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "Set Zoom Level");

	Params::UUMG_Talent_Prospect_C_Set_Zoom_Level_Params Parms{};

	Parms.Level = Level;
	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.SetSearchHighlight
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_Prospect_C::SetSearchHighlight(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "SetSearchHighlight");

	Params::UUMG_Talent_Prospect_C_SetSearchHighlight_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.DoNothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::DoNothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "DoNothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.ShowEncryptedPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::ShowEncryptedPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "ShowEncryptedPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.ShowMissionLockedTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::ShowMissionLockedTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "ShowMissionLockedTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.RemoveMissionLockedTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::RemoveMissionLockedTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "RemoveMissionLockedTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.OnTalentSet
// (Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::OnTalentSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "OnTalentSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.OnStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentModelData            NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUMG_Talent_Prospect_C::OnStateChanged(const struct FTalentModelData& NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "OnStateChanged");

	Params::UUMG_Talent_Prospect_C_OnStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "BndEvt__BaseButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.BndEvt__UMG_Talent_Prospect_BaseButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::BndEvt__UMG_Talent_Prospect_BaseButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "BndEvt__UMG_Talent_Prospect_BaseButton_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.ResetTalentState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::ResetTalentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "ResetTalentState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.ExecuteUbergraph_UMG_Talent_Prospect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharacterFlagsRowHandle    Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FCharacterFlagsRowHandle    Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EProspectRequiredTech   Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_2                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_3                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_4                                       (UObjectWrapper, HasGetValueTypeHash)
// enum class EProspectRequiredTech   Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOnProspectAvailability Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOnProspectAvailability Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// struct FTalentView                 CallFunc_GetTalentViewsStruct_TalentViews                        (None)
// enum class EValid                  CallFunc_GetTalentViewsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_TalentView_Prospect_C*  K2Node_DynamicCast_AsUMG_Talent_View_Prospect                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProspectInfo               CallFunc_Map_Find_Value                                          (None)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_TalentView_Prospect_C*  K2Node_DynamicCast_AsUMG_Talent_View_Prospect_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue                            (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_GetRemainingProspectTime_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_CustomEvent_TextColor                                     (None)
// struct FSlateColor                 K2Node_CustomEvent_IconColor                                     (None)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Scale                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_8                                             (ConstParm)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_9                                             (ConstParm)
// TArray<class FString>              CallFunc_FormatRawSecondsToTimeLengthDigital_Time                (ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UnlockTooltip_C*        CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHighlighted                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GenerateSearchStringForProspectTalent_ReturnValue       (ZeroConstructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_TalentView_Prospect_C*  K2Node_DynamicCast_AsUMG_Talent_View_Prospect_2                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalent                     CallFunc_GetTalentsStruct_Talents                                (None)
// enum class EValid                  CallFunc_GetTalentsStruct_Paths                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentModelData            K2Node_Event_NewState                                            (NoDestructor)
// struct FProspectListRowHandle      CallFunc_MakeProspectList_ReturnValue_1                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusProspect             CallFunc_GetProspectListStruct_ProspectList                      (None)
// enum class EValid                  CallFunc_GetProspectListStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions                (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFactionMission             CallFunc_GetFactionMissionsStruct_FactionMissions_1              (None)
// enum class EValid                  CallFunc_GetFactionMissionsStruct_Paths_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterFlagsRowHandle    CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCharacterFlag              CallFunc_GetCharacterFlagsStruct_CharacterFlags                  (None)
// enum class EValid                  CallFunc_GetCharacterFlagsStruct_Paths                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_2                                          (UObjectWrapper, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        K2Node_Select_Default_4                                          (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FText                        Temp_text_Variable_10                                            (ConstParm)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Talent_Prospect_C::ExecuteUbergraph_UMG_Talent_Prospect(int32 EntryPoint, const struct FCharacterFlagsRowHandle& Temp_struct_Variable, const struct FCharacterFlagsRowHandle& Temp_struct_Variable_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EProspectRequiredTech Temp_byte_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_2, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_3, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_4, enum class EProspectRequiredTech Temp_byte_Variable_3, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class EOnProspectAvailability Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, enum class EOnProspectAvailability Temp_byte_Variable_9, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText K2Node_Select_Default, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMG_TalentView_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_View_Prospect, bool K2Node_DynamicCast_bSuccess, const struct FProspectInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UUMG_TalentView_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_View_Prospect_1, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetRemainingProspectTime_ReturnValue, const struct FSlateColor& K2Node_CustomEvent_TextColor, const struct FSlateColor& K2Node_CustomEvent_IconColor, int32 K2Node_Event_Level, float K2Node_Event_Scale, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, class FText Temp_text_Variable_8, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_2, class FText Temp_text_Variable_9, TArray<class FString>& CallFunc_FormatRawSecondsToTimeLengthDigital_Time, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Array_Get_Item, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_Conv_StringToInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_3, bool K2Node_Event_bHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, const class FString& CallFunc_GenerateSearchStringForProspectTalent_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class UUMG_TalentView_Prospect_C* K2Node_DynamicCast_AsUMG_Talent_View_Prospect_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked, enum class ESlateVisibility Temp_byte_Variable_10, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2, const struct FTalent& CallFunc_GetTalentsStruct_Talents, enum class EValid CallFunc_GetTalentsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FTalentModelData& K2Node_Event_NewState, const struct FProspectListRowHandle& CallFunc_MakeProspectList_ReturnValue_1, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsHovered_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_11, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_5, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions_1, enum class EValid CallFunc_GetFactionMissionsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, const struct FCharacterFlagsRowHandle& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCharacterFlag& CallFunc_GetCharacterFlagsStruct_CharacterFlags, enum class EValid CallFunc_GetCharacterFlagsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_7, int32 CallFunc_Array_Length_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_8, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, enum class ESlateVisibility Temp_byte_Variable_13, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText K2Node_Select_Default_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText Temp_text_Variable_10, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_1, bool Temp_bool_Variable_4, bool CallFunc_BooleanOR_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_5, bool CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, class UWidgetAnimation* K2Node_Select_Default_6, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidgetAnimation* K2Node_Select_Default_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "ExecuteUbergraph_UMG_Talent_Prospect");

	Params::UUMG_Talent_Prospect_C_ExecuteUbergraph_UMG_Talent_Prospect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.Temp_softobject_Variable_2 = Temp_softobject_Variable_2;
	Parms.Temp_softobject_Variable_3 = Temp_softobject_Variable_3;
	Parms.Temp_softobject_Variable_4 = Temp_softobject_Variable_4;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetTalentViewsStruct_TalentViews = CallFunc_GetTalentViewsStruct_TalentViews;
	Parms.CallFunc_GetTalentViewsStruct_Paths = CallFunc_GetTalentViewsStruct_Paths;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Prospect = K2Node_DynamicCast_AsUMG_Talent_View_Prospect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Prospect_1 = K2Node_DynamicCast_AsUMG_Talent_View_Prospect_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_MakeProspectList_ReturnValue = CallFunc_MakeProspectList_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetRemainingProspectTime_ReturnValue = CallFunc_GetRemainingProspectTime_ReturnValue;
	Parms.K2Node_CustomEvent_TextColor = K2Node_CustomEvent_TextColor;
	Parms.K2Node_CustomEvent_IconColor = K2Node_CustomEvent_IconColor;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.K2Node_Event_Scale = K2Node_Event_Scale;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.CallFunc_FormatRawSecondsToTimeLengthDigital_Time = CallFunc_FormatRawSecondsToTimeLengthDigital_Time;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.K2Node_Event_bHighlighted = K2Node_Event_bHighlighted;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GenerateSearchStringForProspectTalent_ReturnValue = CallFunc_GenerateSearchStringForProspectTalent_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_DynamicCast_AsUMG_Talent_View_Prospect_2 = K2Node_DynamicCast_AsUMG_Talent_View_Prospect_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked = CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;
	Parms.CallFunc_GetTalentsStruct_Talents = CallFunc_GetTalentsStruct_Talents;
	Parms.CallFunc_GetTalentsStruct_Paths = CallFunc_GetTalentsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_MakeProspectList_ReturnValue_1 = CallFunc_MakeProspectList_ReturnValue_1;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_GetProspectListStruct_ProspectList = CallFunc_GetProspectListStruct_ProspectList;
	Parms.CallFunc_GetProspectListStruct_Paths = CallFunc_GetProspectListStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions = CallFunc_GetFactionMissionsStruct_FactionMissions;
	Parms.CallFunc_GetFactionMissionsStruct_Paths = CallFunc_GetFactionMissionsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetFactionMissionsStruct_FactionMissions_1 = CallFunc_GetFactionMissionsStruct_FactionMissions_1;
	Parms.CallFunc_GetFactionMissionsStruct_Paths_1 = CallFunc_GetFactionMissionsStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetCharacterFlagsStruct_CharacterFlags = CallFunc_GetCharacterFlagsStruct_CharacterFlags;
	Parms.CallFunc_GetCharacterFlagsStruct_Paths = CallFunc_GetCharacterFlagsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_8 = K2Node_SwitchEnum_CmpSuccess_8;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_1 = CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_1;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_2 = CallFunc_IsMissionCurrentlyTimeLocked_IsTimeLocked_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_Prospect.UMG_Talent_Prospect_C.ProspectMissionClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Talent_Prospect_C::ProspectMissionClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_Prospect_C", "ProspectMissionClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


