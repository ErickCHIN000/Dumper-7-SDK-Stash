#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalEmissives_Cryo.BP_ElementalEmissives_Cryo_C
// (None)

class UClass* UBP_ElementalEmissives_Cryo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalEmissives_Cryo_C");

	return Clss;
}


// BP_ElementalEmissives_Cryo_C BP_ElementalEmissives_Cryo.Default__BP_ElementalEmissives_Cryo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ElementalEmissives_Cryo_C* UBP_ElementalEmissives_Cryo_C::GetDefaultObj()
{
	static class UBP_ElementalEmissives_Cryo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ElementalEmissives_Cryo_C*>(UBP_ElementalEmissives_Cryo_C::StaticClass()->DefaultObject);

	return Default;
}

}


