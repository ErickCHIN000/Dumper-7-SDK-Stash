#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_762Compensator.BP_762Compensator_C
// (Actor)

class UClass* ABP_762Compensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_762Compensator_C");

	return Clss;
}


// BP_762Compensator_C BP_762Compensator.Default__BP_762Compensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_762Compensator_C* ABP_762Compensator_C::GetDefaultObj()
{
	static class ABP_762Compensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_762Compensator_C*>(ABP_762Compensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


