#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseWaterfallNN_R.BaseWaterfallNN_R_C
// (None)

class UClass* UBaseWaterfallNN_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseWaterfallNN_R_C");

	return Clss;
}


// BaseWaterfallNN_R_C BaseWaterfallNN_R.Default__BaseWaterfallNN_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBaseWaterfallNN_R_C* UBaseWaterfallNN_R_C::GetDefaultObj()
{
	static class UBaseWaterfallNN_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBaseWaterfallNN_R_C*>(UBaseWaterfallNN_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


