#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNH_R.WaterfallNH_R_C
// (None)

class UClass* UWaterfallNH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNH_R_C");

	return Clss;
}


// WaterfallNH_R_C WaterfallNH_R.Default__WaterfallNH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNH_R_C* UWaterfallNH_R_C::GetDefaultObj()
{
	static class UWaterfallNH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNH_R_C*>(UWaterfallNH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


