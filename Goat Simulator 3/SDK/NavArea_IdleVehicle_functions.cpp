#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavArea_IdleVehicle.NavArea_IdleVehicle_C
// (None)

class UClass* UNavArea_IdleVehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavArea_IdleVehicle_C");

	return Clss;
}


// NavArea_IdleVehicle_C NavArea_IdleVehicle.Default__NavArea_IdleVehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavArea_IdleVehicle_C* UNavArea_IdleVehicle_C::GetDefaultObj()
{
	static class UNavArea_IdleVehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavArea_IdleVehicle_C*>(UNavArea_IdleVehicle_C::StaticClass()->DefaultObject);

	return Default;
}

}


