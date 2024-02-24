#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTS_R.WaterfallTS_R_C
// (None)

class UClass* UWaterfallTS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTS_R_C");

	return Clss;
}


// WaterfallTS_R_C WaterfallTS_R.Default__WaterfallTS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTS_R_C* UWaterfallTS_R_C::GetDefaultObj()
{
	static class UWaterfallTS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTS_R_C*>(UWaterfallTS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


