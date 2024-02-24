#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_FluxSurfaceMeshActor.BPI_FluxSurfaceMeshActor_C
// (None)

class UClass* IBPI_FluxSurfaceMeshActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_FluxSurfaceMeshActor_C");

	return Clss;
}


// BPI_FluxSurfaceMeshActor_C BPI_FluxSurfaceMeshActor.Default__BPI_FluxSurfaceMeshActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_FluxSurfaceMeshActor_C* IBPI_FluxSurfaceMeshActor_C::GetDefaultObj()
{
	static class IBPI_FluxSurfaceMeshActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_FluxSurfaceMeshActor_C*>(IBPI_FluxSurfaceMeshActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_FluxSurfaceMeshActor.BPI_FluxSurfaceMeshActor_C.SetExternalMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInterface*          OverWater                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_FluxSurfaceMeshActor_C::SetExternalMaterial(class UMaterialInterface* OverWater)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_FluxSurfaceMeshActor_C", "SetExternalMaterial");

	Params::IBPI_FluxSurfaceMeshActor_C_SetExternalMaterial_Params Parms{};

	Parms.OverWater = OverWater;

	UObject::ProcessEvent(Func, &Parms);

}

}


