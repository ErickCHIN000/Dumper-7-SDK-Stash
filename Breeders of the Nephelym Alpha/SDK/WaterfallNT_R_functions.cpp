#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNT_R.WaterfallNT_R_C
// (None)

class UClass* UWaterfallNT_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNT_R_C");

	return Clss;
}


// WaterfallNT_R_C WaterfallNT_R.Default__WaterfallNT_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNT_R_C* UWaterfallNT_R_C::GetDefaultObj()
{
	static class UWaterfallNT_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNT_R_C*>(UWaterfallNT_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


