#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNS_G.BaseWaterfallNS_G_C
// (None)

class UClass* UBaseWaterfallNS_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNS_G_C");

	return Clss;
}


// BaseWaterfallNS_G_C BaseWaterfallNS_G.Default__BaseWaterfallNS_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNS_G_C* UBaseWaterfallNS_G_C::GetDefaultObj()
{
	static class UBaseWaterfallNS_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNS_G_C*>(UBaseWaterfallNS_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


