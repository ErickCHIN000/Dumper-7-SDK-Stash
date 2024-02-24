#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AK74.BP_AK74_C
// (Actor)

class UClass* ABP_AK74_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AK74_C");

	return Clss;
}


// BP_AK74_C BP_AK74.Default__BP_AK74_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AK74_C* ABP_AK74_C::GetDefaultObj()
{
	static class ABP_AK74_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AK74_C*>(ABP_AK74_C::StaticClass()->DefaultObject);

	return Default;
}

}


