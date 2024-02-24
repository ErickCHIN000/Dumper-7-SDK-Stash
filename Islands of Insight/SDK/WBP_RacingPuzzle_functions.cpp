#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RacingPuzzle.WBP_RacingPuzzle_C
// (None)

class UClass* UWBP_RacingPuzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RacingPuzzle_C");

	return Clss;
}


// WBP_RacingPuzzle_C WBP_RacingPuzzle.Default__WBP_RacingPuzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RacingPuzzle_C* UWBP_RacingPuzzle_C::GetDefaultObj()
{
	static class UWBP_RacingPuzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RacingPuzzle_C*>(UWBP_RacingPuzzle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_SetTeamColor
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FLinearColor                ControllerTeamColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                PlayerTeamColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingPuzzle_C::BP_SetTeamColor(const struct FLinearColor& ControllerTeamColor, const struct FLinearColor& PlayerTeamColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_SetTeamColor");

	Params::UWBP_RacingPuzzle_C_BP_SetTeamColor_Params Parms{};

	Parms.ControllerTeamColor = ControllerTeamColor;
	Parms.PlayerTeamColor = PlayerTeamColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_ShowResultsPopup
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        TITLE                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RacingPuzzle_C::BP_ShowResultsPopup(class FText& TITLE)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_ShowResultsPopup");

	Params::UWBP_RacingPuzzle_C_BP_ShowResultsPopup_Params Parms{};

	Parms.TITLE = TITLE;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_RemoveResultsPopup
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RacingPuzzle_C::BP_RemoveResultsPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_RemoveResultsPopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RacingPuzzle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_AddMilestone
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FMilestoneResultData        Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RacingPuzzle_C::BP_AddMilestone(struct FMilestoneResultData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_AddMilestone");

	Params::UWBP_RacingPuzzle_C_BP_AddMilestone_Params Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_Show
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  PuzzleIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingPuzzle_C::BP_Show(class UTexture2D* PuzzleIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_Show");

	Params::UWBP_RacingPuzzle_C_BP_Show_Params Parms{};

	Parms.PuzzleIcon = PuzzleIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_Hide
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RacingPuzzle_C::BP_Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_DisplayInstructions
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Instructions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_RacingPuzzle_C::BP_DisplayInstructions(class FText& Instructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_DisplayInstructions");

	Params::UWBP_RacingPuzzle_C_BP_DisplayInstructions_Params Parms{};

	Parms.Instructions = Instructions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.BP_AddScore
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Label                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Delta                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              DeltaSign                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingPuzzle_C::BP_AddScore(class FText& Label, class FText& Value, class FText& Delta, float DeltaSign)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "BP_AddScore");

	Params::UWBP_RacingPuzzle_C_BP_AddScore_Params Parms{};

	Parms.Label = Label;
	Parms.Value = Value;
	Parms.Delta = Delta;
	Parms.DeltaSign = DeltaSign;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingPuzzle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "Tick");

	Params::UWBP_RacingPuzzle_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingPuzzle.WBP_RacingPuzzle_C.ExecuteUbergraph_WBP_RacingPuzzle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_controllerTeamColor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_playerTeamColor                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_MilestoneResultPopup_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMilestoneResultData        K2Node_Event_Data                                                (ConstParm)
// class UTexture2D*                  K2Node_Event_PuzzleIcon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Instructions                                        (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Label                                               (ConstParm)
// class FText                        K2Node_Event_Value                                               (ConstParm)
// class FText                        K2Node_Event_Delta                                               (ConstParm)
// float                              K2Node_Event_DeltaSign                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)

void UWBP_RacingPuzzle_C::ExecuteUbergraph_WBP_RacingPuzzle(int32 EntryPoint, const struct FLinearColor& K2Node_Event_controllerTeamColor, const struct FLinearColor& K2Node_Event_playerTeamColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText K2Node_Event_Title, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_MilestoneResultPopup_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FMilestoneResultData& K2Node_Event_Data, class UTexture2D* K2Node_Event_PuzzleIcon, class FText K2Node_Event_Instructions, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_Event_Label, class FText K2Node_Event_Value, class FText K2Node_Event_Delta, float K2Node_Event_DeltaSign, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingPuzzle_C", "ExecuteUbergraph_WBP_RacingPuzzle");

	Params::UWBP_RacingPuzzle_C_ExecuteUbergraph_WBP_RacingPuzzle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_controllerTeamColor = K2Node_Event_controllerTeamColor;
	Parms.K2Node_Event_playerTeamColor = K2Node_Event_playerTeamColor;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_Event_PuzzleIcon = K2Node_Event_PuzzleIcon;
	Parms.K2Node_Event_Instructions = K2Node_Event_Instructions;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_Label = K2Node_Event_Label;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Delta = K2Node_Event_Delta;
	Parms.K2Node_Event_DeltaSign = K2Node_Event_DeltaSign;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


