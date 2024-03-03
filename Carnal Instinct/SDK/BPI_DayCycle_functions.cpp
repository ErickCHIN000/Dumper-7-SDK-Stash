#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_DayCycle.BPI_DayCycle_C
// (None)

class UClass* IBPI_DayCycle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_DayCycle_C");

	return Clss;
}


// BPI_DayCycle_C BPI_DayCycle.Default__BPI_DayCycle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_DayCycle_C* IBPI_DayCycle_C::GetDefaultObj()
{
	static class IBPI_DayCycle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_DayCycle_C*>(IBPI_DayCycle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_DayCycle.BPI_DayCycle_C.fnGetHourDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_DayCycle_C::FnGetHourDuration(float* Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_DayCycle_C", "fnGetHourDuration");

	Params::IBPI_DayCycle_C_FnGetHourDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function BPI_DayCycle.BPI_DayCycle_C.fnGetTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Current_Hour                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_DayCycle_C::FnGetTime(float* Current_Hour)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_DayCycle_C", "fnGetTime");

	Params::IBPI_DayCycle_C_FnGetTime_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Current_Hour != nullptr)
		*Current_Hour = Parms.Current_Hour;

}

}


