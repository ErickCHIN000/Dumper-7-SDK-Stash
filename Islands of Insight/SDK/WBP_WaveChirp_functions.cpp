#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WaveChirp.WBP_WaveChirp_C
// (None)

class UClass* UWBP_WaveChirp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WaveChirp_C");

	return Clss;
}


// WBP_WaveChirp_C WBP_WaveChirp.Default__WBP_WaveChirp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WaveChirp_C* UWBP_WaveChirp_C::GetDefaultObj()
{
	static class UWBP_WaveChirp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WaveChirp_C*>(UWBP_WaveChirp_C::StaticClass()->DefaultObject);

	return Default;
}

}


