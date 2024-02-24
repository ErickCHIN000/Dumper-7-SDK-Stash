#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalEmissives_Shock.BP_ElementalEmissives_Shock_C
// (None)

class UClass* UBP_ElementalEmissives_Shock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalEmissives_Shock_C");

	return Clss;
}


// BP_ElementalEmissives_Shock_C BP_ElementalEmissives_Shock.Default__BP_ElementalEmissives_Shock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ElementalEmissives_Shock_C* UBP_ElementalEmissives_Shock_C::GetDefaultObj()
{
	static class UBP_ElementalEmissives_Shock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ElementalEmissives_Shock_C*>(UBP_ElementalEmissives_Shock_C::StaticClass()->DefaultObject);

	return Default;
}

}


