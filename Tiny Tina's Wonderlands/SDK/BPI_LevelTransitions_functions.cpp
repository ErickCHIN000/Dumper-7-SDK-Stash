#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LevelTransitions.BPI_LevelTransitions_C
// (None)

class UClass* IBPI_LevelTransitions_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LevelTransitions_C");

	return Clss;
}


// BPI_LevelTransitions_C BPI_LevelTransitions.Default__BPI_LevelTransitions_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LevelTransitions_C* IBPI_LevelTransitions_C::GetDefaultObj()
{
	static class IBPI_LevelTransitions_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LevelTransitions_C*>(IBPI_LevelTransitions_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LevelTransitions.BPI_LevelTransitions_C.LevelTransition_OnPrisonBreak
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_LevelTransitions_C::LevelTransition_OnPrisonBreak()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LevelTransitions_C", "LevelTransition_OnPrisonBreak");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_LevelTransitions.BPI_LevelTransitions_C.LevelTransition_OnPrisonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_LevelTransitions_C::LevelTransition_OnPrisonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LevelTransitions_C", "LevelTransition_OnPrisonStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_LevelTransitions.BPI_LevelTransitions_C.LevelTransition_OnDungeonStop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_LevelTransitions_C::LevelTransition_OnDungeonStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LevelTransitions_C", "LevelTransition_OnDungeonStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_LevelTransitions.BPI_LevelTransitions_C.LevelTransition_OnDungeonStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_LevelTransitions_C::LevelTransition_OnDungeonStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LevelTransitions_C", "LevelTransition_OnDungeonStart");



	UObject::ProcessEvent(Func, nullptr);

}

}


