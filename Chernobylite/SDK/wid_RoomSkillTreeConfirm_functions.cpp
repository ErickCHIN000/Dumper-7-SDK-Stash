#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C
// (None)

class UClass* UWid_RoomSkillTreeConfirm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_RoomSkillTreeConfirm_C");

	return Clss;
}


// wid_RoomSkillTreeConfirm_C wid_RoomSkillTreeConfirm.Default__wid_RoomSkillTreeConfirm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_RoomSkillTreeConfirm_C* UWid_RoomSkillTreeConfirm_C::GetDefaultObj()
{
	static class UWid_RoomSkillTreeConfirm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_RoomSkillTreeConfirm_C*>(UWid_RoomSkillTreeConfirm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.GetGamepadIcon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        InitialPS4                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         InitialX                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        PS4                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         XBox                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_X1         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_X1         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_PS4        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Buttons_X1         K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeConfirm_C::GetGamepadIcon(class FName Action, enum class Enum_Buttons_PS4 InitialPS4, enum class Enum_Buttons_X1 InitialX, enum class Enum_Buttons_PS4* PS4, enum class Enum_Buttons_X1* XBox, bool Temp_bool_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, enum class Enum_Buttons_X1 Temp_byte_Variable, bool Temp_bool_Variable_1, enum class Enum_Buttons_X1 K2Node_Select_Default, enum class Enum_Buttons_PS4 Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class Enum_Buttons_PS4 K2Node_Select_Default_1, enum class Enum_Buttons_X1 Temp_byte_Variable_2, bool Temp_bool_Variable_3, enum class Enum_Buttons_X1 K2Node_Select_Default_2, enum class Enum_Buttons_PS4 Temp_byte_Variable_3, enum class Enum_Buttons_PS4 K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "GetGamepadIcon");

	Params::UWid_RoomSkillTreeConfirm_C_GetGamepadIcon_Params Parms{};

	Parms.Action = Action;
	Parms.InitialPS4 = InitialPS4;
	Parms.InitialX = InitialX;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	if (PS4 != nullptr)
		*PS4 = Parms.PS4;

	if (XBox != nullptr)
		*XBox = Parms.XBox;

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetTextMessage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        CallFunc_KeyToIcon_OutText                                       (None)

void UWid_RoomSkillTreeConfirm_C::SetTextMessage(class FText& InText, class FText CallFunc_KeyToIcon_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "SetTextMessage");

	Params::UWid_RoomSkillTreeConfirm_C_SetTextMessage_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_KeyToIcon_OutText = CallFunc_KeyToIcon_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetTimeSinceLastSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SecondsString                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MinutesString                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeSinceSave                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_ReplaceTimeSinceLastSave_ReturnValue                    (None)

void UWid_RoomSkillTreeConfirm_C::SetTimeSinceLastSave(class FName SecondsString, class FName MinutesString, float TimeSinceSave, bool Temp_bool_Variable, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool Temp_bool_Variable_1, int32 CallFunc_FFloor_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, class FName K2Node_Select_Default_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class FText CallFunc_ReplaceTimeSinceLastSave_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "SetTimeSinceLastSave");

	Params::UWid_RoomSkillTreeConfirm_C_SetTimeSinceLastSave_Params Parms{};

	Parms.SecondsString = SecondsString;
	Parms.MinutesString = MinutesString;
	Parms.TimeSinceSave = TimeSinceSave;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_ReplaceTimeSinceLastSave_ReturnValue = CallFunc_ReplaceTimeSinceLastSave_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.ReplaceTimeSinceLastSave
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWid_RoomSkillTreeConfirm_C::ReplaceTimeSinceLastSave(class FText Text, int32 Time, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "ReplaceTimeSinceLastSave");

	Params::UWid_RoomSkillTreeConfirm_C_ReplaceTimeSinceLastSave_Params Parms{};

	Parms.Text = Text;
	Parms.Time = Time;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeConfirm_C::UpdateSize(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "UpdateSize");

	Params::UWid_RoomSkillTreeConfirm_C_UpdateSize_Params Parms{};

	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.GetButtonName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeConfirm_C::GetButtonName(class FText Name, class FText* Text, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2, bool CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "GetButtonName");

	Params::UWid_RoomSkillTreeConfirm_C_GetButtonName_Params Parms{};

	Parms.Name = Name;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1 = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2 = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3 = CallFunc_EqualEqual_IgnoreCase_TextText_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.UnhideButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::UnhideButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "UnhideButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.CustomReplaceText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ParsedText                                                       (Parm, OutParm)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UWid_RoomSkillTreeConfirm_C::CustomReplaceText(class FText Text, class FText* ParsedText, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "CustomReplaceText");

	Params::UWid_RoomSkillTreeConfirm_C_CustomReplaceText_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ParsedText != nullptr)
		*ParsedText = Parms.ParsedText;

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.Hide button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::Hide_button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "Hide button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        _Yes__Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        _Yes_PC_Action                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         _Yes__PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         _Yes__X1                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        _Yes__PS4                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PC         _Cancel__PC1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         _Cancel__X1                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        _Cancel__PS4                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        _Cancel__Name                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FName                        _Cancel_PC_Action                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_PS4        CallFunc_GetGamepadIcon_PS4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         CallFunc_GetGamepadIcon_XBox                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_GetButtonName_Text                                      (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// enum class Enum_Buttons_PS4        CallFunc_GetGamepadIcon_PS4_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Buttons_X1         CallFunc_GetGamepadIcon_XBox_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetButtonName_Text_1                                    (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UWid_RoomSkillTreeConfirm_C::SetButtons(class FText _Yes__Name, class FName _Yes_PC_Action, enum class Enum_Buttons_PC _Yes__PC, enum class Enum_Buttons_X1 _Yes__X1, enum class Enum_Buttons_PS4 _Yes__PS4, enum class Enum_Buttons_PC _Cancel__PC1, enum class Enum_Buttons_X1 _Cancel__X1, enum class Enum_Buttons_PS4 _Cancel__PS4, class FText _Cancel__Name, class FName _Cancel_PC_Action, enum class Enum_Buttons_PS4 CallFunc_GetGamepadIcon_PS4, enum class Enum_Buttons_X1 CallFunc_GetGamepadIcon_XBox, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetButtonName_Text, class FText CallFunc_TextToUpper_ReturnValue, enum class Enum_Buttons_PS4 CallFunc_GetGamepadIcon_PS4_1, enum class Enum_Buttons_X1 CallFunc_GetGamepadIcon_XBox_1, class FText CallFunc_GetButtonName_Text_1, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "SetButtons");

	Params::UWid_RoomSkillTreeConfirm_C_SetButtons_Params Parms{};

	Parms._Yes__Name = _Yes__Name;
	Parms._Yes_PC_Action = _Yes_PC_Action;
	Parms._Yes__PC = _Yes__PC;
	Parms._Yes__X1 = _Yes__X1;
	Parms._Yes__PS4 = _Yes__PS4;
	Parms._Cancel__PC1 = _Cancel__PC1;
	Parms._Cancel__X1 = _Cancel__X1;
	Parms._Cancel__PS4 = _Cancel__PS4;
	Parms._Cancel__Name = _Cancel__Name;
	Parms._Cancel_PC_Action = _Cancel_PC_Action;
	Parms.CallFunc_GetGamepadIcon_PS4 = CallFunc_GetGamepadIcon_PS4;
	Parms.CallFunc_GetGamepadIcon_XBox = CallFunc_GetGamepadIcon_XBox;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetButtonName_Text = CallFunc_GetButtonName_Text;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetGamepadIcon_PS4_1 = CallFunc_GetGamepadIcon_PS4_1;
	Parms.CallFunc_GetGamepadIcon_XBox_1 = CallFunc_GetGamepadIcon_XBox_1;
	Parms.CallFunc_GetButtonName_Text_1 = CallFunc_GetButtonName_Text_1;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        KeyName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TimeSinceSave                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_Dictionary              CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CustomReplaceText_ParsedText                            (None)

void UWid_RoomSkillTreeConfirm_C::SetMessage(class FName KeyName, float TimeSinceSave, bool K2Node_SwitchName_CmpSuccess, const struct FSt_Dictionary& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_CustomReplaceText_ParsedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "SetMessage");

	Params::UWid_RoomSkillTreeConfirm_C_SetMessage_Params Parms{};

	Parms.KeyName = KeyName;
	Parms.TimeSinceSave = TimeSinceSave;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CustomReplaceText_ParsedText = CallFunc_CustomReplaceText_ParsedText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeConfirm_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "PreConstruct");

	Params::UWid_RoomSkillTreeConfirm_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeConfirm_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "Tick");

	Params::UWid_RoomSkillTreeConfirm_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.BndEvt__Yes_K2Node_ComponentBoundEvent_0_BtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::BndEvt__Yes_K2Node_ComponentBoundEvent_0_BtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "BndEvt__Yes_K2Node_ComponentBoundEvent_0_BtnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.BndEvt__No_K2Node_ComponentBoundEvent_1_BtnPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::BndEvt__No_K2Node_ComponentBoundEvent_1_BtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "BndEvt__No_K2Node_ComponentBoundEvent_1_BtnPressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.ExecuteUbergraph_wid_RoomSkillTreeConfirm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_RoomSkillTreeConfirm_C::ExecuteUbergraph_wid_RoomSkillTreeConfirm(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "ExecuteUbergraph_wid_RoomSkillTreeConfirm");

	Params::UWid_RoomSkillTreeConfirm_C_ExecuteUbergraph_wid_RoomSkillTreeConfirm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.OnCancelClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::OnCancelClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "OnCancelClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeConfirm.wid_RoomSkillTreeConfirm_C.OnYesClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeConfirm_C::OnYesClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeConfirm_C", "OnYesClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


