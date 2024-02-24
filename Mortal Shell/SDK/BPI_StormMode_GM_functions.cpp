#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormMode_GM.BPI_StormMode_GM_C
// (None)

class UClass* IBPI_StormMode_GM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormMode_GM_C");

	return Clss;
}


// BPI_StormMode_GM_C BPI_StormMode_GM.Default__BPI_StormMode_GM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormMode_GM_C* IBPI_StormMode_GM_C::GetDefaultObj()
{
	static class IBPI_StormMode_GM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormMode_GM_C*>(IBPI_StormMode_GM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormMode_GM.BPI_StormMode_GM_C.StormMode_TeleportCycleCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_GM_C::StormMode_TeleportCycleCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_GM_C", "StormMode_TeleportCycleCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_StormMode_GM.BPI_StormMode_GM_C.StormMode_UpdateTeleportData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Loc                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rot                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Teleport_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_StormMode_GM_C::StormMode_UpdateTeleportData(class FName ID, const struct FVector& Loc, const struct FRotator& Rot, bool Teleport_, enum class EArmorTypes Shell, enum class EComboTypes Weapon, enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_GM_C", "StormMode_UpdateTeleportData");

	Params::IBPI_StormMode_GM_C_StormMode_UpdateTeleportData_Params Parms{};

	Parms.ID = ID;
	Parms.Loc = Loc;
	Parms.Rot = Rot;
	Parms.Teleport_ = Teleport_;
	Parms.Shell = Shell;
	Parms.Weapon = Weapon;
	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_StormMode_GM.BPI_StormMode_GM_C.StormMode_ResetMapState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_StormMode_GM_C::StormMode_ResetMapState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormMode_GM_C", "StormMode_ResetMapState");



	UObject::ProcessEvent(Func, nullptr);

}

}


