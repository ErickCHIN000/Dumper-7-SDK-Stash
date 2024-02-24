#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxCameraEvents.BPI_FluxCameraEvents_C
// (None)

class UClass* IBPI_FluxCameraEvents_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxCameraEvents_C");

	return Clss;
}


// BPI_FluxCameraEvents_C BPI_FluxCameraEvents.Default__BPI_FluxCameraEvents_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxCameraEvents_C* IBPI_FluxCameraEvents_C::GetDefaultObj()
{
	static class IBPI_FluxCameraEvents_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxCameraEvents_C*>(IBPI_FluxCameraEvents_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxCameraEvents.BPI_FluxCameraEvents_C.FluxCameraInFluid
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Under                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxCameraEvents_C::FluxCameraInFluid(bool Under)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxCameraEvents_C", "FluxCameraInFluid");

	Params::IBPI_FluxCameraEvents_C_FluxCameraInFluid_Params Parms{};

	Parms.Under = Under;

	UObject::ProcessEvent(Func, &Parms);

}

}


