#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonDrakeM.DragonDrakeM_C
// (None)

class UClass* UDragonDrakeM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonDrakeM_C");

	return Clss;
}


// DragonDrakeM_C DragonDrakeM.Default__DragonDrakeM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDragonDrakeM_C* UDragonDrakeM_C::GetDefaultObj()
{
	static class UDragonDrakeM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDragonDrakeM_C*>(UDragonDrakeM_C::StaticClass()->DefaultObject);

	return Default;
}

}


