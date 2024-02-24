#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GamePlayGameStateInterface.GamePlayGameStateInterface_C
// (None)

class UClass* IGamePlayGameStateInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GamePlayGameStateInterface_C");

	return Clss;
}


// GamePlayGameStateInterface_C GamePlayGameStateInterface.Default__GamePlayGameStateInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IGamePlayGameStateInterface_C* IGamePlayGameStateInterface_C::GetDefaultObj()
{
	static class IGamePlayGameStateInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IGamePlayGameStateInterface_C*>(IGamePlayGameStateInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GamePlayGameStateInterface.GamePlayGameStateInterface_C.GetForceHideCursor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayGameStateInterface_C::GetForceHideCursor(bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayGameStateInterface_C", "GetForceHideCursor");

	Params::IGamePlayGameStateInterface_C_GetForceHideCursor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function GamePlayGameStateInterface.GamePlayGameStateInterface_C.SetForceHideCursor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayGameStateInterface_C::SetForceHideCursor(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayGameStateInterface_C", "SetForceHideCursor");

	Params::IGamePlayGameStateInterface_C_SetForceHideCursor_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GamePlayGameStateInterface.GamePlayGameStateInterface_C.GetIsMouseMoving
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsMoving                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayGameStateInterface_C::GetIsMouseMoving(bool* IsMoving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayGameStateInterface_C", "GetIsMouseMoving");

	Params::IGamePlayGameStateInterface_C_GetIsMouseMoving_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsMoving != nullptr)
		*IsMoving = Parms.IsMoving;

}


// Function GamePlayGameStateInterface.GamePlayGameStateInterface_C.IsInKeyboardMode
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InKeyboardMode                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IGamePlayGameStateInterface_C::IsInKeyboardMode(bool* InKeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GamePlayGameStateInterface_C", "IsInKeyboardMode");

	Params::IGamePlayGameStateInterface_C_IsInKeyboardMode_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InKeyboardMode != nullptr)
		*InKeyboardMode = Parms.InKeyboardMode;

}

}


