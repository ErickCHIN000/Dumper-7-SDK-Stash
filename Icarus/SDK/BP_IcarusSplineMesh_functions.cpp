#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusSplineMesh.BP_IcarusSplineMesh_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_IcarusSplineMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusSplineMesh_C");

	return Clss;
}


// BP_IcarusSplineMesh_C BP_IcarusSplineMesh.Default__BP_IcarusSplineMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusSplineMesh_C* UBP_IcarusSplineMesh_C::GetDefaultObj()
{
	static class UBP_IcarusSplineMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusSplineMesh_C*>(UBP_IcarusSplineMesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


