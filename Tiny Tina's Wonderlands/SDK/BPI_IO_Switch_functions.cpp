#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_IO_Switch.BPI_IO_Switch_C
// (None)

class UClass* IBPI_IO_Switch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_IO_Switch_C");

	return Clss;
}


// BPI_IO_Switch_C BPI_IO_Switch.Default__BPI_IO_Switch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_IO_Switch_C* IBPI_IO_Switch_C::GetDefaultObj()
{
	static class IBPI_IO_Switch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_IO_Switch_C*>(IBPI_IO_Switch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchFeedbackState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_States_SwitchFeedbackFeedbackState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_IO_Switch_C::GetSwitchFeedbackState(enum class Enum_States_SwitchFeedback* FeedbackState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "GetSwitchFeedbackState");

	Params::IBPI_IO_Switch_C_GetSwitchFeedbackState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FeedbackState != nullptr)
		*FeedbackState = Parms.FeedbackState;

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_States_SwitchFeedbackFeedbackState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_IO_Switch_C::SetSwitchFeedbackState(enum class Enum_States_SwitchFeedback FeedbackState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "SetSwitchFeedbackState");

	Params::IBPI_IO_Switch_C_SetSwitchFeedbackState_Params Parms{};

	Parms.FeedbackState = FeedbackState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchInteractiveState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_Switch_C::GetSwitchInteractiveState(bool* Interactive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "GetSwitchInteractiveState");

	Params::IBPI_IO_Switch_C_GetSwitchInteractiveState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interactive != nullptr)
		*Interactive = Parms.Interactive;

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchLockedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_Switch_C::GetSwitchLockedState(bool* Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "GetSwitchLockedState");

	Params::IBPI_IO_Switch_C_GetSwitchLockedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.GetSwitchState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Switch_State       SwitchState                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_IO_Switch_C::GetSwitchState(enum class Enum_Switch_State* SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "GetSwitchState");

	Params::IBPI_IO_Switch_C_GetSwitchState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SwitchState != nullptr)
		*SwitchState = Parms.SwitchState;

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactive                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_Switch_C::SetSwitchInteractiveState(bool Interactive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "SetSwitchInteractiveState");

	Params::IBPI_IO_Switch_C_SetSwitchInteractiveState_Params Parms{};

	Parms.Interactive = Interactive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_IO_Switch_C::SetSwitchLockedState(bool Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "SetSwitchLockedState");

	Params::IBPI_IO_Switch_C_SetSwitchLockedState_Params Parms{};

	Parms.Locked = Locked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_IO_Switch.BPI_IO_Switch_C.SetSwitchState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Switch_State       SwitchState                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_IO_Switch_C::SetSwitchState(enum class Enum_Switch_State SwitchState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_IO_Switch_C", "SetSwitchState");

	Params::IBPI_IO_Switch_C_SetSwitchState_Params Parms{};

	Parms.SwitchState = SwitchState;

	UObject::ProcessEvent(Func, &Parms);

}

}


