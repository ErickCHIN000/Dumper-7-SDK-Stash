#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadFlowers.DryadFlowers_C
// (None)

class UClass* UDryadFlowers_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadFlowers_C");

	return Clss;
}


// DryadFlowers_C DryadFlowers.Default__DryadFlowers_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadFlowers_C* UDryadFlowers_C::GetDefaultObj()
{
	static class UDryadFlowers_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadFlowers_C*>(UDryadFlowers_C::StaticClass()->DefaultObject);

	return Default;
}

}


