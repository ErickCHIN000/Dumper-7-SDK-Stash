#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NotThatChirp.WBP_NotThatChirp_C
// (None)

class UClass* UWBP_NotThatChirp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NotThatChirp_C");

	return Clss;
}


// WBP_NotThatChirp_C WBP_NotThatChirp.Default__WBP_NotThatChirp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NotThatChirp_C* UWBP_NotThatChirp_C::GetDefaultObj()
{
	static class UWBP_NotThatChirp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NotThatChirp_C*>(UWBP_NotThatChirp_C::StaticClass()->DefaultObject);

	return Default;
}

}


