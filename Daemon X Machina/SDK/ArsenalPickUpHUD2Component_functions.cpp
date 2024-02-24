#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalPickUpHUD2Component.ArsenalPickUpHUD2Component_C
// (None)

class UClass* UArsenalPickUpHUD2Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalPickUpHUD2Component_C");

	return Clss;
}


// ArsenalPickUpHUD2Component_C ArsenalPickUpHUD2Component.Default__ArsenalPickUpHUD2Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalPickUpHUD2Component_C* UArsenalPickUpHUD2Component_C::GetDefaultObj()
{
	static class UArsenalPickUpHUD2Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalPickUpHUD2Component_C*>(UArsenalPickUpHUD2Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


