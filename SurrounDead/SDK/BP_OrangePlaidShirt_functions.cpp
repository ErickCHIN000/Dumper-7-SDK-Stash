#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OrangePlaidShirt.BP_OrangePlaidShirt_C
// (Actor)

class UClass* ABP_OrangePlaidShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OrangePlaidShirt_C");

	return Clss;
}


// BP_OrangePlaidShirt_C BP_OrangePlaidShirt.Default__BP_OrangePlaidShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OrangePlaidShirt_C* ABP_OrangePlaidShirt_C::GetDefaultObj()
{
	static class ABP_OrangePlaidShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OrangePlaidShirt_C*>(ABP_OrangePlaidShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


