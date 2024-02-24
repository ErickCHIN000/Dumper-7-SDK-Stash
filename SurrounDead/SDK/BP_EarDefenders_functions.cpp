#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EarDefenders.BP_EarDefenders_C
// (Actor)

class UClass* ABP_EarDefenders_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EarDefenders_C");

	return Clss;
}


// BP_EarDefenders_C BP_EarDefenders.Default__BP_EarDefenders_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EarDefenders_C* ABP_EarDefenders_C::GetDefaultObj()
{
	static class ABP_EarDefenders_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EarDefenders_C*>(ABP_EarDefenders_C::StaticClass()->DefaultObject);

	return Default;
}

}


