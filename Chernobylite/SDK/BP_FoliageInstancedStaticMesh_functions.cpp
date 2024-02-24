#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FoliageInstancedStaticMesh.BP_FoliageInstancedStaticMesh_C
// (SceneComponent, PrimitiveComponent, StaticMeshComponent)

class UClass* UBP_FoliageInstancedStaticMesh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FoliageInstancedStaticMesh_C");

	return Clss;
}


// BP_FoliageInstancedStaticMesh_C BP_FoliageInstancedStaticMesh.Default__BP_FoliageInstancedStaticMesh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FoliageInstancedStaticMesh_C* UBP_FoliageInstancedStaticMesh_C::GetDefaultObj()
{
	static class UBP_FoliageInstancedStaticMesh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FoliageInstancedStaticMesh_C*>(UBP_FoliageInstancedStaticMesh_C::StaticClass()->DefaultObject);

	return Default;
}

}


