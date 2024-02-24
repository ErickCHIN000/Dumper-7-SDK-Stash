#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxExportData.BPI_FluxExportData_C
// (None)

class UClass* IBPI_FluxExportData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxExportData_C");

	return Clss;
}


// BPI_FluxExportData_C BPI_FluxExportData.Default__BPI_FluxExportData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxExportData_C* IBPI_FluxExportData_C::GetDefaultObj()
{
	static class IBPI_FluxExportData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxExportData_C*>(IBPI_FluxExportData_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxExportData.BPI_FluxExportData_C.CopyPropertiesToObject
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Destination                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Done                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxExportData_C::CopyPropertiesToObject(class UObject* Destination, bool* Done)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxExportData_C", "CopyPropertiesToObject");

	Params::IBPI_FluxExportData_C_CopyPropertiesToObject_Params Parms{};

	Parms.Destination = Destination;

	UObject::ProcessEvent(Func, &Parms);

	if (Done != nullptr)
		*Done = Parms.Done;

}


// Function BPI_FluxExportData.BPI_FluxExportData_C.ClearExternalReferences
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_FluxExportData_C::ClearExternalReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxExportData_C", "ClearExternalReferences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_FluxExportData.BPI_FluxExportData_C.GetExternalReferences
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UTexture*>            Objects                                                          (Parm, OutParm)

void IBPI_FluxExportData_C::GetExternalReferences(TArray<class UTexture*>* Objects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxExportData_C", "GetExternalReferences");

	Params::IBPI_FluxExportData_C_GetExternalReferences_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Objects != nullptr)
		*Objects = std::move(Parms.Objects);

}

}


