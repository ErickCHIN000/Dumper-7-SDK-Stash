#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTL_R.WaterfallTL_R_C
// (None)

class UClass* UWaterfallTL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTL_R_C");

	return Clss;
}


// WaterfallTL_R_C WaterfallTL_R.Default__WaterfallTL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTL_R_C* UWaterfallTL_R_C::GetDefaultObj()
{
	static class UWaterfallTL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTL_R_C*>(UWaterfallTL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


