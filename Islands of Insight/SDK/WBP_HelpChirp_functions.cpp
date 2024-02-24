#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HelpChirp.WBP_HelpChirp_C
// (None)

class UClass* UWBP_HelpChirp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HelpChirp_C");

	return Clss;
}


// WBP_HelpChirp_C WBP_HelpChirp.Default__WBP_HelpChirp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HelpChirp_C* UWBP_HelpChirp_C::GetDefaultObj()
{
	static class UWBP_HelpChirp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HelpChirp_C*>(UWBP_HelpChirp_C::StaticClass()->DefaultObject);

	return Default;
}

}


