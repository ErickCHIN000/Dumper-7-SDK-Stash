#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HealthFull.GE_HealthFull_C
// (None)

class UClass* UGE_HealthFull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HealthFull_C");

	return Clss;
}


// GE_HealthFull_C GE_HealthFull.Default__GE_HealthFull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HealthFull_C* UGE_HealthFull_C::GetDefaultObj()
{
	static class UGE_HealthFull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HealthFull_C*>(UGE_HealthFull_C::StaticClass()->DefaultObject);

	return Default;
}

}


