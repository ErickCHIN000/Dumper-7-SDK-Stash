#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadAboutDryads.DryadAboutDryads_C
// (None)

class UClass* UDryadAboutDryads_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadAboutDryads_C");

	return Clss;
}


// DryadAboutDryads_C DryadAboutDryads.Default__DryadAboutDryads_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadAboutDryads_C* UDryadAboutDryads_C::GetDefaultObj()
{
	static class UDryadAboutDryads_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadAboutDryads_C*>(UDryadAboutDryads_C::StaticClass()->DefaultObject);

	return Default;
}

}


