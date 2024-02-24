#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgType_Healing.DmgType_Healing_C
// (None)

class UClass* UDmgType_Healing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgType_Healing_C");

	return Clss;
}


// DmgType_Healing_C DmgType_Healing.Default__DmgType_Healing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgType_Healing_C* UDmgType_Healing_C::GetDefaultObj()
{
	static class UDmgType_Healing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgType_Healing_C*>(UDmgType_Healing_C::StaticClass()->DefaultObject);

	return Default;
}

}


