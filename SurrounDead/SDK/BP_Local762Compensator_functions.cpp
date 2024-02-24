#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Local762Compensator.BP_Local762Compensator_C
// (Actor)

class UClass* ABP_Local762Compensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Local762Compensator_C");

	return Clss;
}


// BP_Local762Compensator_C BP_Local762Compensator.Default__BP_Local762Compensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Local762Compensator_C* ABP_Local762Compensator_C::GetDefaultObj()
{
	static class ABP_Local762Compensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Local762Compensator_C*>(ABP_Local762Compensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


