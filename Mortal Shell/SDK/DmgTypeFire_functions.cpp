#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeFire.DmgTypeFire_C
// (None)

class UClass* UDmgTypeFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeFire_C");

	return Clss;
}


// DmgTypeFire_C DmgTypeFire.Default__DmgTypeFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeFire_C* UDmgTypeFire_C::GetDefaultObj()
{
	static class UDmgTypeFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeFire_C*>(UDmgTypeFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


