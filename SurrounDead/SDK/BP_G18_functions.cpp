#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_G18.BP_G18_C
// (Actor)

class UClass* ABP_G18_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_G18_C");

	return Clss;
}


// BP_G18_C BP_G18.Default__BP_G18_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_G18_C* ABP_G18_C::GetDefaultObj()
{
	static class ABP_G18_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_G18_C*>(ABP_G18_C::StaticClass()->DefaultObject);

	return Default;
}

}


