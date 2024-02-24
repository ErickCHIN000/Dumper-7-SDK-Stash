#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StructureMeshesContainer.BP_StructureMeshesContainer_C
// (SceneComponent)

class UClass* UBP_StructureMeshesContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StructureMeshesContainer_C");

	return Clss;
}


// BP_StructureMeshesContainer_C BP_StructureMeshesContainer.Default__BP_StructureMeshesContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StructureMeshesContainer_C* UBP_StructureMeshesContainer_C::GetDefaultObj()
{
	static class UBP_StructureMeshesContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StructureMeshesContainer_C*>(UBP_StructureMeshesContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


