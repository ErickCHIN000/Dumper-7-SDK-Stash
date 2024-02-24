#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C
// (None)

class UClass* UWBP_RacingRingsResultPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RacingRingsResultPopup_C");

	return Clss;
}


// WBP_RacingRingsResultPopup_C WBP_RacingRingsResultPopup.Default__WBP_RacingRingsResultPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RacingRingsResultPopup_C* UWBP_RacingRingsResultPopup_C::GetDefaultObj()
{
	static class UWBP_RacingRingsResultPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RacingRingsResultPopup_C*>(UWBP_RacingRingsResultPopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.SetBestProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percentage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingRingsResultPopup_C::SetBestProgress(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "SetBestProgress");

	Params::UWBP_RacingRingsResultPopup_C_SetBestProgress_Params Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.SetCurrentProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percentage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingRingsResultPopup_C::SetCurrentProgress(float Percentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "SetCurrentProgress");

	Params::UWBP_RacingRingsResultPopup_C_SetCurrentProgress_Params Parms{};

	Parms.Percentage = Percentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.SetMilestoneThresholds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Bronze                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Silver                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Gold                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingRingsResultPopup_C::SetMilestoneThresholds(float Bronze, float Silver, float Gold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "SetMilestoneThresholds");

	Params::UWBP_RacingRingsResultPopup_C_SetMilestoneThresholds_Params Parms{};

	Parms.Bronze = Bronze;
	Parms.Silver = Silver;
	Parms.Gold = Gold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.DisplayInstructions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Instructions                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_RacingRingsResultPopup_C::DisplayInstructions(class FText Instructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "DisplayInstructions");

	Params::UWBP_RacingRingsResultPopup_C_DisplayInstructions_Params Parms{};

	Parms.Instructions = Instructions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.Add Score
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Label                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              DeltaSign                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_DynamicText_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ScoreRow_C*             CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingRingsResultPopup_C::Add_Score(class FText Label, class FText Value, class FText Delta, float DeltaSign, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, class UWBP_DynamicText_C* CallFunc_Create_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UWBP_ScoreRow_C* CallFunc_Create_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "Add Score");

	Params::UWBP_RacingRingsResultPopup_C_Add_Score_Params Parms{};

	Parms.Label = Label;
	Parms.Value = Value;
	Parms.Delta = Delta;
	Parms.DeltaSign = DeltaSign;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_2 = CallFunc_Conv_ColorToLinearColor_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.AddMilestone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMilestoneResultData        Data                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateChildSize             NewLocalVar_0                                                    (Edit, BlueprintVisible, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMilestoneTier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SelectObject_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SelectObject_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_SelectObject_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Milestone_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)

void UWBP_RacingRingsResultPopup_C::AddMilestone(const struct FMilestoneResultData& Data, const struct FSlateChildSize& NewLocalVar_0, const struct FMargin& K2Node_MakeStruct_Margin, enum class EMilestoneTier Temp_byte_Variable, class UObject* CallFunc_SelectObject_ReturnValue, class UObject* CallFunc_SelectObject_ReturnValue_1, class UObject* CallFunc_SelectObject_ReturnValue_2, class UObject* CallFunc_SelectObject_ReturnValue_3, class UObject* K2Node_Select_Default, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue_1, class UWBP_Milestone_C* CallFunc_Create_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "AddMilestone");

	Params::UWBP_RacingRingsResultPopup_C_AddMilestone_Params Parms{};

	Parms.Data = Data;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_SelectObject_ReturnValue = CallFunc_SelectObject_ReturnValue;
	Parms.CallFunc_SelectObject_ReturnValue_1 = CallFunc_SelectObject_ReturnValue_1;
	Parms.CallFunc_SelectObject_ReturnValue_2 = CallFunc_SelectObject_ReturnValue_2;
	Parms.CallFunc_SelectObject_ReturnValue_3 = CallFunc_SelectObject_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue_1 = CallFunc_Conv_ColorToLinearColor_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RacingRingsResultPopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RacingRingsResultPopup.WBP_RacingRingsResultPopup_C.ExecuteUbergraph_WBP_RacingRingsResultPopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RacingRingsResultPopup_C::ExecuteUbergraph_WBP_RacingRingsResultPopup(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RacingRingsResultPopup_C", "ExecuteUbergraph_WBP_RacingRingsResultPopup");

	Params::UWBP_RacingRingsResultPopup_C_ExecuteUbergraph_WBP_RacingRingsResultPopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


