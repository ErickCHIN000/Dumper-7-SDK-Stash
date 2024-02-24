#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_TwitchDropEntry.UI_TwitchDropEntry_C
// (None)

class UClass* UUI_TwitchDropEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_TwitchDropEntry_C");

	return Clss;
}


// UI_TwitchDropEntry_C UI_TwitchDropEntry.Default__UI_TwitchDropEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_TwitchDropEntry_C* UUI_TwitchDropEntry_C::GetDefaultObj()
{
	static class UUI_TwitchDropEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_TwitchDropEntry_C*>(UUI_TwitchDropEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_TwitchDropEntry.UI_TwitchDropEntry_C.IsSkin?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_TwitchDropEntry_C::IsSkin_(bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TwitchDropEntry_C", "IsSkin?");

	Params::UUI_TwitchDropEntry_C_IsSkin__Params Parms{};

	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TwitchDropEntry.UI_TwitchDropEntry_C.SlotLabelVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_StrStr_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_TwitchDropEntry_C::SlotLabelVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_NotEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TwitchDropEntry_C", "SlotLabelVisibility");

	Params::UUI_TwitchDropEntry_C_SlotLabelVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_StrStr_ReturnValue_1 = CallFunc_NotEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_TwitchDropEntry.UI_TwitchDropEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_TwitchDropEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TwitchDropEntry_C", "PreConstruct");

	Params::UUI_TwitchDropEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_TwitchDropEntry.UI_TwitchDropEntry_C.ExecuteUbergraph_UI_TwitchDropEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_SlotLabelVisibility_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TwitchDrop_DisplayName_Name                             (None)
// enum class ESlateVisibility        CallFunc_SlotLabelVisibility_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_TwitchDropEntry_C::ExecuteUbergraph_UI_TwitchDropEntry(int32 EntryPoint, enum class ESlateVisibility CallFunc_SlotLabelVisibility_ReturnValue, int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool K2Node_Event_IsDesignTime, class FText CallFunc_TwitchDrop_DisplayName_Name, enum class ESlateVisibility CallFunc_SlotLabelVisibility_ReturnValue_1, class FText K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_TwitchDropEntry_C", "ExecuteUbergraph_UI_TwitchDropEntry");

	Params::UUI_TwitchDropEntry_C_ExecuteUbergraph_UI_TwitchDropEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotLabelVisibility_ReturnValue = CallFunc_SlotLabelVisibility_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TwitchDrop_DisplayName_Name = CallFunc_TwitchDrop_DisplayName_Name;
	Parms.CallFunc_SlotLabelVisibility_ReturnValue_1 = CallFunc_SlotLabelVisibility_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


