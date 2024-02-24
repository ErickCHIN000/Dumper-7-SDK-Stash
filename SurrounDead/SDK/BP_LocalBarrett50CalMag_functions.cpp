#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalBarrett50CalMag.BP_LocalBarrett50CalMag_C
// (Actor)

class UClass* ABP_LocalBarrett50CalMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalBarrett50CalMag_C");

	return Clss;
}


// BP_LocalBarrett50CalMag_C BP_LocalBarrett50CalMag.Default__BP_LocalBarrett50CalMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalBarrett50CalMag_C* ABP_LocalBarrett50CalMag_C::GetDefaultObj()
{
	static class ABP_LocalBarrett50CalMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalBarrett50CalMag_C*>(ABP_LocalBarrett50CalMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


