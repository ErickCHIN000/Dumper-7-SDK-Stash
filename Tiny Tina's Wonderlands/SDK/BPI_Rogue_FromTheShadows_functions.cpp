#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Rogue_FromTheShadows.BPI_Rogue_FromTheShadows_C
// (None)

class UClass* IBPI_Rogue_FromTheShadows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Rogue_FromTheShadows_C");

	return Clss;
}


// BPI_Rogue_FromTheShadows_C BPI_Rogue_FromTheShadows.Default__BPI_Rogue_FromTheShadows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Rogue_FromTheShadows_C* IBPI_Rogue_FromTheShadows_C::GetDefaultObj()
{
	static class IBPI_Rogue_FromTheShadows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Rogue_FromTheShadows_C*>(IBPI_Rogue_FromTheShadows_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Rogue_FromTheShadows.BPI_Rogue_FromTheShadows_C.StartStealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Rogue_FromTheShadows_C::StartStealth(bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Rogue_FromTheShadows_C", "StartStealth");

	Params::IBPI_Rogue_FromTheShadows_C_StartStealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


