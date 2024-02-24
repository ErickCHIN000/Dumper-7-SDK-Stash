#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNS_R.WaterfallNS_R_C
// (None)

class UClass* UWaterfallNS_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNS_R_C");

	return Clss;
}


// WaterfallNS_R_C WaterfallNS_R.Default__WaterfallNS_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNS_R_C* UWaterfallNS_R_C::GetDefaultObj()
{
	static class UWaterfallNS_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNS_R_C*>(UWaterfallNS_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


