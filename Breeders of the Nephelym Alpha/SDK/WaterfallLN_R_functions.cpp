#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallLN_R.WaterfallLN_R_C
// (None)

class UClass* UWaterfallLN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallLN_R_C");

	return Clss;
}


// WaterfallLN_R_C WaterfallLN_R.Default__WaterfallLN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallLN_R_C* UWaterfallLN_R_C::GetDefaultObj()
{
	static class UWaterfallLN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallLN_R_C*>(UWaterfallLN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


