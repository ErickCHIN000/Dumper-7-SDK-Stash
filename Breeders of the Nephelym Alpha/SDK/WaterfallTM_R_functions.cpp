#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTM_R.WaterfallTM_R_C
// (None)

class UClass* UWaterfallTM_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTM_R_C");

	return Clss;
}


// WaterfallTM_R_C WaterfallTM_R.Default__WaterfallTM_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTM_R_C* UWaterfallTM_R_C::GetDefaultObj()
{
	static class UWaterfallTM_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTM_R_C*>(UWaterfallTM_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


