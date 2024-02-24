#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ED_FinalChest.BPI_ED_FinalChest_C
// (None)

class UClass* IBPI_ED_FinalChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ED_FinalChest_C");

	return Clss;
}


// BPI_ED_FinalChest_C BPI_ED_FinalChest.Default__BPI_ED_FinalChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ED_FinalChest_C* IBPI_ED_FinalChest_C::GetDefaultObj()
{
	static class IBPI_ED_FinalChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ED_FinalChest_C*>(IBPI_ED_FinalChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ED_FinalChest.BPI_ED_FinalChest_C.GetNonTutoCookieAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NonTutoCookieAmount                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ED_FinalChest_C::GetNonTutoCookieAmount(float* NonTutoCookieAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ED_FinalChest_C", "GetNonTutoCookieAmount");

	Params::IBPI_ED_FinalChest_C_GetNonTutoCookieAmount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NonTutoCookieAmount != nullptr)
		*NonTutoCookieAmount = Parms.NonTutoCookieAmount;

}


// Function BPI_ED_FinalChest.BPI_ED_FinalChest_C.GetTutoCookieAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TutoCookieAmount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_ED_FinalChest_C::GetTutoCookieAmount(float* TutoCookieAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ED_FinalChest_C", "GetTutoCookieAmount");

	Params::IBPI_ED_FinalChest_C_GetTutoCookieAmount_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TutoCookieAmount != nullptr)
		*TutoCookieAmount = Parms.TutoCookieAmount;

}

}


