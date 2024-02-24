#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadeExplosionMultiple.GrenadeExplosionMultiple_C
// (None)

class UClass* UGrenadeExplosionMultiple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadeExplosionMultiple_C");

	return Clss;
}


// GrenadeExplosionMultiple_C GrenadeExplosionMultiple.Default__GrenadeExplosionMultiple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGrenadeExplosionMultiple_C* UGrenadeExplosionMultiple_C::GetDefaultObj()
{
	static class UGrenadeExplosionMultiple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGrenadeExplosionMultiple_C*>(UGrenadeExplosionMultiple_C::StaticClass()->DefaultObject);

	return Default;
}

}


