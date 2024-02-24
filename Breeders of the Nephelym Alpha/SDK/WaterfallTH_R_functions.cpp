#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTH_R.WaterfallTH_R_C
// (None)

class UClass* UWaterfallTH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTH_R_C");

	return Clss;
}


// WaterfallTH_R_C WaterfallTH_R.Default__WaterfallTH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTH_R_C* UWaterfallTH_R_C::GetDefaultObj()
{
	static class UWaterfallTH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTH_R_C*>(UWaterfallTH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


