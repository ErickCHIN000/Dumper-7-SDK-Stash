#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WindMill.BP_WindMill_C
// (Actor)

class UClass* ABP_WindMill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WindMill_C");

	return Clss;
}


// BP_WindMill_C BP_WindMill.Default__BP_WindMill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WindMill_C* ABP_WindMill_C::GetDefaultObj()
{
	static class ABP_WindMill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WindMill_C*>(ABP_WindMill_C::StaticClass()->DefaultObject);

	return Default;
}

}


