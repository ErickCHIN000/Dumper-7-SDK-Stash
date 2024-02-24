#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealthRecoverDelay.GE_HealthRecoverDelay_C
// (None)

class UClass* UGE_HealthRecoverDelay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealthRecoverDelay_C");

	return Clss;
}


// GE_HealthRecoverDelay_C GE_HealthRecoverDelay.Default__GE_HealthRecoverDelay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealthRecoverDelay_C* UGE_HealthRecoverDelay_C::GetDefaultObj()
{
	static class UGE_HealthRecoverDelay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealthRecoverDelay_C*>(UGE_HealthRecoverDelay_C::StaticClass()->DefaultObject);

	return Default;
}

}


