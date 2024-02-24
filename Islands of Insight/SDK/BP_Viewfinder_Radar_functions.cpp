#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Viewfinder_Radar.BP_Viewfinder_Radar_C
// (None)

class UClass* UBP_Viewfinder_Radar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Viewfinder_Radar_C");

	return Clss;
}


// BP_Viewfinder_Radar_C BP_Viewfinder_Radar.Default__BP_Viewfinder_Radar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Viewfinder_Radar_C* UBP_Viewfinder_Radar_C::GetDefaultObj()
{
	static class UBP_Viewfinder_Radar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Viewfinder_Radar_C*>(UBP_Viewfinder_Radar_C::StaticClass()->DefaultObject);

	return Default;
}

}


