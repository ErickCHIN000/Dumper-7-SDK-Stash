#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WaterfallNN_R.WaterfallNN_R_C
// (None)

class UClass* UWaterfallNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WaterfallNN_R_C");

	return Clss;
}


// WaterfallNN_R_C WaterfallNN_R.Default__WaterfallNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWaterfallNN_R_C* UWaterfallNN_R_C::GetDefaultObj()
{
	static class UWaterfallNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWaterfallNN_R_C*>(UWaterfallNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


