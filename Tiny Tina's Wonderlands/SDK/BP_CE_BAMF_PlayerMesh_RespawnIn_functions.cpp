#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CE_BAMF_PlayerMesh_RespawnIn.BP_CE_BAMF_PlayerMesh_RespawnIn_C
// (None)

class UClass* UBP_CE_BAMF_PlayerMesh_RespawnIn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CE_BAMF_PlayerMesh_RespawnIn_C");

	return Clss;
}


// BP_CE_BAMF_PlayerMesh_RespawnIn_C BP_CE_BAMF_PlayerMesh_RespawnIn.Default__BP_CE_BAMF_PlayerMesh_RespawnIn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CE_BAMF_PlayerMesh_RespawnIn_C* UBP_CE_BAMF_PlayerMesh_RespawnIn_C::GetDefaultObj()
{
	static class UBP_CE_BAMF_PlayerMesh_RespawnIn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CE_BAMF_PlayerMesh_RespawnIn_C*>(UBP_CE_BAMF_PlayerMesh_RespawnIn_C::StaticClass()->DefaultObject);

	return Default;
}

}


