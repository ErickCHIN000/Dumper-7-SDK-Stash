#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiWaterfallT.ParvatiWaterfallT_C
// (None)

class UClass* UParvatiWaterfallT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiWaterfallT_C");

	return Clss;
}


// ParvatiWaterfallT_C ParvatiWaterfallT.Default__ParvatiWaterfallT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiWaterfallT_C* UParvatiWaterfallT_C::GetDefaultObj()
{
	static class UParvatiWaterfallT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiWaterfallT_C*>(UParvatiWaterfallT_C::StaticClass()->DefaultObject);

	return Default;
}

}


