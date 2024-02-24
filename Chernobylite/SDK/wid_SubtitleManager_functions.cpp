#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_SubtitleManager.wid_SubtitleManager_C
// (None)

class UClass* UWid_SubtitleManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_SubtitleManager_C");

	return Clss;
}


// wid_SubtitleManager_C wid_SubtitleManager.Default__wid_SubtitleManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_SubtitleManager_C* UWid_SubtitleManager_C::GetDefaultObj()
{
	static class UWid_SubtitleManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_SubtitleManager_C*>(UWid_SubtitleManager_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_SubtitleManager.wid_SubtitleManager_C.GetStartingPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              StartingPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::GetStartingPosition(float* StartingPosition, bool Temp_bool_Variable, float Temp_float_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "GetStartingPosition");

	Params::UWid_SubtitleManager_C_GetStartingPosition_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (StartingPosition != nullptr)
		*StartingPosition = Parms.StartingPosition;

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.AddAvatarSubtitle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActorName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SubtitleText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        ActorId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ActorColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsPlaceholderText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USubtitleEntry*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartingPosition_StartingPosition                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_AvatarSubtitleEntry_C*  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetCustomOffset_Offsets                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USubtitleEntry* UWid_SubtitleManager_C::AddAvatarSubtitle(class FText& ActorName, class FText& SubtitleText, class FName ActorId, float TimeShown, const struct FLinearColor& ActorColor, bool IsPlaceholderText, float CallFunc_GetStartingPosition_StartingPosition, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_AvatarSubtitleEntry_C* CallFunc_Create_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FMargin& CallFunc_GetCustomOffset_Offsets, float CallFunc_Subtract_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "AddAvatarSubtitle");

	Params::UWid_SubtitleManager_C_AddAvatarSubtitle_Params Parms{};

	Parms.ActorName = ActorName;
	Parms.SubtitleText = SubtitleText;
	Parms.ActorId = ActorId;
	Parms.TimeShown = TimeShown;
	Parms.ActorColor = ActorColor;
	Parms.IsPlaceholderText = IsPlaceholderText;
	Parms.CallFunc_GetStartingPosition_StartingPosition = CallFunc_GetStartingPosition_StartingPosition;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetCustomOffset_Offsets = CallFunc_GetCustomOffset_Offsets;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.AddSubtitle
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActorName                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SubtitleText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              TimeShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                ActorColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USubtitleEntry*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SubtitlesAreInDebugMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetStartingPosition_StartingPosition                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_SubtitlesAreInDebugMode_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Subtitle_C*             CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USubtitleEntry* UWid_SubtitleManager_C::AddSubtitle(class FText& ActorName, class FText& SubtitleText, float TimeShown, const struct FLinearColor& ActorColor, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue, float CallFunc_GetStartingPosition_StartingPosition, const struct FAnchors& K2Node_MakeStruct_Anchors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWid_Subtitle_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "AddSubtitle");

	Params::UWid_SubtitleManager_C_AddSubtitle_Params Parms{};

	Parms.ActorName = ActorName;
	Parms.SubtitleText = SubtitleText;
	Parms.TimeShown = TimeShown;
	Parms.ActorColor = ActorColor;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SubtitlesAreInDebugMode_ReturnValue = CallFunc_SubtitlesAreInDebugMode_ReturnValue;
	Parms.CallFunc_GetStartingPosition_StartingPosition = CallFunc_GetStartingPosition_StartingPosition;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SubtitlesAreInDebugMode_ReturnValue_1 = CallFunc_SubtitlesAreInDebugMode_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.AddWhisper
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        WhisperText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// float                              TimeShown                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                TextColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Whisper_C*              _Whisper                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UUserWidget* UWid_SubtitleManager_C::AddWhisper(class FText& WhisperText, float TimeShown, const struct FLinearColor& TextColor, class UWid_Whisper_C* _Whisper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "AddWhisper");

	Params::UWid_SubtitleManager_C_AddWhisper_Params Parms{};

	Parms.WhisperText = WhisperText;
	Parms.TimeShown = TimeShown;
	Parms.TextColor = TextColor;
	Parms._Whisper = _Whisper;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.UpdatePositions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MarginBetweenLines                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocationY                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStartingPosition_StartingPosition                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Whisper_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPosition_Top                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPosition_Top_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::UpdatePositions(float DeltaTime, float MarginBetweenLines, float LocationY, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, float CallFunc_GetStartingPosition_StartingPosition, class UWid_Whisper_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_GetPosition_Top, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FInterpTo_Constant_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue_3, float CallFunc_GetPosition_Top_1, int32 CallFunc_Max_ReturnValue_1, float CallFunc_FInterpTo_Constant_ReturnValue_1, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "UpdatePositions");

	Params::UWid_SubtitleManager_C_UpdatePositions_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.MarginBetweenLines = MarginBetweenLines;
	Parms.LocationY = LocationY;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetStartingPosition_StartingPosition = CallFunc_GetStartingPosition_StartingPosition;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPosition_Top = CallFunc_GetPosition_Top;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_GetPosition_Top_1 = CallFunc_GetPosition_Top_1;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue_1 = CallFunc_FInterpTo_Constant_ReturnValue_1;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              In_Offset_Top                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SubtitleManager_C::SetPosition(class UWidget* Widget, float In_Offset_Top, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "SetPosition");

	Params::UWid_SubtitleManager_C_SetPosition_Params Parms{};

	Parms.Widget = Widget;
	Parms.In_Offset_Top = In_Offset_Top;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.GetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Top                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     CallFunc_GetOffsets_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SubtitleManager_C::GetPosition(class UWidget* Widget, float* Top, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FMargin& CallFunc_GetOffsets_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "GetPosition");

	Params::UWid_SubtitleManager_C_GetPosition_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOffsets_ReturnValue = CallFunc_GetOffsets_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Top != nullptr)
		*Top = Parms.Top;

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "Tick");

	Params::UWid_SubtitleManager_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.DestroySubtile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Subtitle_C*             Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::DestroySubtile(class UWid_Subtitle_C* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "DestroySubtile");

	Params::UWid_SubtitleManager_C_DestroySubtile_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.DestroyWhisper
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Whisper_C*              Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::DestroyWhisper(class UWid_Whisper_C* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "DestroyWhisper");

	Params::UWid_SubtitleManager_C_DestroyWhisper_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.RemoveWhisperOrSubtitle
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Whisper                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::RemoveWhisperOrSubtitle(class UUserWidget* Whisper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "RemoveWhisperOrSubtitle");

	Params::UWid_SubtitleManager_C_RemoveWhisperOrSubtitle_Params Parms{};

	Parms.Whisper = Whisper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SubtitleManager_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "PreConstruct");

	Params::UWid_SubtitleManager_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.DestroyAvatarSubtitle
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_AvatarSubtitleEntry_C*  Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_SubtitleManager_C::DestroyAvatarSubtitle(class UWid_AvatarSubtitleEntry_C* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "DestroyAvatarSubtitle");

	Params::UWid_SubtitleManager_C_DestroyAvatarSubtitle_Params Parms{};

	Parms.Object = Object;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_SubtitleManager.wid_SubtitleManager_C.ExecuteUbergraph_wid_SubtitleManager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SubtitlesAreInDebugMode_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_Whisper_C*              K2Node_CustomEvent_Object_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SubtitlesAreInDebugMode_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Whisper                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Subtitle_C*             K2Node_CustomEvent_Object_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_Whisper_C*              K2Node_DynamicCast_AsWid_Whisper                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class UWid_Subtitle_C*             K2Node_DynamicCast_AsWid_Subtitle                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_4                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_5                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_SubtitlesAreInDebugMode_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_AvatarSubtitleEntry_C*  K2Node_CustomEvent_Object                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SubtitlesAreInDebugMode_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_SubtitleManager_C::ExecuteUbergraph_wid_SubtitleManager(int32 EntryPoint, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue, class UWid_Whisper_C* K2Node_CustomEvent_Object_1, bool CallFunc_Array_RemoveItem_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UUserWidget* K2Node_Event_Whisper, class UWid_Subtitle_C* K2Node_CustomEvent_Object_2, class UWid_Whisper_C* K2Node_DynamicCast_AsWid_Whisper, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_RemoveItem_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class UWid_Subtitle_C* K2Node_DynamicCast_AsWid_Subtitle, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_2, bool K2Node_Event_IsDesignTime, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UWid_AvatarSubtitleEntry_C* K2Node_CustomEvent_Object, bool CallFunc_Array_RemoveItem_ReturnValue_2, bool CallFunc_SubtitlesAreInDebugMode_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_SubtitleManager_C", "ExecuteUbergraph_wid_SubtitleManager");

	Params::UWid_SubtitleManager_C_ExecuteUbergraph_wid_SubtitleManager_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SubtitlesAreInDebugMode_ReturnValue = CallFunc_SubtitlesAreInDebugMode_ReturnValue;
	Parms.K2Node_CustomEvent_Object_1 = K2Node_CustomEvent_Object_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_SubtitlesAreInDebugMode_ReturnValue_1 = CallFunc_SubtitlesAreInDebugMode_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_Event_Whisper = K2Node_Event_Whisper;
	Parms.K2Node_CustomEvent_Object_2 = K2Node_CustomEvent_Object_2;
	Parms.K2Node_DynamicCast_AsWid_Whisper = K2Node_DynamicCast_AsWid_Whisper;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsWid_Subtitle = K2Node_DynamicCast_AsWid_Subtitle;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_4 = CallFunc_Conv_TextToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue_5 = CallFunc_Conv_TextToString_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_SubtitlesAreInDebugMode_ReturnValue_2 = CallFunc_SubtitlesAreInDebugMode_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.K2Node_CustomEvent_Object = K2Node_CustomEvent_Object;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_2 = CallFunc_Array_RemoveItem_ReturnValue_2;
	Parms.CallFunc_SubtitlesAreInDebugMode_ReturnValue_3 = CallFunc_SubtitlesAreInDebugMode_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


