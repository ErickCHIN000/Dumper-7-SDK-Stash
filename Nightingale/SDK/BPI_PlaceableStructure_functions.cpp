#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_PlaceableStructure.BPI_PlaceableStructure_C
// (None)

class UClass* IBPI_PlaceableStructure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_PlaceableStructure_C");

	return Clss;
}


// BPI_PlaceableStructure_C BPI_PlaceableStructure.Default__BPI_PlaceableStructure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_PlaceableStructure_C* IBPI_PlaceableStructure_C::GetDefaultObj()
{
	static class IBPI_PlaceableStructure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_PlaceableStructure_C*>(IBPI_PlaceableStructure_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_PlaceableStructure.BPI_PlaceableStructure_C.GetSupportMesh
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        SupportMesh                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_PlaceableStructure_C::GetSupportMesh(class UStaticMeshComponent** SupportMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_PlaceableStructure_C", "GetSupportMesh");

	Params::IBPI_PlaceableStructure_C_GetSupportMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SupportMesh != nullptr)
		*SupportMesh = Parms.SupportMesh;

}

}


