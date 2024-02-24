#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_DropZoneGeneration.NavFilter_DropZoneGeneration_C
// (None)

class UClass* UNavFilter_DropZoneGeneration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_DropZoneGeneration_C");

	return Clss;
}


// NavFilter_DropZoneGeneration_C NavFilter_DropZoneGeneration.Default__NavFilter_DropZoneGeneration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_DropZoneGeneration_C* UNavFilter_DropZoneGeneration_C::GetDefaultObj()
{
	static class UNavFilter_DropZoneGeneration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_DropZoneGeneration_C*>(UNavFilter_DropZoneGeneration_C::StaticClass()->DefaultObject);

	return Default;
}

}


