#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ArsenalEquipHUD2.ArsenalEquipHUD2_C
// (Actor)

class UClass* AArsenalEquipHUD2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ArsenalEquipHUD2_C");

	return Clss;
}


// ArsenalEquipHUD2_C ArsenalEquipHUD2.Default__ArsenalEquipHUD2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AArsenalEquipHUD2_C* AArsenalEquipHUD2_C::GetDefaultObj()
{
	static class AArsenalEquipHUD2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AArsenalEquipHUD2_C*>(AArsenalEquipHUD2_C::StaticClass()->DefaultObject);

	return Default;
}

}


