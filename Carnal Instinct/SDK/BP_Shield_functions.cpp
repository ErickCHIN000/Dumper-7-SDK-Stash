#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shield.BP_Shield_C
// (Actor)

class UClass* ABP_Shield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shield_C");

	return Clss;
}


// BP_Shield_C BP_Shield.Default__BP_Shield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shield_C* ABP_Shield_C::GetDefaultObj()
{
	static class ABP_Shield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shield_C*>(ABP_Shield_C::StaticClass()->DefaultObject);

	return Default;
}

}


