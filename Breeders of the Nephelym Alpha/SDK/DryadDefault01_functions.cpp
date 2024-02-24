#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadDefault01.DryadDefault01_C
// (None)

class UClass* UDryadDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadDefault01_C");

	return Clss;
}


// DryadDefault01_C DryadDefault01.Default__DryadDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadDefault01_C* UDryadDefault01_C::GetDefaultObj()
{
	static class UDryadDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadDefault01_C*>(UDryadDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


