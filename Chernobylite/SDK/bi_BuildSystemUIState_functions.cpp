#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bi_BuildSystemUIState.bi_BuildSystemUIState_C
// (None)

class UClass* Ibi_BuildSystemUIState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bi_BuildSystemUIState_C");

	return Clss;
}


// bi_BuildSystemUIState_C bi_BuildSystemUIState.Default__bi_BuildSystemUIState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ibi_BuildSystemUIState_C* Ibi_BuildSystemUIState_C::GetDefaultObj()
{
	static class Ibi_BuildSystemUIState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ibi_BuildSystemUIState_C*>(Ibi_BuildSystemUIState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputR1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputR1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputR1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputL1
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputL1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputL1");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputDPadRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputDPadRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputDPadRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputDPadUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputDPadUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputDPadUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputDPadLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputDPadLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputDPadLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputDPadDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputDPadDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputDPadDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputFaceRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputFaceRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputFaceRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputFaceUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputFaceUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputFaceUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputFaceLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputFaceLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputFaceLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bi_BuildSystemUIState.bi_BuildSystemUIState_C.InputFaceDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Ibi_BuildSystemUIState_C::InputFaceDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bi_BuildSystemUIState_C", "InputFaceDown");



	UObject::ProcessEvent(Func, nullptr);

}

}


