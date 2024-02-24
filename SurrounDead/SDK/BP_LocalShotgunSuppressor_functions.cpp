#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalShotgunSuppressor.BP_LocalShotgunSuppressor_C
// (Actor)

class UClass* ABP_LocalShotgunSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalShotgunSuppressor_C");

	return Clss;
}


// BP_LocalShotgunSuppressor_C BP_LocalShotgunSuppressor.Default__BP_LocalShotgunSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalShotgunSuppressor_C* ABP_LocalShotgunSuppressor_C::GetDefaultObj()
{
	static class ABP_LocalShotgunSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalShotgunSuppressor_C*>(ABP_LocalShotgunSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


