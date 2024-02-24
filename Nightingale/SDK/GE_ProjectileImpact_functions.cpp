#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ProjectileImpact.GE_ProjectileImpact_C
// (None)

class UClass* UGE_ProjectileImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ProjectileImpact_C");

	return Clss;
}


// GE_ProjectileImpact_C GE_ProjectileImpact.Default__GE_ProjectileImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ProjectileImpact_C* UGE_ProjectileImpact_C::GetDefaultObj()
{
	static class UGE_ProjectileImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ProjectileImpact_C*>(UGE_ProjectileImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


