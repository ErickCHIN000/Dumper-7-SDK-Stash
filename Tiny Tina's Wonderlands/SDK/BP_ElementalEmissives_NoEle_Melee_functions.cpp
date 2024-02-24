#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ElementalEmissives_NoEle_Melee.BP_ElementalEmissives_NoEle_Melee_C
// (None)

class UClass* UBP_ElementalEmissives_NoEle_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ElementalEmissives_NoEle_Melee_C");

	return Clss;
}


// BP_ElementalEmissives_NoEle_Melee_C BP_ElementalEmissives_NoEle_Melee.Default__BP_ElementalEmissives_NoEle_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ElementalEmissives_NoEle_Melee_C* UBP_ElementalEmissives_NoEle_Melee_C::GetDefaultObj()
{
	static class UBP_ElementalEmissives_NoEle_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ElementalEmissives_NoEle_Melee_C*>(UBP_ElementalEmissives_NoEle_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


