#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalPickUpPartsComponent.ArsenalPickUpPartsComponent_C
// (None)

class UClass* UArsenalPickUpPartsComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalPickUpPartsComponent_C");

	return Clss;
}


// ArsenalPickUpPartsComponent_C ArsenalPickUpPartsComponent.Default__ArsenalPickUpPartsComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalPickUpPartsComponent_C* UArsenalPickUpPartsComponent_C::GetDefaultObj()
{
	static class UArsenalPickUpPartsComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalPickUpPartsComponent_C*>(UArsenalPickUpPartsComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


