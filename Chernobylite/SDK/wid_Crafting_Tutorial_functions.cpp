#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Crafting_Tutorial.wid_Crafting_Tutorial_C
// (None)

class UClass* UWid_Crafting_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Crafting_Tutorial_C");

	return Clss;
}


// wid_Crafting_Tutorial_C wid_Crafting_Tutorial.Default__wid_Crafting_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Crafting_Tutorial_C* UWid_Crafting_Tutorial_C::GetDefaultObj()
{
	static class UWid_Crafting_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Crafting_Tutorial_C*>(UWid_Crafting_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Crafting_Tutorial.wid_Crafting_Tutorial_C.UpdateTextBasedOnInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (ConstParm)

void UWid_Crafting_Tutorial_C::UpdateTextBasedOnInput(bool Temp_bool_Variable, bool CallFunc_LastInputWasFromGamepad_Gamepad, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Tutorial_C", "UpdateTextBasedOnInput");

	Params::UWid_Crafting_Tutorial_C_UpdateTextBasedOnInput_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Crafting_Tutorial.wid_Crafting_Tutorial_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Crafting_Tutorial_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Tutorial_C", "PreConstruct");

	Params::UWid_Crafting_Tutorial_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Crafting_Tutorial.wid_Crafting_Tutorial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Crafting_Tutorial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Tutorial_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Crafting_Tutorial.wid_Crafting_Tutorial_C.InputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewInputIsGamepad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Crafting_Tutorial_C::InputDeviceChanged(bool NewInputIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Tutorial_C", "InputDeviceChanged");

	Params::UWid_Crafting_Tutorial_C_InputDeviceChanged_Params Parms{};

	Parms.NewInputIsGamepad = NewInputIsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Crafting_Tutorial.wid_Crafting_Tutorial_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Crafting_Tutorial_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Tutorial_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Crafting_Tutorial.wid_Crafting_Tutorial_C.ExecuteUbergraph_wid_Crafting_Tutorial
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewInputIsGamepad                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Crafting_Tutorial_C::ExecuteUbergraph_wid_Crafting_Tutorial(int32 EntryPoint, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1, bool K2Node_CustomEvent_NewInputIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Crafting_Tutorial_C", "ExecuteUbergraph_wid_Crafting_Tutorial");

	Params::UWid_Crafting_Tutorial_C_ExecuteUbergraph_wid_Crafting_Tutorial_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1 = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1;
	Parms.K2Node_CustomEvent_NewInputIsGamepad = K2Node_CustomEvent_NewInputIsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}

}


