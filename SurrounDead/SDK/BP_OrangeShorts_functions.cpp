#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OrangeShorts.BP_OrangeShorts_C
// (Actor)

class UClass* ABP_OrangeShorts_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OrangeShorts_C");

	return Clss;
}


// BP_OrangeShorts_C BP_OrangeShorts.Default__BP_OrangeShorts_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OrangeShorts_C* ABP_OrangeShorts_C::GetDefaultObj()
{
	static class ABP_OrangeShorts_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OrangeShorts_C*>(ABP_OrangeShorts_C::StaticClass()->DefaultObject);

	return Default;
}

}


