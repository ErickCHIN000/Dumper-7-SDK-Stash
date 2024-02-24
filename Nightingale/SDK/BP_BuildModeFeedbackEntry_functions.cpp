#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildModeFeedbackEntry.BP_BuildModeFeedbackEntry_C
// (None)

class UClass* UBP_BuildModeFeedbackEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildModeFeedbackEntry_C");

	return Clss;
}


// BP_BuildModeFeedbackEntry_C BP_BuildModeFeedbackEntry.Default__BP_BuildModeFeedbackEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildModeFeedbackEntry_C* UBP_BuildModeFeedbackEntry_C::GetDefaultObj()
{
	static class UBP_BuildModeFeedbackEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildModeFeedbackEntry_C*>(UBP_BuildModeFeedbackEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


