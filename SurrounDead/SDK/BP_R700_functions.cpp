#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_R700.BP_R700_C
// (Actor)

class UClass* ABP_R700_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_R700_C");

	return Clss;
}


// BP_R700_C BP_R700.Default__BP_R700_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_R700_C* ABP_R700_C::GetDefaultObj()
{
	static class ABP_R700_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_R700_C*>(ABP_R700_C::StaticClass()->DefaultObject);

	return Default;
}

}


