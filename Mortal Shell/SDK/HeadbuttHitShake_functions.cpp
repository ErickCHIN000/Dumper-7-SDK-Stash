#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HeadbuttHitShake.HeadbuttHitShake_C
// (None)

class UClass* UHeadbuttHitShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HeadbuttHitShake_C");

	return Clss;
}


// HeadbuttHitShake_C HeadbuttHitShake.Default__HeadbuttHitShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHeadbuttHitShake_C* UHeadbuttHitShake_C::GetDefaultObj()
{
	static class UHeadbuttHitShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHeadbuttHitShake_C*>(UHeadbuttHitShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


