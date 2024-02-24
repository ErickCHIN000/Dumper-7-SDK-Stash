#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ProjectileTimeout.GE_ProjectileTimeout_C
// (None)

class UClass* UGE_ProjectileTimeout_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ProjectileTimeout_C");

	return Clss;
}


// GE_ProjectileTimeout_C GE_ProjectileTimeout.Default__GE_ProjectileTimeout_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ProjectileTimeout_C* UGE_ProjectileTimeout_C::GetDefaultObj()
{
	static class UGE_ProjectileTimeout_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ProjectileTimeout_C*>(UGE_ProjectileTimeout_C::StaticClass()->DefaultObject);

	return Default;
}

}


