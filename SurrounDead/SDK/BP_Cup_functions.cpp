#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Cup.BP_Cup_C
// (Actor)

class UClass* ABP_Cup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Cup_C");

	return Clss;
}


// BP_Cup_C BP_Cup.Default__BP_Cup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Cup_C* ABP_Cup_C::GetDefaultObj()
{
	static class ABP_Cup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Cup_C*>(ABP_Cup_C::StaticClass()->DefaultObject);

	return Default;
}

}


