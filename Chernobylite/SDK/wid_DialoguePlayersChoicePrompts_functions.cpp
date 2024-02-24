#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C
// (None)

class UClass* UWid_DialoguePlayersChoicePrompts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialoguePlayersChoicePrompts_C");

	return Clss;
}


// wid_DialoguePlayersChoicePrompts_C wid_DialoguePlayersChoicePrompts.Default__wid_DialoguePlayersChoicePrompts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialoguePlayersChoicePrompts_C* UWid_DialoguePlayersChoicePrompts_C::GetDefaultObj()
{
	static class UWid_DialoguePlayersChoicePrompts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialoguePlayersChoicePrompts_C*>(UWid_DialoguePlayersChoicePrompts_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.UpdateSubtitleManagerOffset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ToZero                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_SubtitleManager_C*>CallFunc_GetAllWidgetsOfClass_FoundWidgets                       (ReferenceParm, ContainsInstancedReference)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_SubtitleManager_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::UpdateSubtitleManagerOffset(bool ToZero, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, TArray<class UWid_SubtitleManager_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UWid_SubtitleManager_C* CallFunc_Array_Get_Item, float CallFunc_SelectFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "UpdateSubtitleManagerOffset");

	Params::UWid_DialoguePlayersChoicePrompts_C_UpdateSubtitleManagerOffset_Params Parms{};

	Parms.ToZero = ToZero;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetAllWidgetsOfClass_FoundWidgets = CallFunc_GetAllWidgetsOfClass_FoundWidgets;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.AddPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Idx                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialoguePrompt_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialoguePlayersChoicePrompts_C::AddPrompt(int32 Idx, class UWid_DialoguePrompt_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "AddPrompt");

	Params::UWid_DialoguePlayersChoicePrompts_C_AddPrompt_Params Parms{};

	Parms.Idx = Idx;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.RemoveTrailingSplitCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Counter                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      String                                                           (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSubstring_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Len_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCharacterAt_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWid_DialoguePlayersChoicePrompts_C::RemoveTrailingSplitCharacter(class FText Text, int32 Counter, const class FString& String, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const class FString& CallFunc_GetSubstring_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue_1, class FText K2Node_Select_Default, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Len_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, const class FString& CallFunc_GetCharacterAt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "RemoveTrailingSplitCharacter");

	Params::UWid_DialoguePlayersChoicePrompts_C_RemoveTrailingSplitCharacter_Params Parms{};

	Parms.Text = Text;
	Parms.Counter = Counter;
	Parms.String = String;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetSubstring_ReturnValue = CallFunc_GetSubstring_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Len_ReturnValue_1 = CallFunc_Len_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Len_ReturnValue_2 = CallFunc_Len_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCharacterAt_ReturnValue = CallFunc_GetCharacterAt_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.CleanInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialoguePlayersChoicePrompts_C::CleanInput(class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "CleanInput");

	Params::UWid_DialoguePlayersChoicePrompts_C_CleanInput_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.SelectedIndex
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UWid_DialoguePlayersChoicePrompts_C::SelectedIndex(bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "SelectedIndex");

	Params::UWid_DialoguePlayersChoicePrompts_C_SelectedIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	return Parms.ReturnValue;

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.StartSidelineInterpolation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Speed                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Target                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Current                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialoguePlayersChoicePrompts_C::StartSidelineInterpolation(float Speed, float Target, float Current)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "StartSidelineInterpolation");

	Params::UWid_DialoguePlayersChoicePrompts_C_StartSidelineInterpolation_Params Parms{};

	Parms.Speed = Speed;
	Parms.Target = Target;
	Parms.Current = Current;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.SetCanvasTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewTop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Bottom                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::SetCanvasTop(class UWidget* Widget, float NewTop, float Bottom, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "SetCanvasTop");

	Params::UWid_DialoguePlayersChoicePrompts_C_SetCanvasTop_Params Parms{};

	Parms.Widget = Widget;
	Parms.NewTop = NewTop;
	Parms.Bottom = Bottom;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.GetCanvasY
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Top                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::GetCanvasY(class UWidget* Widget, float* Top, float* Height, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "GetCanvasY");

	Params::UWid_DialoguePlayersChoicePrompts_C_GetCanvasY_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Top != nullptr)
		*Top = Parms.Top;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.GetCurrent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialoguePlayersChoicePrompts_C::GetCurrent(bool* Enabled, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "GetCurrent");

	Params::UWid_DialoguePlayersChoicePrompts_C_GetCurrent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.SelectOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowSoundEvent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               WasPreviouslySelected                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_DialoguePrompt_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialoguePrompt_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_RemoveTrailingSplitCharacter_ReturnValue                (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::SelectOption(int32 Index, bool AllowSoundEvent, bool WasPreviouslySelected, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWid_DialoguePrompt_C* CallFunc_Array_Get_Item, class UWid_DialoguePrompt_C* CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default, class FText CallFunc_RemoveTrailingSplitCharacter_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "SelectOption");

	Params::UWid_DialoguePlayersChoicePrompts_C_SelectOption_Params Parms{};

	Parms.Index = Index;
	Parms.AllowSoundEvent = AllowSoundEvent;
	Parms.WasPreviouslySelected = WasPreviouslySelected;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RemoveTrailingSplitCharacter_ReturnValue = CallFunc_RemoveTrailingSplitCharacter_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Fill Prompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialoguePrompt_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueSingleOptionDataCallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::Fill_Prompts(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_DialoguePrompt_C* CallFunc_Array_Get_Item, const struct FStruct_DialogueSingleOptionData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Fill Prompts");

	Params::UWid_DialoguePlayersChoicePrompts_C_Fill_Prompts_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.FillReferencesArrayAndShowCorrectPromptsNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::FillReferencesArrayAndShowCorrectPromptsNumber(int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "FillReferencesArrayAndShowCorrectPromptsNumber");

	Params::UWid_DialoguePlayersChoicePrompts_C_FillReferencesArrayAndShowCorrectPromptsNumber_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Next
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Previous
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Refresh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Init
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FDialogueSingleOptionData>Prompts                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialoguePlayersChoicePrompts_C::Init(TArray<struct FDialogueSingleOptionData>& Prompts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Init");

	Params::UWid_DialoguePlayersChoicePrompts_C_Init_Params Parms{};

	Parms.Prompts = Prompts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.InitBP
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FStruct_DialogueSingleOptionData>Prompts                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWid_DialoguePlayersChoicePrompts_C::InitBP(TArray<struct FStruct_DialogueSingleOptionData>& Prompts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "InitBP");

	Params::UWid_DialoguePlayersChoicePrompts_C_InitBP_Params Parms{};

	Parms.Prompts = Prompts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Up
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Down
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "PreConstruct");

	Params::UWid_DialoguePlayersChoicePrompts_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.PostSelectionEvent
// (Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::PostSelectionEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "PostSelectionEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.PauseToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPaused                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::PauseToggled(bool IsPaused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "PauseToggled");

	Params::UWid_DialoguePlayersChoicePrompts_C_PauseToggled_Params Parms{};

	Parms.IsPaused = IsPaused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.BindPauseToggledEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::BindPauseToggledEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "BindPauseToggledEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.UnbindPauseToggledEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::UnbindPauseToggledEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "UnbindPauseToggledEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.BindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::BindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "BindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.UnbindPhotomodeToggled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialoguePlayersChoicePrompts_C::UnbindPhotomodeToggled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "UnbindPhotomodeToggled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.PhotomodeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsActivated                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialoguePlayersChoicePrompts_C::PhotomodeChanged(bool bIsActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "PhotomodeChanged");

	Params::UWid_DialoguePlayersChoicePrompts_C_PhotomodeChanged_Params Parms{};

	Parms.bIsActivated = bIsActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialoguePlayersChoicePrompts.wid_DialoguePlayersChoicePrompts_C.ExecuteUbergraph_wid_DialoguePlayersChoicePrompts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDialogueSingleOptionData>K2Node_Event_Prompts                                             (ConstParm, ReferenceParm)
// struct FDialogueSingleOptionData   CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_DialogueSingleOptionDataK2Node_MakeStruct_struct_DialogueSingleOptionData                (HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_DialogueSingleOptionData>K2Node_CustomEvent_Prompts                                       (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsPaused                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameModeBase_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bIsActivated                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialoguePlayersChoicePrompts_C::ExecuteUbergraph_wid_DialoguePlayersChoicePrompts(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<struct FDialogueSingleOptionData>& K2Node_Event_Prompts, const struct FDialogueSingleOptionData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FStruct_DialogueSingleOptionData& K2Node_MakeStruct_struct_DialogueSingleOptionData, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FStruct_DialogueSingleOptionData>& K2Node_CustomEvent_Prompts, int32 CallFunc_Array_Add_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_LastInputWasFromGamepad_Gamepad, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Clamp_ReturnValue_1, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_PostEvent_ReturnValue, bool K2Node_CustomEvent_IsPaused, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialoguePlayersChoicePrompts_C", "ExecuteUbergraph_wid_DialoguePlayersChoicePrompts");

	Params::UWid_DialoguePlayersChoicePrompts_C_ExecuteUbergraph_wid_DialoguePlayersChoicePrompts_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_Prompts = K2Node_Event_Prompts;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_struct_DialogueSingleOptionData = K2Node_MakeStruct_struct_DialogueSingleOptionData;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Prompts = K2Node_CustomEvent_Prompts;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.K2Node_CustomEvent_IsPaused = K2Node_CustomEvent_IsPaused;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_2 = CallFunc_GetCGGameInstance_AsCGGame_Instance_2;
	Parms.CallFunc_GetCGGameModeBase_ReturnValue = CallFunc_GetCGGameModeBase_ReturnValue;
	Parms.K2Node_CustomEvent_bIsActivated = K2Node_CustomEvent_bIsActivated;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


