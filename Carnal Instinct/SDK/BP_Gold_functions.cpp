#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gold.BP_Gold_C
// (Actor)

class UClass* ABP_Gold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gold_C");

	return Clss;
}


// BP_Gold_C BP_Gold.Default__BP_Gold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gold_C* ABP_Gold_C::GetDefaultObj()
{
	static class ABP_Gold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gold_C*>(ABP_Gold_C::StaticClass()->DefaultObject);

	return Default;
}

}


