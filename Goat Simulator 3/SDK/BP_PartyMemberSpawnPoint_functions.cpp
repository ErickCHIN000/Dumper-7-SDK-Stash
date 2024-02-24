#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PartyMemberSpawnPoint.BP_PartyMemberSpawnPoint_C
// (Actor)

class UClass* ABP_PartyMemberSpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PartyMemberSpawnPoint_C");

	return Clss;
}


// BP_PartyMemberSpawnPoint_C BP_PartyMemberSpawnPoint.Default__BP_PartyMemberSpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PartyMemberSpawnPoint_C* ABP_PartyMemberSpawnPoint_C::GetDefaultObj()
{
	static class ABP_PartyMemberSpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PartyMemberSpawnPoint_C*>(ABP_PartyMemberSpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


