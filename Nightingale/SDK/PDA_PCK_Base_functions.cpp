#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_PCK_Base.PDA_PCK_Base_C
// (None)

class UClass* UPDA_PCK_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_PCK_Base_C");

	return Clss;
}


// PDA_PCK_Base_C PDA_PCK_Base.Default__PDA_PCK_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_PCK_Base_C* UPDA_PCK_Base_C::GetDefaultObj()
{
	static class UPDA_PCK_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_PCK_Base_C*>(UPDA_PCK_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


