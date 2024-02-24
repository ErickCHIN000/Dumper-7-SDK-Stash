#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcHaveKeystone.OrcHaveKeystone_C
// (None)

class UClass* UOrcHaveKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcHaveKeystone_C");

	return Clss;
}


// OrcHaveKeystone_C OrcHaveKeystone.Default__OrcHaveKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcHaveKeystone_C* UOrcHaveKeystone_C::GetDefaultObj()
{
	static class UOrcHaveKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcHaveKeystone_C*>(UOrcHaveKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}


