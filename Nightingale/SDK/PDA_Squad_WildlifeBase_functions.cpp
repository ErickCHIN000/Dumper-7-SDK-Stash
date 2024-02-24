#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_Squad_WildlifeBase.PDA_Squad_WildlifeBase_C
// (None)

class UClass* UPDA_Squad_WildlifeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_Squad_WildlifeBase_C");

	return Clss;
}


// PDA_Squad_WildlifeBase_C PDA_Squad_WildlifeBase.Default__PDA_Squad_WildlifeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_Squad_WildlifeBase_C* UPDA_Squad_WildlifeBase_C::GetDefaultObj()
{
	static class UPDA_Squad_WildlifeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_Squad_WildlifeBase_C*>(UPDA_Squad_WildlifeBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


