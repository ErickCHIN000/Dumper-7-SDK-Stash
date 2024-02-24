#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RedShorts.BP_RedShorts_C
// (Actor)

class UClass* ABP_RedShorts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RedShorts_C");

	return Clss;
}


// BP_RedShorts_C BP_RedShorts.Default__BP_RedShorts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RedShorts_C* ABP_RedShorts_C::GetDefaultObj()
{
	static class ABP_RedShorts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RedShorts_C*>(ABP_RedShorts_C::StaticClass()->DefaultObject);

	return Default;
}

}


