#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C
// (None)

class UClass* UWid_LevelSelector_Tutorial_Companions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_LevelSelector_Tutorial_Companions_C");

	return Clss;
}


// wid_LevelSelector_Tutorial_Companions_C wid_LevelSelector_Tutorial_Companions.Default__wid_LevelSelector_Tutorial_Companions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_LevelSelector_Tutorial_Companions_C* UWid_LevelSelector_Tutorial_Companions_C::GetDefaultObj()
{
	static class UWid_LevelSelector_Tutorial_Companions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_LevelSelector_Tutorial_Companions_C*>(UWid_LevelSelector_Tutorial_Companions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.UpdateBasedOnType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable                                         (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_softobject_Variable_1                                       (UObjectWrapper, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default                                            (UObjectWrapper, HasGetValueTypeHash)

void UWid_LevelSelector_Tutorial_Companions_C::UpdateBasedOnType(bool Temp_bool_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable, TSoftObjectPtr<class UTexture2D> Temp_softobject_Variable_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "UpdateBasedOnType");

	Params::UWid_LevelSelector_Tutorial_Companions_C_UpdateBasedOnType_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_softobject_Variable = Temp_softobject_Variable;
	Parms.Temp_softobject_Variable_1 = Temp_softobject_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.UpdateTextBasedOnInput
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (ConstParm)
// class FText                        K2Node_Select_Default_1                                          (ConstParm)
// class FText                        CallFunc_KeyToIcon_OutText                                       (None)

void UWid_LevelSelector_Tutorial_Companions_C::UpdateTextBasedOnInput(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_LastInputWasFromGamepad_Gamepad, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText CallFunc_KeyToIcon_OutText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "UpdateTextBasedOnInput");

	Params::UWid_LevelSelector_Tutorial_Companions_C_UpdateTextBasedOnInput_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_KeyToIcon_OutText = CallFunc_KeyToIcon_OutText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelector_Tutorial_Companions_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "PreConstruct");

	Params::UWid_LevelSelector_Tutorial_Companions_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelSelector_Tutorial_Companions_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.InputDeviceChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewInputIsGamepad                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_LevelSelector_Tutorial_Companions_C::InputDeviceChanged(bool NewInputIsGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "InputDeviceChanged");

	Params::UWid_LevelSelector_Tutorial_Companions_C_InputDeviceChanged_Params Parms{};

	Parms.NewInputIsGamepad = NewInputIsGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_LevelSelector_Tutorial_Companions_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_LevelSelector_Tutorial_Companions.wid_LevelSelector_Tutorial_Companions_C.ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewInputIsGamepad                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACGGameModeBase*             CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_LevelSelector_Tutorial_Companions_C::ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode, bool K2Node_CustomEvent_NewInputIsGamepad, class ACGGameModeBase* CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_LevelSelector_Tutorial_Companions_C", "ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions");

	Params::UWid_LevelSelector_Tutorial_Companions_C_ExecuteUbergraph_wid_LevelSelector_Tutorial_Companions_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode;
	Parms.K2Node_CustomEvent_NewInputIsGamepad = K2Node_CustomEvent_NewInputIsGamepad;
	Parms.CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1 = CallFunc_GetCGGameMode_AsFirst_Person_Game_Mode_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


