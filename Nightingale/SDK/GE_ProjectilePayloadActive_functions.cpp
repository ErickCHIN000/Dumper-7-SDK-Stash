#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ProjectilePayloadActive.GE_ProjectilePayloadActive_C
// (None)

class UClass* UGE_ProjectilePayloadActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ProjectilePayloadActive_C");

	return Clss;
}


// GE_ProjectilePayloadActive_C GE_ProjectilePayloadActive.Default__GE_ProjectilePayloadActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ProjectilePayloadActive_C* UGE_ProjectilePayloadActive_C::GetDefaultObj()
{
	static class UGE_ProjectilePayloadActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ProjectilePayloadActive_C*>(UGE_ProjectilePayloadActive_C::StaticClass()->DefaultObject);

	return Default;
}

}


