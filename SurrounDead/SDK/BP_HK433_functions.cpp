#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HK433.BP_HK433_C
// (Actor)

class UClass* ABP_HK433_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HK433_C");

	return Clss;
}


// BP_HK433_C BP_HK433.Default__BP_HK433_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HK433_C* ABP_HK433_C::GetDefaultObj()
{
	static class ABP_HK433_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HK433_C*>(ABP_HK433_C::StaticClass()->DefaultObject);

	return Default;
}

}


