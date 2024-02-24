#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealthRecover.GE_HealthRecover_C
// (None)

class UClass* UGE_HealthRecover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealthRecover_C");

	return Clss;
}


// GE_HealthRecover_C GE_HealthRecover.Default__GE_HealthRecover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealthRecover_C* UGE_HealthRecover_C::GetDefaultObj()
{
	static class UGE_HealthRecover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealthRecover_C*>(UGE_HealthRecover_C::StaticClass()->DefaultObject);

	return Default;
}

}


