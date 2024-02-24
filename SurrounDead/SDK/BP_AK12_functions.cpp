#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AK12.BP_AK12_C
// (Actor)

class UClass* ABP_AK12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AK12_C");

	return Clss;
}


// BP_AK12_C BP_AK12.Default__BP_AK12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AK12_C* ABP_AK12_C::GetDefaultObj()
{
	static class ABP_AK12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AK12_C*>(ABP_AK12_C::StaticClass()->DefaultObject);

	return Default;
}

}


