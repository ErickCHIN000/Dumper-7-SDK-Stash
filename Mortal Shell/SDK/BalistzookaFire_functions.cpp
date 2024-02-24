#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistzookaFire.BalistzookaFire_C
// (None)

class UClass* UBalistzookaFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistzookaFire_C");

	return Clss;
}


// BalistzookaFire_C BalistzookaFire.Default__BalistzookaFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalistzookaFire_C* UBalistzookaFire_C::GetDefaultObj()
{
	static class UBalistzookaFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalistzookaFire_C*>(UBalistzookaFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


