#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Melee.BPI_Melee_C
// (None)

class UClass* IBPI_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Melee_C");

	return Clss;
}


// BPI_Melee_C BPI_Melee.Default__BPI_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Melee_C* IBPI_Melee_C::GetDefaultObj()
{
	static class IBPI_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Melee_C*>(IBPI_Melee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Melee.BPI_Melee_C.Notify_SpawnProj_Ragnarok
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Melee_C::Notify_SpawnProj_Ragnarok(class AOakCharacter_Player* OwnerPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Melee_C", "Notify_SpawnProj_Ragnarok");

	Params::IBPI_Melee_C_Notify_SpawnProj_Ragnarok_Params Parms{};

	Parms.OwnerPlayer = OwnerPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Melee.BPI_Melee_C.Notify_SpawnProj_MageStaff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Melee_C::Notify_SpawnProj_MageStaff(class AOakCharacter_Player* OwnerPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Melee_C", "Notify_SpawnProj_MageStaff");

	Params::IBPI_Melee_C_Notify_SpawnProj_MageStaff_Params Parms{};

	Parms.OwnerPlayer = OwnerPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_Melee.BPI_Melee_C.Notify_SpawnProj_Fatebreaker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AOakCharacter_Player*        OwnerPlayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Melee_C::Notify_SpawnProj_Fatebreaker(class AOakCharacter_Player* OwnerPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Melee_C", "Notify_SpawnProj_Fatebreaker");

	Params::IBPI_Melee_C_Notify_SpawnProj_Fatebreaker_Params Parms{};

	Parms.OwnerPlayer = OwnerPlayer;

	UObject::ProcessEvent(Func, &Parms);

}

}


