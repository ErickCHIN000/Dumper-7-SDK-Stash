#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Chip.Chip_C
// (Actor)

class UClass* AChip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Chip_C");

	return Clss;
}


// Chip_C Chip.Default__Chip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChip_C* AChip_C::GetDefaultObj()
{
	static class AChip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChip_C*>(AChip_C::StaticClass()->DefaultObject);

	return Default;
}

}


