#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Survivor.BP_Survivor_C
// (Actor)

class UClass* ABP_Survivor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Survivor_C");

	return Clss;
}


// BP_Survivor_C BP_Survivor.Default__BP_Survivor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Survivor_C* ABP_Survivor_C::GetDefaultObj()
{
	static class ABP_Survivor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Survivor_C*>(ABP_Survivor_C::StaticClass()->DefaultObject);

	return Default;
}

}


