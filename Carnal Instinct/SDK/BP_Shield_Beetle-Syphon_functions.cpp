#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shield_Beetle-Syphon.BP_Shield_Beetle-Syphon_C
// (Actor)

class UClass* ABP_Shield_BeetleMinusSyphon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shield_Beetle-Syphon_C");

	return Clss;
}


// BP_Shield_Beetle-Syphon_C BP_Shield_Beetle-Syphon.Default__BP_Shield_Beetle-Syphon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shield_BeetleMinusSyphon_C* ABP_Shield_BeetleMinusSyphon_C::GetDefaultObj()
{
	static class ABP_Shield_BeetleMinusSyphon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shield_BeetleMinusSyphon_C*>(ABP_Shield_BeetleMinusSyphon_C::StaticClass()->DefaultObject);

	return Default;
}

}


