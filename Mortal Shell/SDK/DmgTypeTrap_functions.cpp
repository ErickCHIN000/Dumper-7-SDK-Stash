#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeTrap.DmgTypeTrap_C
// (None)

class UClass* UDmgTypeTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeTrap_C");

	return Clss;
}


// DmgTypeTrap_C DmgTypeTrap.Default__DmgTypeTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeTrap_C* UDmgTypeTrap_C::GetDefaultObj()
{
	static class UDmgTypeTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeTrap_C*>(UDmgTypeTrap_C::StaticClass()->DefaultObject);

	return Default;
}

}


