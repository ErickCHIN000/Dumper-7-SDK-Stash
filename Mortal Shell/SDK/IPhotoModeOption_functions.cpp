#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IPhotoModeOption.IPhotoModeOption_C
// (None)

class UClass* IIPhotoModeOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IPhotoModeOption_C");

	return Clss;
}


// IPhotoModeOption_C IPhotoModeOption.Default__IPhotoModeOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIPhotoModeOption_C* IIPhotoModeOption_C::GetDefaultObj()
{
	static class IIPhotoModeOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIPhotoModeOption_C*>(IIPhotoModeOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IPhotoModeOption.IPhotoModeOption_C.FireChangeEventWithCurrentValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIPhotoModeOption_C::FireChangeEventWithCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "FireChangeEventWithCurrentValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IPhotoModeOption.IPhotoModeOption_C.FireEventWithDefaultValueButKeepCurrent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIPhotoModeOption_C::FireEventWithDefaultValueButKeepCurrent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "FireEventWithDefaultValueButKeepCurrent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IPhotoModeOption.IPhotoModeOption_C.GetMaxDelta
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxDelta                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPhotoModeOption_C::GetMaxDelta(int32* MaxDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "GetMaxDelta");

	Params::IIPhotoModeOption_C_GetMaxDelta_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxDelta != nullptr)
		*MaxDelta = Parms.MaxDelta;

}


// Function IPhotoModeOption.IPhotoModeOption_C.SetValueAndOverrideDefault
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPhotoModeOption_C::SetValueAndOverrideDefault(int32 Value, bool CallEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "SetValueAndOverrideDefault");

	Params::IIPhotoModeOption_C_SetValueAndOverrideDefault_Params Parms{};

	Parms.Value = Value;
	Parms.CallEvent = CallEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPhotoModeOption.IPhotoModeOption_C.IsOptionEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPhotoModeOption_C::IsOptionEnabled(bool* bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "IsOptionEnabled");

	Params::IIPhotoModeOption_C_IsOptionEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function IPhotoModeOption.IPhotoModeOption_C.SetOptionEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPhotoModeOption_C::SetOptionEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "SetOptionEnabled");

	Params::IIPhotoModeOption_C_SetOptionEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPhotoModeOption.IPhotoModeOption_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bForceFireValueChange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPhotoModeOption_C::Reset(bool bForceFireValueChange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "Reset");

	Params::IIPhotoModeOption_C_Reset_Params Parms{};

	Parms.bForceFireValueChange = bForceFireValueChange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPhotoModeOption.IPhotoModeOption_C.SetIsHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHighlighted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPhotoModeOption_C::SetIsHighlighted(bool bHighlighted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "SetIsHighlighted");

	Params::IIPhotoModeOption_C_SetIsHighlighted_Params Parms{};

	Parms.bHighlighted = bHighlighted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPhotoModeOption.IPhotoModeOption_C.SetSelectedValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallEvent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIPhotoModeOption_C::SetSelectedValue(int32 Value, bool CallEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "SetSelectedValue");

	Params::IIPhotoModeOption_C_SetSelectedValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallEvent = CallEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IPhotoModeOption.IPhotoModeOption_C.Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIPhotoModeOption_C::Navigate(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IPhotoModeOption_C", "Navigate");

	Params::IIPhotoModeOption_C_Navigate_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}

}


