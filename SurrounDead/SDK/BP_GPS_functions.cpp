#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GPS.BP_GPS_C
// (Actor)

class UClass* ABP_GPS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GPS_C");

	return Clss;
}


// BP_GPS_C BP_GPS.Default__BP_GPS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GPS_C* ABP_GPS_C::GetDefaultObj()
{
	static class ABP_GPS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GPS_C*>(ABP_GPS_C::StaticClass()->DefaultObject);

	return Default;
}

}


