#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ShotgunSuppressor.BP_ShotgunSuppressor_C
// (Actor)

class UClass* ABP_ShotgunSuppressor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ShotgunSuppressor_C");

	return Clss;
}


// BP_ShotgunSuppressor_C BP_ShotgunSuppressor.Default__BP_ShotgunSuppressor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ShotgunSuppressor_C* ABP_ShotgunSuppressor_C::GetDefaultObj()
{
	static class ABP_ShotgunSuppressor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ShotgunSuppressor_C*>(ABP_ShotgunSuppressor_C::StaticClass()->DefaultObject);

	return Default;
}

}


