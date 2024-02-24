#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallHL_R.WaterfallHL_R_C
// (None)

class UClass* UWaterfallHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallHL_R_C");

	return Clss;
}


// WaterfallHL_R_C WaterfallHL_R.Default__WaterfallHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallHL_R_C* UWaterfallHL_R_C::GetDefaultObj()
{
	static class UWaterfallHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallHL_R_C*>(UWaterfallHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


