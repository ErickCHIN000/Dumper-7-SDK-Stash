#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BlackShirt.BP_BlackShirt_C
// (Actor)

class UClass* ABP_BlackShirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BlackShirt_C");

	return Clss;
}


// BP_BlackShirt_C BP_BlackShirt.Default__BP_BlackShirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BlackShirt_C* ABP_BlackShirt_C::GetDefaultObj()
{
	static class ABP_BlackShirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BlackShirt_C*>(ABP_BlackShirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


