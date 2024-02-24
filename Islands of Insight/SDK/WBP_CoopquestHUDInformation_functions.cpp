#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C
// (None)

class UClass* UWBP_CoopquestHUDInformation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CoopquestHUDInformation_C");

	return Clss;
}


// WBP_CoopquestHUDInformation_C WBP_CoopquestHUDInformation.Default__WBP_CoopquestHUDInformation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CoopquestHUDInformation_C* UWBP_CoopquestHUDInformation_C::GetDefaultObj()
{
	static class UWBP_CoopquestHUDInformation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CoopquestHUDInformation_C*>(UWBP_CoopquestHUDInformation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.SetZoneParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ZoneName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FLinearColor                TeamColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RedProgress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              blueProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ZoneProgressHexagonCoop_C*ZoneWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CompletedFully                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CoopquestHUDInformation_C::SetZoneParameters(bool Visible, class FText& ZoneName, const struct FLinearColor& TeamColor, float RedProgress, float blueProgress, class UWBP_ZoneProgressHexagonCoop_C* ZoneWidget, bool CompletedFully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "SetZoneParameters");

	Params::UWBP_CoopquestHUDInformation_C_SetZoneParameters_Params Parms{};

	Parms.Visible = Visible;
	Parms.ZoneName = ZoneName;
	Parms.TeamColor = TeamColor;
	Parms.RedProgress = RedProgress;
	Parms.blueProgress = blueProgress;
	Parms.ZoneWidget = ZoneWidget;
	Parms.CompletedFully = CompletedFully;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.BP_VisualizeLocalZone
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              RedProgress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              blueProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CaptureColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ZoneShortName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CompletedFully                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CoopquestHUDInformation_C::BP_VisualizeLocalZone(bool Show, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "BP_VisualizeLocalZone");

	Params::UWBP_CoopquestHUDInformation_C_BP_VisualizeLocalZone_Params Parms{};

	Parms.Show = Show;
	Parms.RedProgress = RedProgress;
	Parms.blueProgress = blueProgress;
	Parms.CaptureColor = CaptureColor;
	Parms.ZoneShortName = ZoneShortName;
	Parms.CompletedFully = CompletedFully;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.BP_VisualizeZoneWithIndex
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              RedProgress                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              blueProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CaptureColor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ZoneShortName                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CompletedFully                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CoopquestHUDInformation_C::BP_VisualizeZoneWithIndex(int32 Index, bool bShow, float RedProgress, float blueProgress, const struct FLinearColor& CaptureColor, class FText& ZoneShortName, bool CompletedFully)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "BP_VisualizeZoneWithIndex");

	Params::UWBP_CoopquestHUDInformation_C_BP_VisualizeZoneWithIndex_Params Parms{};

	Parms.Index = Index;
	Parms.bShow = bShow;
	Parms.RedProgress = RedProgress;
	Parms.blueProgress = blueProgress;
	Parms.CaptureColor = CaptureColor;
	Parms.ZoneShortName = ZoneShortName;
	Parms.CompletedFully = CompletedFully;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.BP_VisualizeCoopScore
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Score                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RedSolvedNum                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              blueSolvedNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoopquestHUDInformation_C::BP_VisualizeCoopScore(int32 Score, int32 Time, int32 RedSolvedNum, int32 blueSolvedNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "BP_VisualizeCoopScore");

	Params::UWBP_CoopquestHUDInformation_C_BP_VisualizeCoopScore_Params Parms{};

	Parms.Score = Score;
	Parms.Time = Time;
	Parms.RedSolvedNum = RedSolvedNum;
	Parms.blueSolvedNum = blueSolvedNum;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.BP_VisualizeCoopClosestPeople
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FConquestPersonPerformanceInformation>SortedInfos                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CoopquestHUDInformation_C::BP_VisualizeCoopClosestPeople(TArray<struct FConquestPersonPerformanceInformation>& SortedInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "BP_VisualizeCoopClosestPeople");

	Params::UWBP_CoopquestHUDInformation_C_BP_VisualizeCoopClosestPeople_Params Parms{};

	Parms.SortedInfos = SortedInfos;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.BP_VisualizeLocalPlayerTeam
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsRedTeam                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_CoopquestHUDInformation_C::BP_VisualizeLocalPlayerTeam(bool IsRedTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "BP_VisualizeLocalPlayerTeam");

	Params::UWBP_CoopquestHUDInformation_C_BP_VisualizeLocalPlayerTeam_Params Parms{};

	Parms.IsRedTeam = IsRedTeam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_CoopquestHUDInformation.WBP_CoopquestHUDInformation_C.ExecuteUbergraph_WBP_CoopquestHUDInformation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_show                                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_redProgress_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_blueProgress_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_captureColor_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_zoneShortName_1                                     (ConstParm)
// bool                               K2Node_Event_completedFully_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShow                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_redProgress                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_blueProgress                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_captureColor                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_zoneShortName                                       (ConstParm)
// bool                               K2Node_Event_completedFully                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Score                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Time                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_redSolvedNum                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_blueSolvedNum                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_AsTimespan_Timespan_ReturnValue                         (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USizeBox*>            K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ZoneProgressHexagonCoop_C*K2Node_DynamicCast_AsWBP_Zone_Progress_Hexagon_Coop              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FConquestPersonPerformanceInformation>K2Node_Event_sortedInfos                                         (ConstParm, ReferenceParm)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConquestPersonPerformanceInformationCallFunc_Array_Get_Item_1                                        (None)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_CoopQuestPerson_C*      K2Node_DynamicCast_AsWBP_Coop_Quest_Person                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ZoneProgressHexagonCoop_C*K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isRedTeam                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetSlotIndex_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetSlotIndex_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CoopquestHUDInformation_C::ExecuteUbergraph_WBP_CoopquestHUDInformation(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_show, float K2Node_Event_redProgress_1, float K2Node_Event_blueProgress_1, const struct FLinearColor& K2Node_Event_captureColor_1, class FText K2Node_Event_zoneShortName_1, bool K2Node_Event_completedFully_1, int32 K2Node_Event_Index, bool K2Node_Event_bShow, float K2Node_Event_redProgress, float K2Node_Event_blueProgress, const struct FLinearColor& K2Node_Event_captureColor, class FText K2Node_Event_zoneShortName, bool K2Node_Event_completedFully, float CallFunc_Add_FloatFloat_ReturnValue, int32 K2Node_Event_Score, int32 K2Node_Event_Time, int32 K2Node_Event_redSolvedNum, int32 K2Node_Event_blueSolvedNum, int32 Temp_int_Loop_Counter_Variable_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class FText CallFunc_AsTimespan_Timespan_ReturnValue, int32 Temp_int_Variable, TArray<class USizeBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class USizeBox* K2Node_Select_Default, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class USizeBox* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWBP_ZoneProgressHexagonCoop_C* K2Node_DynamicCast_AsWBP_Zone_Progress_Hexagon_Coop, bool K2Node_DynamicCast_bSuccess, TArray<struct FConquestPersonPerformanceInformation>& K2Node_Event_sortedInfos, bool CallFunc_EqualEqual_TextText_ReturnValue, const struct FConquestPersonPerformanceInformation& CallFunc_Array_Get_Item_1, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWBP_CoopQuestPerson_C* K2Node_DynamicCast_AsWBP_Coop_Quest_Person, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Variable_1, class UWBP_ZoneProgressHexagonCoop_C* K2Node_Select_Default_2, bool K2Node_Event_isRedTeam, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, class UPanelSlot* CallFunc_SetSlotIndex_ReturnValue, class UPanelSlot* CallFunc_SetSlotIndex_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CoopquestHUDInformation_C", "ExecuteUbergraph_WBP_CoopquestHUDInformation");

	Params::UWBP_CoopquestHUDInformation_C_ExecuteUbergraph_WBP_CoopquestHUDInformation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_show = K2Node_Event_show;
	Parms.K2Node_Event_redProgress_1 = K2Node_Event_redProgress_1;
	Parms.K2Node_Event_blueProgress_1 = K2Node_Event_blueProgress_1;
	Parms.K2Node_Event_captureColor_1 = K2Node_Event_captureColor_1;
	Parms.K2Node_Event_zoneShortName_1 = K2Node_Event_zoneShortName_1;
	Parms.K2Node_Event_completedFully_1 = K2Node_Event_completedFully_1;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.K2Node_Event_bShow = K2Node_Event_bShow;
	Parms.K2Node_Event_redProgress = K2Node_Event_redProgress;
	Parms.K2Node_Event_blueProgress = K2Node_Event_blueProgress;
	Parms.K2Node_Event_captureColor = K2Node_Event_captureColor;
	Parms.K2Node_Event_zoneShortName = K2Node_Event_zoneShortName;
	Parms.K2Node_Event_completedFully = K2Node_Event_completedFully;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_Score = K2Node_Event_Score;
	Parms.K2Node_Event_Time = K2Node_Event_Time;
	Parms.K2Node_Event_redSolvedNum = K2Node_Event_redSolvedNum;
	Parms.K2Node_Event_blueSolvedNum = K2Node_Event_blueSolvedNum;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_AsTimespan_Timespan_ReturnValue = CallFunc_AsTimespan_Timespan_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Zone_Progress_Hexagon_Coop = K2Node_DynamicCast_AsWBP_Zone_Progress_Hexagon_Coop;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_sortedInfos = K2Node_Event_sortedInfos;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsWBP_Coop_Quest_Person = K2Node_DynamicCast_AsWBP_Coop_Quest_Person;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Event_isRedTeam = K2Node_Event_isRedTeam;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_SetSlotIndex_ReturnValue = CallFunc_SetSlotIndex_ReturnValue;
	Parms.CallFunc_SetSlotIndex_ReturnValue_1 = CallFunc_SetSlotIndex_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


