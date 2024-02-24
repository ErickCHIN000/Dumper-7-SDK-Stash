#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PDA_TitleScreen.PDA_TitleScreen_C
// (None)

class UClass* UPDA_TitleScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PDA_TitleScreen_C");

	return Clss;
}


// PDA_TitleScreen_C PDA_TitleScreen.Default__PDA_TitleScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPDA_TitleScreen_C* UPDA_TitleScreen_C::GetDefaultObj()
{
	static class UPDA_TitleScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPDA_TitleScreen_C*>(UPDA_TitleScreen_C::StaticClass()->DefaultObject);

	return Default;
}

}


