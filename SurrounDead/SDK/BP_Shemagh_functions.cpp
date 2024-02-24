#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Shemagh.BP_Shemagh_C
// (Actor)

class UClass* ABP_Shemagh_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Shemagh_C");

	return Clss;
}


// BP_Shemagh_C BP_Shemagh.Default__BP_Shemagh_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Shemagh_C* ABP_Shemagh_C::GetDefaultObj()
{
	static class ABP_Shemagh_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Shemagh_C*>(ABP_Shemagh_C::StaticClass()->DefaultObject);

	return Default;
}

}


