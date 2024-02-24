#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M9.BP_M9_C
// (Actor)

class UClass* ABP_M9_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M9_C");

	return Clss;
}


// BP_M9_C BP_M9.Default__BP_M9_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M9_C* ABP_M9_C::GetDefaultObj()
{
	static class ABP_M9_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M9_C*>(ABP_M9_C::StaticClass()->DefaultObject);

	return Default;
}

}


