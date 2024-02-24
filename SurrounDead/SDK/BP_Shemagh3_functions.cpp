#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shemagh3.BP_Shemagh3_C
// (Actor)

class UClass* ABP_Shemagh3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shemagh3_C");

	return Clss;
}


// BP_Shemagh3_C BP_Shemagh3.Default__BP_Shemagh3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shemagh3_C* ABP_Shemagh3_C::GetDefaultObj()
{
	static class ABP_Shemagh3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shemagh3_C*>(ABP_Shemagh3_C::StaticClass()->DefaultObject);

	return Default;
}

}


