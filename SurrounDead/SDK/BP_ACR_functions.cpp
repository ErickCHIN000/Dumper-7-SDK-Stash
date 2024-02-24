#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ACR.BP_ACR_C
// (Actor)

class UClass* ABP_ACR_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ACR_C");

	return Clss;
}


// BP_ACR_C BP_ACR.Default__BP_ACR_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ACR_C* ABP_ACR_C::GetDefaultObj()
{
	static class ABP_ACR_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ACR_C*>(ABP_ACR_C::StaticClass()->DefaultObject);

	return Default;
}

}


