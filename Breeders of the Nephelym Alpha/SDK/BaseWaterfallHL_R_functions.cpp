#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallHL_R.BaseWaterfallHL_R_C
// (None)

class UClass* UBaseWaterfallHL_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallHL_R_C");

	return Clss;
}


// BaseWaterfallHL_R_C BaseWaterfallHL_R.Default__BaseWaterfallHL_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallHL_R_C* UBaseWaterfallHL_R_C::GetDefaultObj()
{
	static class UBaseWaterfallHL_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallHL_R_C*>(UBaseWaterfallHL_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


