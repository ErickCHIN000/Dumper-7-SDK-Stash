#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalEmissives_Poison.BP_ElementalEmissives_Poison_C
// (None)

class UClass* UBP_ElementalEmissives_Poison_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalEmissives_Poison_C");

	return Clss;
}


// BP_ElementalEmissives_Poison_C BP_ElementalEmissives_Poison.Default__BP_ElementalEmissives_Poison_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ElementalEmissives_Poison_C* UBP_ElementalEmissives_Poison_C::GetDefaultObj()
{
	static class UBP_ElementalEmissives_Poison_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ElementalEmissives_Poison_C*>(UBP_ElementalEmissives_Poison_C::StaticClass()->DefaultObject);

	return Default;
}

}


