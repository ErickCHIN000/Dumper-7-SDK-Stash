#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Dialogue_Answer.UI_Dialogue_Answer_C
// (None)

class UClass* UUI_Dialogue_Answer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Dialogue_Answer_C");

	return Clss;
}


// UI_Dialogue_Answer_C UI_Dialogue_Answer.Default__UI_Dialogue_Answer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Dialogue_Answer_C* UUI_Dialogue_Answer_C::GetDefaultObj()
{
	static class UUI_Dialogue_Answer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Dialogue_Answer_C*>(UUI_Dialogue_Answer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Dialogue_Answer_C::SetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_Answer_C", "SetText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.SetHighlighted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Highlighted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_Select_Default                                            (None)
// struct FButtonStyle                K2Node_Select_Default_1                                          (ConstParm)

void UUI_Dialogue_Answer_C::SetHighlighted(bool Highlighted, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FButtonStyle& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_Answer_C", "SetHighlighted");

	Params::UUI_Dialogue_Answer_C_SetHighlighted_Params Parms{};

	Parms.Highlighted = Highlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Dialogue_Answer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_Answer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_Answer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_Answer_C", "PreConstruct");

	Params::UUI_Dialogue_Answer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Dialogue_Answer.UI_Dialogue_Answer_C.ExecuteUbergraph_UI_Dialogue_Answer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Dialogue_Answer_C::ExecuteUbergraph_UI_Dialogue_Answer(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Dialogue_Answer_C", "ExecuteUbergraph_UI_Dialogue_Answer");

	Params::UUI_Dialogue_Answer_C_ExecuteUbergraph_UI_Dialogue_Answer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


