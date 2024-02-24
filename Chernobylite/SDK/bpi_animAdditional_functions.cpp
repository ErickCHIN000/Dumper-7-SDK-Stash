#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bpi_animAdditional.bpi_animAdditional_C
// (None)

class UClass* Ibpi_animAdditional_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bpi_animAdditional_C");

	return Clss;
}


// bpi_animAdditional_C bpi_animAdditional.Default__bpi_animAdditional_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ibpi_animAdditional_C* Ibpi_animAdditional_C::GetDefaultObj()
{
	static class Ibpi_animAdditional_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ibpi_animAdditional_C*>(Ibpi_animAdditional_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bpi_animAdditional.bpi_animAdditional_C.GetFullHandRecoil
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOutFullHandRecoil                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void Ibpi_animAdditional_C::GetFullHandRecoil(bool* bOutFullHandRecoil)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bpi_animAdditional_C", "GetFullHandRecoil");

	Params::Ibpi_animAdditional_C_GetFullHandRecoil_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bOutFullHandRecoil != nullptr)
		*bOutFullHandRecoil = Parms.bOutFullHandRecoil;

}

}


