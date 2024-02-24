#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_DefaultAI.NavFilter_DefaultAI_C
// (None)

class UClass* UNavFilter_DefaultAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_DefaultAI_C");

	return Clss;
}


// NavFilter_DefaultAI_C NavFilter_DefaultAI.Default__NavFilter_DefaultAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_DefaultAI_C* UNavFilter_DefaultAI_C::GetDefaultObj()
{
	static class UNavFilter_DefaultAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_DefaultAI_C*>(UNavFilter_DefaultAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


