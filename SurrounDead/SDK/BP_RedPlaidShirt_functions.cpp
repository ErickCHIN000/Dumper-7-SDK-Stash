#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RedPlaidShirt.BP_RedPlaidShirt_C
// (Actor)

class UClass* ABP_RedPlaidShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RedPlaidShirt_C");

	return Clss;
}


// BP_RedPlaidShirt_C BP_RedPlaidShirt.Default__BP_RedPlaidShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RedPlaidShirt_C* ABP_RedPlaidShirt_C::GetDefaultObj()
{
	static class ABP_RedPlaidShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RedPlaidShirt_C*>(ABP_RedPlaidShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


