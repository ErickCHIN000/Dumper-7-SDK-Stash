#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Interactable.BPI_Interactable_C
// (None)

class UClass* IBPI_Interactable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Interactable_C");

	return Clss;
}


// BPI_Interactable_C BPI_Interactable.Default__BPI_Interactable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Interactable_C* IBPI_Interactable_C::GetDefaultObj()
{
	static class IBPI_Interactable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Interactable_C*>(IBPI_Interactable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Interactable.BPI_Interactable_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Interactable_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactable_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Interactable.BPI_Interactable_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Interactable_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactable_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Interactable.BPI_Interactable_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Interactable_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactable_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Interactable.BPI_Interactable_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Interactable_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactable_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Interactable.BPI_Interactable_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Interactable_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Interactable_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}

}


