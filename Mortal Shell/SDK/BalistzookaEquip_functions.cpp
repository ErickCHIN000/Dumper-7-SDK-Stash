#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistzookaEquip.BalistzookaEquip_C
// (None)

class UClass* UBalistzookaEquip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistzookaEquip_C");

	return Clss;
}


// BalistzookaEquip_C BalistzookaEquip.Default__BalistzookaEquip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalistzookaEquip_C* UBalistzookaEquip_C::GetDefaultObj()
{
	static class UBalistzookaEquip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalistzookaEquip_C*>(UBalistzookaEquip_C::StaticClass()->DefaultObject);

	return Default;
}

}


