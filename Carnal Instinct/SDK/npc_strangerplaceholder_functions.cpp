#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass npc_strangerplaceholder.npc_strangerplaceholder_C
// (Actor)

class UClass* ANpc_strangerplaceholder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("npc_strangerplaceholder_C");

	return Clss;
}


// npc_strangerplaceholder_C npc_strangerplaceholder.Default__npc_strangerplaceholder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANpc_strangerplaceholder_C* ANpc_strangerplaceholder_C::GetDefaultObj()
{
	static class ANpc_strangerplaceholder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANpc_strangerplaceholder_C*>(ANpc_strangerplaceholder_C::StaticClass()->DefaultObject);

	return Default;
}

}


