#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HawaiianShirt.BP_HawaiianShirt_C
// (Actor)

class UClass* ABP_HawaiianShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HawaiianShirt_C");

	return Clss;
}


// BP_HawaiianShirt_C BP_HawaiianShirt.Default__BP_HawaiianShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HawaiianShirt_C* ABP_HawaiianShirt_C::GetDefaultObj()
{
	static class ABP_HawaiianShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HawaiianShirt_C*>(ABP_HawaiianShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


