#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C
// (None)

class UClass* UWid_PDA_Menu_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_PDA_Menu_Entry_C");

	return Clss;
}


// wid_PDA_Menu_Entry_C wid_PDA_Menu_Entry.Default__wid_PDA_Menu_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_PDA_Menu_Entry_C* UWid_PDA_Menu_Entry_C::GetDefaultObj()
{
	static class UWid_PDA_Menu_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_PDA_Menu_Entry_C*>(UWid_PDA_Menu_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.GetBoardSelectedIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentlySelectedIndex_Index                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_PDA_Menu_Entry_C::GetBoardSelectedIndex(int32* Index, bool* Valid, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, int32 CallFunc_GetCurrentlySelectedIndex_Index, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "GetBoardSelectedIndex");

	Params::UWid_PDA_Menu_Entry_C_GetBoardSelectedIndex_Params Parms{};

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetCurrentlySelectedIndex_Index = CallFunc_GetCurrentlySelectedIndex_Index;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.Select
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBoardSelectedIndex_Index                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoardSelectedIndex_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHovered_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// struct FSlateFontInfo              K2Node_Select_Default_3                                          (HasGetValueTypeHash)

void UWid_PDA_Menu_Entry_C::Select(bool Select, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int32 CallFunc_GetBoardSelectedIndex_Index, bool CallFunc_GetBoardSelectedIndex_Valid, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateFontInfo& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "Select");

	Params::UWid_PDA_Menu_Entry_C_Select_Params Parms{};

	Parms.Select = Select;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetBoardSelectedIndex_Index = CallFunc_GetBoardSelectedIndex_Index;
	Parms.CallFunc_GetBoardSelectedIndex_Valid = CallFunc_GetBoardSelectedIndex_Valid;
	Parms.CallFunc_IsHovered_ReturnValue = CallFunc_IsHovered_ReturnValue;
	Parms.CallFunc_IsHovered_ReturnValue_1 = CallFunc_IsHovered_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_PDA_Menu_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "PreConstruct");

	Params::UWid_PDA_Menu_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_PDA_Menu_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_PDA_Menu_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_PDA_Menu_Entry_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_PDA_Menu_Entry.wid_PDA_Menu_Entry_C.ExecuteUbergraph_wid_PDA_Menu_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBoardSelectedIndex_Index                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBoardSelectedIndex_Valid                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_PDA_Menu_Entry_C::ExecuteUbergraph_wid_PDA_Menu_Entry(int32 EntryPoint, int32 CallFunc_GetBoardSelectedIndex_Index, bool CallFunc_GetBoardSelectedIndex_Valid, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_PDA_Menu_Entry_C", "ExecuteUbergraph_wid_PDA_Menu_Entry");

	Params::UWid_PDA_Menu_Entry_C_ExecuteUbergraph_wid_PDA_Menu_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBoardSelectedIndex_Index = CallFunc_GetBoardSelectedIndex_Index;
	Parms.CallFunc_GetBoardSelectedIndex_Valid = CallFunc_GetBoardSelectedIndex_Valid;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


