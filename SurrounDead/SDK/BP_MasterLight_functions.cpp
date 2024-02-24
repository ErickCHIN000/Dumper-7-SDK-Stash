#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterLight.BP_MasterLight_C
// (Actor)

class UClass* ABP_MasterLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterLight_C");

	return Clss;
}


// BP_MasterLight_C BP_MasterLight.Default__BP_MasterLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterLight_C* ABP_MasterLight_C::GetDefaultObj()
{
	static class ABP_MasterLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterLight_C*>(ABP_MasterLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


