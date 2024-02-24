#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_AI_Bamf.BPI_AI_Bamf_C
// (None)

class UClass* IBPI_AI_Bamf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_AI_Bamf_C");

	return Clss;
}


// BPI_AI_Bamf_C BPI_AI_Bamf.Default__BPI_AI_Bamf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_AI_Bamf_C* IBPI_AI_Bamf_C::GetDefaultObj()
{
	static class IBPI_AI_Bamf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_AI_Bamf_C*>(IBPI_AI_Bamf_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_AI_Bamf.BPI_AI_Bamf_C.AI_Teleport_Out
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AI_Bamf_C::AI_Teleport_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_Bamf_C", "AI_Teleport_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_AI_Bamf.BPI_AI_Bamf_C.AI_Bamf_Out
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AI_Bamf_C::AI_Bamf_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_Bamf_C", "AI_Bamf_Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_AI_Bamf.BPI_AI_Bamf_C.AI_Bamf_In
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_AI_Bamf_C::AI_Bamf_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_AI_Bamf_C", "AI_Bamf_In");



	UObject::ProcessEvent(Func, nullptr);

}

}


