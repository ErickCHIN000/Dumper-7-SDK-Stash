#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StaticMeshesGroupObject.BP_StaticMeshesGroupObject_C
// (None)

class UClass* UBP_StaticMeshesGroupObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StaticMeshesGroupObject_C");

	return Clss;
}


// BP_StaticMeshesGroupObject_C BP_StaticMeshesGroupObject.Default__BP_StaticMeshesGroupObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_StaticMeshesGroupObject_C* UBP_StaticMeshesGroupObject_C::GetDefaultObj()
{
	static class UBP_StaticMeshesGroupObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_StaticMeshesGroupObject_C*>(UBP_StaticMeshesGroupObject_C::StaticClass()->DefaultObject);

	return Default;
}

}


