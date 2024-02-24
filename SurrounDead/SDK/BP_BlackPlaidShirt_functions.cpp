#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlackPlaidShirt.BP_BlackPlaidShirt_C
// (Actor)

class UClass* ABP_BlackPlaidShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlackPlaidShirt_C");

	return Clss;
}


// BP_BlackPlaidShirt_C BP_BlackPlaidShirt.Default__BP_BlackPlaidShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlackPlaidShirt_C* ABP_BlackPlaidShirt_C::GetDefaultObj()
{
	static class ABP_BlackPlaidShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlackPlaidShirt_C*>(ABP_BlackPlaidShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


