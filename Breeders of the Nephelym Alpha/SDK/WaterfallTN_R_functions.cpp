#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallTN_R.WaterfallTN_R_C
// (None)

class UClass* UWaterfallTN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallTN_R_C");

	return Clss;
}


// WaterfallTN_R_C WaterfallTN_R.Default__WaterfallTN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallTN_R_C* UWaterfallTN_R_C::GetDefaultObj()
{
	static class UWaterfallTN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallTN_R_C*>(UWaterfallTN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


