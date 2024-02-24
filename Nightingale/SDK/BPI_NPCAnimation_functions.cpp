#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_NPCAnimation.BPI_NPCAnimation_C
// (None)

class UClass* IBPI_NPCAnimation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_NPCAnimation_C");

	return Clss;
}


// BPI_NPCAnimation_C BPI_NPCAnimation.Default__BPI_NPCAnimation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_NPCAnimation_C* IBPI_NPCAnimation_C::GetDefaultObj()
{
	static class IBPI_NPCAnimation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_NPCAnimation_C*>(IBPI_NPCAnimation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_NPCAnimation.BPI_NPCAnimation_C.InitializeReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_NPCAnimation_C::InitializeReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCAnimation_C", "InitializeReferences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_NPCAnimation.BPI_NPCAnimation_C.LinkAndUpdateAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_NPCAnimation_C::LinkAndUpdateAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_NPCAnimation_C", "LinkAndUpdateAnimations");



	UObject::ProcessEvent(Func, nullptr);

}

}


