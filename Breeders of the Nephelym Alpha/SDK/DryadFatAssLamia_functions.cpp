#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadFatAssLamia.DryadFatAssLamia_C
// (None)

class UClass* UDryadFatAssLamia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadFatAssLamia_C");

	return Clss;
}


// DryadFatAssLamia_C DryadFatAssLamia.Default__DryadFatAssLamia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadFatAssLamia_C* UDryadFatAssLamia_C::GetDefaultObj()
{
	static class UDryadFatAssLamia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadFatAssLamia_C*>(UDryadFatAssLamia_C::StaticClass()->DefaultObject);

	return Default;
}

}


