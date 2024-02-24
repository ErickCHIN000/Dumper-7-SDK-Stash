#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Fish.BP_Fish_C
// (Actor)

class UClass* ABP_Fish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Fish_C");

	return Clss;
}


// BP_Fish_C BP_Fish.Default__BP_Fish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Fish_C* ABP_Fish_C::GetDefaultObj()
{
	static class ABP_Fish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Fish_C*>(ABP_Fish_C::StaticClass()->DefaultObject);

	return Default;
}

}


