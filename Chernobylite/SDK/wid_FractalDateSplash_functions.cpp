#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_FractalDateSplash.wid_FractalDateSplash_C
// (None)

class UClass* UWid_FractalDateSplash_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_FractalDateSplash_C");

	return Clss;
}


// wid_FractalDateSplash_C wid_FractalDateSplash.Default__wid_FractalDateSplash_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_FractalDateSplash_C* UWid_FractalDateSplash_C::GetDefaultObj()
{
	static class UWid_FractalDateSplash_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_FractalDateSplash_C*>(UWid_FractalDateSplash_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Get_TimeText_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWid_FractalDateSplash_C::Get_TimeText_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "Get_TimeText_Text_0");

	Params::UWid_FractalDateSplash_C_Get_TimeText_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Get_Countdown_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWid_FractalDateSplash_C::Get_Countdown_Text_0(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "Get_Countdown_Text_0");

	Params::UWid_FractalDateSplash_C_Get_Countdown_Text_0_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Get_Current_Text_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWid_FractalDateSplash_C::Get_Current_Text_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "Get_Current_Text_0");

	Params::UWid_FractalDateSplash_C_Get_Current_Text_0_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_FractalDateSplash_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.SetCurrenttext
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_FractalDateSplash_C::SetCurrenttext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "SetCurrenttext");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.ExecuteUbergraph_wid_FractalDateSplash
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStr_FractalLocationsDates  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FractalDateSplash_C::ExecuteUbergraph_wid_FractalDateSplash(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FStr_FractalLocationsDates& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "ExecuteUbergraph_wid_FractalDateSplash");

	Params::UWid_FractalDateSplash_C_ExecuteUbergraph_wid_FractalDateSplash_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FractalDateSplash.wid_FractalDateSplash_C.Ended__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_FractalDateSplash_C::Ended__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FractalDateSplash_C", "Ended__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


