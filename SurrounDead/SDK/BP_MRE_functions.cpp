#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MRE.BP_MRE_C
// (Actor)

class UClass* ABP_MRE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MRE_C");

	return Clss;
}


// BP_MRE_C BP_MRE.Default__BP_MRE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MRE_C* ABP_MRE_C::GetDefaultObj()
{
	static class ABP_MRE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MRE_C*>(ABP_MRE_C::StaticClass()->DefaultObject);

	return Default;
}

}


