#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallMM_G.BaseWaterfallMM_G_C
// (None)

class UClass* UBaseWaterfallMM_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallMM_G_C");

	return Clss;
}


// BaseWaterfallMM_G_C BaseWaterfallMM_G.Default__BaseWaterfallMM_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallMM_G_C* UBaseWaterfallMM_G_C::GetDefaultObj()
{
	static class UBaseWaterfallMM_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallMM_G_C*>(UBaseWaterfallMM_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


