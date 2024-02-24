#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_HeavyCoat.BP_HeavyCoat_C
// (Actor)

class UClass* ABP_HeavyCoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_HeavyCoat_C");

	return Clss;
}


// BP_HeavyCoat_C BP_HeavyCoat.Default__BP_HeavyCoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_HeavyCoat_C* ABP_HeavyCoat_C::GetDefaultObj()
{
	static class ABP_HeavyCoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_HeavyCoat_C*>(ABP_HeavyCoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


