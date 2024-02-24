#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BalistzookaHit.BalistzookaHit_C
// (None)

class UClass* UBalistzookaHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BalistzookaHit_C");

	return Clss;
}


// BalistzookaHit_C BalistzookaHit.Default__BalistzookaHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBalistzookaHit_C* UBalistzookaHit_C::GetDefaultObj()
{
	static class UBalistzookaHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBalistzookaHit_C*>(UBalistzookaHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


