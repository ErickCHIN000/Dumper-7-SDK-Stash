#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IInputCapture.IInputCapture_C
// (None)

class UClass* IIInputCapture_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IInputCapture_C");

	return Clss;
}


// IInputCapture_C IInputCapture.Default__IInputCapture_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIInputCapture_C* IIInputCapture_C::GetDefaultObj()
{
	static class IIInputCapture_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIInputCapture_C*>(IIInputCapture_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IInputCapture.IInputCapture_C.Jump
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IIInputCapture_C::Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IInputCapture_C", "Jump");



	UObject::ProcessEvent(Func, nullptr);

}


// Function IInputCapture.IInputCapture_C.AltFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIInputCapture_C::AltFire(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IInputCapture_C", "AltFire");

	Params::IIInputCapture_C_AltFire_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IInputCapture.IInputCapture_C.PrimaryFire
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Press                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IIInputCapture_C::PrimaryFire(bool Press)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IInputCapture_C", "PrimaryFire");

	Params::IIInputCapture_C_PrimaryFire_Params Parms{};

	Parms.Press = Press;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IInputCapture.IInputCapture_C.LookY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInputCapture_C::LookY(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IInputCapture_C", "LookY");

	Params::IIInputCapture_C_LookY_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IInputCapture.IInputCapture_C.LookX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIInputCapture_C::LookX(float Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IInputCapture_C", "LookX");

	Params::IIInputCapture_C_LookX_Params Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);

}

}


