#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_R870.BP_R870_C
// (Actor)

class UClass* ABP_R870_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_R870_C");

	return Clss;
}


// BP_R870_C BP_R870.Default__BP_R870_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_R870_C* ABP_R870_C::GetDefaultObj()
{
	static class ABP_R870_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_R870_C*>(ABP_R870_C::StaticClass()->DefaultObject);

	return Default;
}

}


