#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallMH_R.WaterfallMH_R_C
// (None)

class UClass* UWaterfallMH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallMH_R_C");

	return Clss;
}


// WaterfallMH_R_C WaterfallMH_R.Default__WaterfallMH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallMH_R_C* UWaterfallMH_R_C::GetDefaultObj()
{
	static class UWaterfallMH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallMH_R_C*>(UWaterfallMH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


