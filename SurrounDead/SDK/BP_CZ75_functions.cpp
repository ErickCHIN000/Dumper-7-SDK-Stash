#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CZ75.BP_CZ75_C
// (Actor)

class UClass* ABP_CZ75_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CZ75_C");

	return Clss;
}


// BP_CZ75_C BP_CZ75.Default__BP_CZ75_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CZ75_C* ABP_CZ75_C::GetDefaultObj()
{
	static class ABP_CZ75_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CZ75_C*>(ABP_CZ75_C::StaticClass()->DefaultObject);

	return Default;
}

}


