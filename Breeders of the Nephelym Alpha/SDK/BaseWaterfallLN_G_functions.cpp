#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallLN_G.BaseWaterfallLN_G_C
// (None)

class UClass* UBaseWaterfallLN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallLN_G_C");

	return Clss;
}


// BaseWaterfallLN_G_C BaseWaterfallLN_G.Default__BaseWaterfallLN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallLN_G_C* UBaseWaterfallLN_G_C::GetDefaultObj()
{
	static class UBaseWaterfallLN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallLN_G_C*>(UBaseWaterfallLN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


