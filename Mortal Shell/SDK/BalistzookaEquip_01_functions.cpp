#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistzookaEquip_01.BalistzookaEquip_01_C
// (None)

class UClass* UBalistzookaEquip_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistzookaEquip_01_C");

	return Clss;
}


// BalistzookaEquip_01_C BalistzookaEquip_01.Default__BalistzookaEquip_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalistzookaEquip_01_C* UBalistzookaEquip_01_C::GetDefaultObj()
{
	static class UBalistzookaEquip_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalistzookaEquip_01_C*>(UBalistzookaEquip_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


