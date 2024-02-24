#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_66mmRocket.BP_66mmRocket_C
// (Actor)

class UClass* ABP_66mmRocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_66mmRocket_C");

	return Clss;
}


// BP_66mmRocket_C BP_66mmRocket.Default__BP_66mmRocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_66mmRocket_C* ABP_66mmRocket_C::GetDefaultObj()
{
	static class ABP_66mmRocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_66mmRocket_C*>(ABP_66mmRocket_C::StaticClass()->DefaultObject);

	return Default;
}

}


