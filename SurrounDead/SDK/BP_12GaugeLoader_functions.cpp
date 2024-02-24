#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_12GaugeLoader.BP_12GaugeLoader_C
// (Actor)

class UClass* ABP_12GaugeLoader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_12GaugeLoader_C");

	return Clss;
}


// BP_12GaugeLoader_C BP_12GaugeLoader.Default__BP_12GaugeLoader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_12GaugeLoader_C* ABP_12GaugeLoader_C::GetDefaultObj()
{
	static class ABP_12GaugeLoader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_12GaugeLoader_C*>(ABP_12GaugeLoader_C::StaticClass()->DefaultObject);

	return Default;
}

}


