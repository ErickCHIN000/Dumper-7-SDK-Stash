#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_WDG_Base.PDA_WDG_Base_C
// (None)

class UClass* UPDA_WDG_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_WDG_Base_C");

	return Clss;
}


// PDA_WDG_Base_C PDA_WDG_Base.Default__PDA_WDG_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_WDG_Base_C* UPDA_WDG_Base_C::GetDefaultObj()
{
	static class UPDA_WDG_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_WDG_Base_C*>(UPDA_WDG_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


