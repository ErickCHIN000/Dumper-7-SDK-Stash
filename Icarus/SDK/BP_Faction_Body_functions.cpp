#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Faction_Body.BP_Faction_Body_C
// (Actor)

class UClass* ABP_Faction_Body_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Faction_Body_C");

	return Clss;
}


// BP_Faction_Body_C BP_Faction_Body.Default__BP_Faction_Body_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Faction_Body_C* ABP_Faction_Body_C::GetDefaultObj()
{
	static class ABP_Faction_Body_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Faction_Body_C*>(ABP_Faction_Body_C::StaticClass()->DefaultObject);

	return Default;
}

}


