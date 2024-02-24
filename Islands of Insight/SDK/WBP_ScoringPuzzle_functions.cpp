#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ScoringPuzzle.WBP_ScoringPuzzle_C
// (None)

class UClass* UWBP_ScoringPuzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ScoringPuzzle_C");

	return Clss;
}


// WBP_ScoringPuzzle_C WBP_ScoringPuzzle.Default__WBP_ScoringPuzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ScoringPuzzle_C* UWBP_ScoringPuzzle_C::GetDefaultObj()
{
	static class UWBP_ScoringPuzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ScoringPuzzle_C*>(UWBP_ScoringPuzzle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.ShowWithIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  PuzzleIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScoringPuzzle_C::ShowWithIcon(class UTexture2D* PuzzleIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "ShowWithIcon");

	Params::UWBP_ScoringPuzzle_C_ShowWithIcon_Params Parms{};

	Parms.PuzzleIcon = PuzzleIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.RemoveResultsPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScoringPuzzle_C::RemoveResultsPopup(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "RemoveResultsPopup");

	Params::UWBP_ScoringPuzzle_C_RemoveResultsPopup_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_SetCurrentProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Percentage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScoringPuzzle_C::BP_SetCurrentProgress(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_SetCurrentProgress");

	Params::UWBP_ScoringPuzzle_C_BP_SetCurrentProgress_Params Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_SetBestProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Percentage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScoringPuzzle_C::BP_SetBestProgress(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_SetBestProgress");

	Params::UWBP_ScoringPuzzle_C_BP_SetBestProgress_Params Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_SetMilestoneThresholds
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Bronze                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Silver                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Gold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScoringPuzzle_C::BP_SetMilestoneThresholds(float Bronze, float Silver, float Gold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_SetMilestoneThresholds");

	Params::UWBP_ScoringPuzzle_C_BP_SetMilestoneThresholds_Params Parms{};

	Parms.Bronze = Bronze;
	Parms.Silver = Silver;
	Parms.Gold = Gold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_ShowResultsPopup
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UTexture2D*                  PuzzleIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        TITLE                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ShowPreviousScore                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowRestartButton                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScoringPuzzle_C::BP_ShowResultsPopup(class UTexture2D* PuzzleIcon, class FText& TITLE, bool ShowPreviousScore, bool ShowRestartButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_ShowResultsPopup");

	Params::UWBP_ScoringPuzzle_C_BP_ShowResultsPopup_Params Parms{};

	Parms.PuzzleIcon = PuzzleIcon;
	Parms.TITLE = TITLE;
	Parms.ShowPreviousScore = ShowPreviousScore;
	Parms.ShowRestartButton = ShowRestartButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_Hide
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_ScoringPuzzle_C::BP_Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_DisplayInstructions
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Instructions                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ScoringPuzzle_C::BP_DisplayInstructions(class FText& Instructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_DisplayInstructions");

	Params::UWBP_ScoringPuzzle_C_BP_DisplayInstructions_Params Parms{};

	Parms.Instructions = Instructions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_AddScore
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        Label                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_ScoringPuzzle_C::BP_AddScore(class FText& Label, class FText& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_AddScore");

	Params::UWBP_ScoringPuzzle_C_BP_AddScore_Params Parms{};

	Parms.Label = Label;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.BP_ShowProgressPanel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  PuzzleIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScoringPuzzle_C::BP_ShowProgressPanel(class UTexture2D* PuzzleIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "BP_ShowProgressPanel");

	Params::UWBP_ScoringPuzzle_C_BP_ShowProgressPanel_Params Parms{};

	Parms.PuzzleIcon = PuzzleIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ScoringPuzzle.WBP_ScoringPuzzle_C.ExecuteUbergraph_WBP_ScoringPuzzle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percentage_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Percentage                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Bronze                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Silver                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Gold                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_PuzzleIcon_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_Title                                               (ConstParm)
// bool                               K2Node_Event_ShowPreviousScore                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_ShowRestartButton                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_RacingRingsResultPopup_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Instructions                                        (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_Label                                               (ConstParm)
// class FText                        K2Node_Event_Value                                               (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Event_PuzzleIcon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScoringPuzzle_C::ExecuteUbergraph_WBP_ScoringPuzzle(int32 EntryPoint, float K2Node_Event_Percentage_1, float K2Node_Event_Percentage, float K2Node_Event_Bronze, float K2Node_Event_Silver, float K2Node_Event_Gold, class UTexture2D* K2Node_Event_PuzzleIcon_1, class FText K2Node_Event_Title, bool K2Node_Event_ShowPreviousScore, bool K2Node_Event_ShowRestartButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_RacingRingsResultPopup_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FText K2Node_Event_Instructions, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_Event_Label, class FText K2Node_Event_Value, bool CallFunc_IsValid_ReturnValue_5, class UTexture2D* K2Node_Event_PuzzleIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ScoringPuzzle_C", "ExecuteUbergraph_WBP_ScoringPuzzle");

	Params::UWBP_ScoringPuzzle_C_ExecuteUbergraph_WBP_ScoringPuzzle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Percentage_1 = K2Node_Event_Percentage_1;
	Parms.K2Node_Event_Percentage = K2Node_Event_Percentage;
	Parms.K2Node_Event_Bronze = K2Node_Event_Bronze;
	Parms.K2Node_Event_Silver = K2Node_Event_Silver;
	Parms.K2Node_Event_Gold = K2Node_Event_Gold;
	Parms.K2Node_Event_PuzzleIcon_1 = K2Node_Event_PuzzleIcon_1;
	Parms.K2Node_Event_Title = K2Node_Event_Title;
	Parms.K2Node_Event_ShowPreviousScore = K2Node_Event_ShowPreviousScore;
	Parms.K2Node_Event_ShowRestartButton = K2Node_Event_ShowRestartButton;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_Instructions = K2Node_Event_Instructions;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_Label = K2Node_Event_Label;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_PuzzleIcon = K2Node_Event_PuzzleIcon;

	UObject::ProcessEvent(Func, &Parms);

}

}


