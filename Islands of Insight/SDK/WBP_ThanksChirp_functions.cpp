#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ThanksChirp.WBP_ThanksChirp_C
// (None)

class UClass* UWBP_ThanksChirp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ThanksChirp_C");

	return Clss;
}


// WBP_ThanksChirp_C WBP_ThanksChirp.Default__WBP_ThanksChirp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ThanksChirp_C* UWBP_ThanksChirp_C::GetDefaultObj()
{
	static class UWBP_ThanksChirp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ThanksChirp_C*>(UWBP_ThanksChirp_C::StaticClass()->DefaultObject);

	return Default;
}

}


