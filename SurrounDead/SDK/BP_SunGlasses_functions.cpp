#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SunGlasses.BP_SunGlasses_C
// (Actor)

class UClass* ABP_SunGlasses_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SunGlasses_C");

	return Clss;
}


// BP_SunGlasses_C BP_SunGlasses.Default__BP_SunGlasses_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SunGlasses_C* ABP_SunGlasses_C::GetDefaultObj()
{
	static class ABP_SunGlasses_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SunGlasses_C*>(ABP_SunGlasses_C::StaticClass()->DefaultObject);

	return Default;
}

}


