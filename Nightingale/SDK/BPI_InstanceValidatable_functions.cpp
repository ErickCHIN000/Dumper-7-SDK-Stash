#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_InstanceValidatable.BPI_InstanceValidatable_C
// (None)

class UClass* IBPI_InstanceValidatable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_InstanceValidatable_C");

	return Clss;
}


// BPI_InstanceValidatable_C BPI_InstanceValidatable.Default__BPI_InstanceValidatable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_InstanceValidatable_C* IBPI_InstanceValidatable_C::GetDefaultObj()
{
	static class IBPI_InstanceValidatable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_InstanceValidatable_C*>(IBPI_InstanceValidatable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_InstanceValidatable.BPI_InstanceValidatable_C.ValidateInstance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PassedValidation                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                ValidationErrors                                                 (Parm, OutParm)

void IBPI_InstanceValidatable_C::ValidateInstance(bool* PassedValidation, TArray<class FText>* ValidationErrors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_InstanceValidatable_C", "ValidateInstance");

	Params::IBPI_InstanceValidatable_C_ValidateInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PassedValidation != nullptr)
		*PassedValidation = Parms.PassedValidation;

	if (ValidationErrors != nullptr)
		*ValidationErrors = std::move(Parms.ValidationErrors);

}

}


