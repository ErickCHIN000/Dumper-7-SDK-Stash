#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_M249.BP_M249_C
// (Actor)

class UClass* ABP_M249_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_M249_C");

	return Clss;
}


// BP_M249_C BP_M249.Default__BP_M249_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_M249_C* ABP_M249_C::GetDefaultObj()
{
	static class ABP_M249_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_M249_C*>(ABP_M249_C::StaticClass()->DefaultObject);

	return Default;
}

}


