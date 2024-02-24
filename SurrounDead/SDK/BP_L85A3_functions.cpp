#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_L85A3.BP_L85A3_C
// (Actor)

class UClass* ABP_L85A3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_L85A3_C");

	return Clss;
}


// BP_L85A3_C BP_L85A3.Default__BP_L85A3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_L85A3_C* ABP_L85A3_C::GetDefaultObj()
{
	static class ABP_L85A3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_L85A3_C*>(ABP_L85A3_C::StaticClass()->DefaultObject);

	return Default;
}

}


