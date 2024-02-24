#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ZoneMapData_Base.ZoneMapData_Base_C
// (None)

class UClass* UZoneMapData_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ZoneMapData_Base_C");

	return Clss;
}


// ZoneMapData_Base_C ZoneMapData_Base.Default__ZoneMapData_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UZoneMapData_Base_C* UZoneMapData_Base_C::GetDefaultObj()
{
	static class UZoneMapData_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UZoneMapData_Base_C*>(UZoneMapData_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


