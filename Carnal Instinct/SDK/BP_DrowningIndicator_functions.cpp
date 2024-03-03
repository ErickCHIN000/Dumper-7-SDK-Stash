#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DrowningIndicator.BP_DrowningIndicator_C
// (Actor)

class UClass* ABP_DrowningIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DrowningIndicator_C");

	return Clss;
}


// BP_DrowningIndicator_C BP_DrowningIndicator.Default__BP_DrowningIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DrowningIndicator_C* ABP_DrowningIndicator_C::GetDefaultObj()
{
	static class ABP_DrowningIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DrowningIndicator_C*>(ABP_DrowningIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


