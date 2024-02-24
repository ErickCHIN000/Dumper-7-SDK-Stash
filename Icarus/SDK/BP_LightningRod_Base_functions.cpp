#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LightningRod_Base.BP_LightningRod_Base_C
// (Actor)

class UClass* ABP_LightningRod_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LightningRod_Base_C");

	return Clss;
}


// BP_LightningRod_Base_C BP_LightningRod_Base.Default__BP_LightningRod_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LightningRod_Base_C* ABP_LightningRod_Base_C::GetDefaultObj()
{
	static class ABP_LightningRod_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LightningRod_Base_C*>(ABP_LightningRod_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


