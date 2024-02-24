#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_556Compensator.BP_556Compensator_C
// (Actor)

class UClass* ABP_556Compensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_556Compensator_C");

	return Clss;
}


// BP_556Compensator_C BP_556Compensator.Default__BP_556Compensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_556Compensator_C* ABP_556Compensator_C::GetDefaultObj()
{
	static class ABP_556Compensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_556Compensator_C*>(ABP_556Compensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


