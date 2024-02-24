#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNN_G.BaseWaterfallNN_G_C
// (None)

class UClass* UBaseWaterfallNN_G_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNN_G_C");

	return Clss;
}


// BaseWaterfallNN_G_C BaseWaterfallNN_G.Default__BaseWaterfallNN_G_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNN_G_C* UBaseWaterfallNN_G_C::GetDefaultObj()
{
	static class UBaseWaterfallNN_G_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNN_G_C*>(UBaseWaterfallNN_G_C::StaticClass()->DefaultObject);

	return Default;
}

}


