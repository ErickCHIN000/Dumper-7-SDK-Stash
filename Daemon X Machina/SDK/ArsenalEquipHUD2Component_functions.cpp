#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalEquipHUD2Component.ArsenalEquipHUD2Component_C
// (None)

class UClass* UArsenalEquipHUD2Component_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalEquipHUD2Component_C");

	return Clss;
}


// ArsenalEquipHUD2Component_C ArsenalEquipHUD2Component.Default__ArsenalEquipHUD2Component_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UArsenalEquipHUD2Component_C* UArsenalEquipHUD2Component_C::GetDefaultObj()
{
	static class UArsenalEquipHUD2Component_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UArsenalEquipHUD2Component_C*>(UArsenalEquipHUD2Component_C::StaticClass()->DefaultObject);

	return Default;
}

}


