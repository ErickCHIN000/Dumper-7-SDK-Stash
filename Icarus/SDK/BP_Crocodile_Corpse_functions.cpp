#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Crocodile_Corpse.BP_Crocodile_Corpse_C
// (Actor)

class UClass* ABP_Crocodile_Corpse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Crocodile_Corpse_C");

	return Clss;
}


// BP_Crocodile_Corpse_C BP_Crocodile_Corpse.Default__BP_Crocodile_Corpse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Crocodile_Corpse_C* ABP_Crocodile_Corpse_C::GetDefaultObj()
{
	static class ABP_Crocodile_Corpse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Crocodile_Corpse_C*>(ABP_Crocodile_Corpse_C::StaticClass()->DefaultObject);

	return Default;
}

}


