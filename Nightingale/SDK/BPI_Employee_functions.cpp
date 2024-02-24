#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Employee.BPI_Employee_C
// (None)

class UClass* IBPI_Employee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Employee_C");

	return Clss;
}


// BPI_Employee_C BPI_Employee.Default__BPI_Employee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Employee_C* IBPI_Employee_C::GetDefaultObj()
{
	static class IBPI_Employee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Employee_C*>(IBPI_Employee_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Employee.BPI_Employee_C.GetEmployer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Employer                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_Employee_C::GetEmployer(class AActor** Employer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Employee_C", "GetEmployer");

	Params::IBPI_Employee_C_GetEmployer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Employer != nullptr)
		*Employer = Parms.Employer;

}

}


