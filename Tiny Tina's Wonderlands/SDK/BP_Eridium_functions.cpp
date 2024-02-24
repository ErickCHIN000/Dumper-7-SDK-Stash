#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Eridium.BP_Eridium_C
// (Actor)

class UClass* ABP_Eridium_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Eridium_C");

	return Clss;
}


// BP_Eridium_C BP_Eridium.Default__BP_Eridium_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Eridium_C* ABP_Eridium_C::GetDefaultObj()
{
	static class ABP_Eridium_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Eridium_C*>(ABP_Eridium_C::StaticClass()->DefaultObject);

	return Default;
}

}


