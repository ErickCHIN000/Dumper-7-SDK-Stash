#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NPC_Generic_Controller.BP_NPC_Generic_Controller_C
// (Actor)

class UClass* ABP_NPC_Generic_Controller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NPC_Generic_Controller_C");

	return Clss;
}


// BP_NPC_Generic_Controller_C BP_NPC_Generic_Controller.Default__BP_NPC_Generic_Controller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NPC_Generic_Controller_C* ABP_NPC_Generic_Controller_C::GetDefaultObj()
{
	static class ABP_NPC_Generic_Controller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NPC_Generic_Controller_C*>(ABP_NPC_Generic_Controller_C::StaticClass()->DefaultObject);

	return Default;
}

}


