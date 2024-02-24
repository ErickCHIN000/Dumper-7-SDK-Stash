#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalEmissives_DarkMagic.BP_ElementalEmissives_DarkMagic_C
// (None)

class UClass* UBP_ElementalEmissives_DarkMagic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalEmissives_DarkMagic_C");

	return Clss;
}


// BP_ElementalEmissives_DarkMagic_C BP_ElementalEmissives_DarkMagic.Default__BP_ElementalEmissives_DarkMagic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ElementalEmissives_DarkMagic_C* UBP_ElementalEmissives_DarkMagic_C::GetDefaultObj()
{
	static class UBP_ElementalEmissives_DarkMagic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ElementalEmissives_DarkMagic_C*>(UBP_ElementalEmissives_DarkMagic_C::StaticClass()->DefaultObject);

	return Default;
}

}


