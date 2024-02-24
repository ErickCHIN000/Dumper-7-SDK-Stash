#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shemagh2.BP_Shemagh2_C
// (Actor)

class UClass* ABP_Shemagh2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shemagh2_C");

	return Clss;
}


// BP_Shemagh2_C BP_Shemagh2.Default__BP_Shemagh2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shemagh2_C* ABP_Shemagh2_C::GetDefaultObj()
{
	static class ABP_Shemagh2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shemagh2_C*>(ABP_Shemagh2_C::StaticClass()->DefaultObject);

	return Default;
}

}


