#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallHM_R.WaterfallHM_R_C
// (None)

class UClass* UWaterfallHM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallHM_R_C");

	return Clss;
}


// WaterfallHM_R_C WaterfallHM_R.Default__WaterfallHM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallHM_R_C* UWaterfallHM_R_C::GetDefaultObj()
{
	static class UWaterfallHM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallHM_R_C*>(UWaterfallHM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


