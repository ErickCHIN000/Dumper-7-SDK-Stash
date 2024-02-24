#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Door.BPI_Door_C
// (None)

class UClass* IBPI_Door_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Door_C");

	return Clss;
}


// BPI_Door_C BPI_Door.Default__BPI_Door_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Door_C* IBPI_Door_C::GetDefaultObj()
{
	static class IBPI_Door_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Door_C*>(IBPI_Door_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Door.BPI_Door_C.GetDoorFeedbackState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_States_DoorLocked  FeedbackState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Door_C::GetDoorFeedbackState(enum class Enum_States_DoorLocked* FeedbackState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "GetDoorFeedbackState");

	Params::IBPI_Door_C_GetDoorFeedbackState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FeedbackState != nullptr)
		*FeedbackState = Parms.FeedbackState;

}


// Function BPI_Door.BPI_Door_C.SetDoorFeedbackState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_States_DoorLocked  FeedbackState                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Door_C::SetDoorFeedbackState(enum class Enum_States_DoorLocked FeedbackState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "SetDoorFeedbackState");

	Params::IBPI_Door_C_SetDoorFeedbackState_Params Parms{};

	Parms.FeedbackState = FeedbackState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Door.BPI_Door_C.GetDoorInteractiveState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactive                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Door_C::GetDoorInteractiveState(bool* Interactive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "GetDoorInteractiveState");

	Params::IBPI_Door_C_GetDoorInteractiveState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Interactive != nullptr)
		*Interactive = Parms.Interactive;

}


// Function BPI_Door.BPI_Door_C.GetDoorLockedState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Door_C::GetDoorLockedState(bool* Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "GetDoorLockedState");

	Params::IBPI_Door_C_GetDoorLockedState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Locked != nullptr)
		*Locked = Parms.Locked;

}


// Function BPI_Door.BPI_Door_C.GetDoorState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Door_State         DoorState                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Door_C::GetDoorState(enum class Enum_Door_State* DoorState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "GetDoorState");

	Params::IBPI_Door_C_GetDoorState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DoorState != nullptr)
		*DoorState = Parms.DoorState;

}


// Function BPI_Door.BPI_Door_C.SetDoorInteractiveState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Interactive_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Door_C::SetDoorInteractiveState(bool Interactive_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "SetDoorInteractiveState");

	Params::IBPI_Door_C_SetDoorInteractiveState_Params Parms{};

	Parms.Interactive_ = Interactive_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Door.BPI_Door_C.SetDoorLockedState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Locked_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Door_C::SetDoorLockedState(bool Locked_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "SetDoorLockedState");

	Params::IBPI_Door_C_SetDoorLockedState_Params Parms{};

	Parms.Locked_ = Locked_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Door.BPI_Door_C.SetDoorState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Door_State         DoorState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Door_C::SetDoorState(enum class Enum_Door_State DoorState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Door_C", "SetDoorState");

	Params::IBPI_Door_C_SetDoorState_Params Parms{};

	Parms.DoorState = DoorState;

	UObject::ProcessEvent(Func, &Parms);

}

}


