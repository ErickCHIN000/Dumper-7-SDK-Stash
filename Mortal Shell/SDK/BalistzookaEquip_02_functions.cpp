#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistzookaEquip_02.BalistzookaEquip_02_C
// (None)

class UClass* UBalistzookaEquip_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistzookaEquip_02_C");

	return Clss;
}


// BalistzookaEquip_02_C BalistzookaEquip_02.Default__BalistzookaEquip_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalistzookaEquip_02_C* UBalistzookaEquip_02_C::GetDefaultObj()
{
	static class UBalistzookaEquip_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalistzookaEquip_02_C*>(UBalistzookaEquip_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


