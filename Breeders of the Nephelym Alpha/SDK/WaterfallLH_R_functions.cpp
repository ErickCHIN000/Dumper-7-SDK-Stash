#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallLH_R.WaterfallLH_R_C
// (None)

class UClass* UWaterfallLH_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallLH_R_C");

	return Clss;
}


// WaterfallLH_R_C WaterfallLH_R.Default__WaterfallLH_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallLH_R_C* UWaterfallLH_R_C::GetDefaultObj()
{
	static class UWaterfallLH_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallLH_R_C*>(UWaterfallLH_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


