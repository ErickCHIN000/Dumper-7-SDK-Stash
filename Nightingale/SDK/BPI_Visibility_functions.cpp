#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_Visibility.BPI_Visibility_C
// (None)

class UClass* IBPI_Visibility_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_Visibility_C");

	return Clss;
}


// BPI_Visibility_C BPI_Visibility.Default__BPI_Visibility_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_Visibility_C* IBPI_Visibility_C::GetDefaultObj()
{
	static class IBPI_Visibility_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_Visibility_C*>(IBPI_Visibility_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_Visibility.BPI_Visibility_C.ShowSupportMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_Visibility_C::ShowSupportMeshes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Visibility_C", "ShowSupportMeshes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_Visibility.BPI_Visibility_C.HideSupportMeshes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_Visibility_C::HideSupportMeshes(double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_Visibility_C", "HideSupportMeshes");

	Params::IBPI_Visibility_C_HideSupportMeshes_Params Parms{};

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}

}


