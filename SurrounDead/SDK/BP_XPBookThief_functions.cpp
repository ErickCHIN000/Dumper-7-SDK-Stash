#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_XPBookThief.BP_XPBookThief_C
// (Actor)

class UClass* ABP_XPBookThief_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_XPBookThief_C");

	return Clss;
}


// BP_XPBookThief_C BP_XPBookThief.Default__BP_XPBookThief_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_XPBookThief_C* ABP_XPBookThief_C::GetDefaultObj()
{
	static class ABP_XPBookThief_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_XPBookThief_C*>(ABP_XPBookThief_C::StaticClass()->DefaultObject);

	return Default;
}

}


