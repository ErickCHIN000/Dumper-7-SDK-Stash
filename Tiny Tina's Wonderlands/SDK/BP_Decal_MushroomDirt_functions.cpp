#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Decal_MushroomDirt.BP_Decal_MushroomDirt_C
// (Actor)

class UClass* ABP_Decal_MushroomDirt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Decal_MushroomDirt_C");

	return Clss;
}


// BP_Decal_MushroomDirt_C BP_Decal_MushroomDirt.Default__BP_Decal_MushroomDirt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Decal_MushroomDirt_C* ABP_Decal_MushroomDirt_C::GetDefaultObj()
{
	static class ABP_Decal_MushroomDirt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Decal_MushroomDirt_C*>(ABP_Decal_MushroomDirt_C::StaticClass()->DefaultObject);

	return Default;
}

}


