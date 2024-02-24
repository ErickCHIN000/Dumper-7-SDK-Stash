#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Leather.BP_Leather_C
// (Actor)

class UClass* ABP_Leather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Leather_C");

	return Clss;
}


// BP_Leather_C BP_Leather.Default__BP_Leather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Leather_C* ABP_Leather_C::GetDefaultObj()
{
	static class ABP_Leather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Leather_C*>(ABP_Leather_C::StaticClass()->DefaultObject);

	return Default;
}

}


