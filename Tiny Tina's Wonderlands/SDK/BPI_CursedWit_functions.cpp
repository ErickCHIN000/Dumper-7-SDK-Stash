#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CursedWit.BPI_CursedWit_C
// (None)

class UClass* IBPI_CursedWit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CursedWit_C");

	return Clss;
}


// BPI_CursedWit_C BPI_CursedWit.Default__BPI_CursedWit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CursedWit_C* IBPI_CursedWit_C::GetDefaultObj()
{
	static class IBPI_CursedWit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CursedWit_C*>(IBPI_CursedWit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CursedWit.BPI_CursedWit_C.CursedWit_Unequip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               UnequippedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CursedWit_C::CursedWit_Unequip(class AOakCharacter* UnequippedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CursedWit_C", "CursedWit_Unequip");

	Params::IBPI_CursedWit_C_CursedWit_Unequip_Params Parms{};

	Parms.UnequippedBy = UnequippedBy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CursedWit.BPI_CursedWit_C.CursedWit_OnEquip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter*               EquippedBy                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CursedWit_C::CursedWit_OnEquip(class AOakCharacter* EquippedBy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CursedWit_C", "CursedWit_OnEquip");

	Params::IBPI_CursedWit_C_CursedWit_OnEquip_Params Parms{};

	Parms.EquippedBy = EquippedBy;

	UObject::ProcessEvent(Func, &Parms);

}

}


