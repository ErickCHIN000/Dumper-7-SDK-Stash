#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WornWoodStair_01_10x3.BP_WornWoodStair_01_10x3_C
// (Actor)

class UClass* ABP_WornWoodStair_01_10x3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WornWoodStair_01_10x3_C");

	return Clss;
}


// BP_WornWoodStair_01_10x3_C BP_WornWoodStair_01_10x3.Default__BP_WornWoodStair_01_10x3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WornWoodStair_01_10x3_C* ABP_WornWoodStair_01_10x3_C::GetDefaultObj()
{
	static class ABP_WornWoodStair_01_10x3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WornWoodStair_01_10x3_C*>(ABP_WornWoodStair_01_10x3_C::StaticClass()->DefaultObject);

	return Default;
}

}


