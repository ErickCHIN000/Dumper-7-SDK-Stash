#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DmgTypeFrozen.DmgTypeFrozen_C
// (None)

class UClass* UDmgTypeFrozen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DmgTypeFrozen_C");

	return Clss;
}


// DmgTypeFrozen_C DmgTypeFrozen.Default__DmgTypeFrozen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDmgTypeFrozen_C* UDmgTypeFrozen_C::GetDefaultObj()
{
	static class UDmgTypeFrozen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDmgTypeFrozen_C*>(UDmgTypeFrozen_C::StaticClass()->DefaultObject);

	return Default;
}

}


