#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BucketHat.BP_BucketHat_C
// (Actor)

class UClass* ABP_BucketHat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BucketHat_C");

	return Clss;
}


// BP_BucketHat_C BP_BucketHat.Default__BP_BucketHat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BucketHat_C* ABP_BucketHat_C::GetDefaultObj()
{
	static class ABP_BucketHat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BucketHat_C*>(ABP_BucketHat_C::StaticClass()->DefaultObject);

	return Default;
}

}


