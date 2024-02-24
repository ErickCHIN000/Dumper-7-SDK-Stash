#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Ability_FragmentRain.BPI_Ability_FragmentRain_C
// (None)

class UClass* IBPI_Ability_FragmentRain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Ability_FragmentRain_C");

	return Clss;
}


// BPI_Ability_FragmentRain_C BPI_Ability_FragmentRain.Default__BPI_Ability_FragmentRain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Ability_FragmentRain_C* IBPI_Ability_FragmentRain_C::GetDefaultObj()
{
	static class IBPI_Ability_FragmentRain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Ability_FragmentRain_C*>(IBPI_Ability_FragmentRain_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Ability_FragmentRain.BPI_Ability_FragmentRain_C.FragmentRain_GetTargetExternal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      FragmentRainTarget                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_Ability_FragmentRain_C::FragmentRain_GetTargetExternal(class AActor** FragmentRainTarget, bool* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Ability_FragmentRain_C", "FragmentRain_GetTargetExternal");

	Params::IBPI_Ability_FragmentRain_C_FragmentRain_GetTargetExternal_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FragmentRainTarget != nullptr)
		*FragmentRainTarget = Parms.FragmentRainTarget;

	if (Res != nullptr)
		*Res = Parms.Res;

}

}


