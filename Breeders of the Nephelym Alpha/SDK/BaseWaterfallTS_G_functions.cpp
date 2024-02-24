#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallTS_G.BaseWaterfallTS_G_C
// (None)

class UClass* UBaseWaterfallTS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallTS_G_C");

	return Clss;
}


// BaseWaterfallTS_G_C BaseWaterfallTS_G.Default__BaseWaterfallTS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallTS_G_C* UBaseWaterfallTS_G_C::GetDefaultObj()
{
	static class UBaseWaterfallTS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallTS_G_C*>(UBaseWaterfallTS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


