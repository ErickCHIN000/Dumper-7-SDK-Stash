#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Compass.BP_Compass_C
// (Actor)

class UClass* ABP_Compass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Compass_C");

	return Clss;
}


// BP_Compass_C BP_Compass.Default__BP_Compass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Compass_C* ABP_Compass_C::GetDefaultObj()
{
	static class ABP_Compass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Compass_C*>(ABP_Compass_C::StaticClass()->DefaultObject);

	return Default;
}

}


