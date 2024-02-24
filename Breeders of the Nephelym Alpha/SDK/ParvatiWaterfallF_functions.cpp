#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ParvatiWaterfallF.ParvatiWaterfallF_C
// (None)

class UClass* UParvatiWaterfallF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParvatiWaterfallF_C");

	return Clss;
}


// ParvatiWaterfallF_C ParvatiWaterfallF.Default__ParvatiWaterfallF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UParvatiWaterfallF_C* UParvatiWaterfallF_C::GetDefaultObj()
{
	static class UParvatiWaterfallF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UParvatiWaterfallF_C*>(UParvatiWaterfallF_C::StaticClass()->DefaultObject);

	return Default;
}

}


