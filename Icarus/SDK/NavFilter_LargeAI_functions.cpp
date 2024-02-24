#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_LargeAI.NavFilter_LargeAI_C
// (None)

class UClass* UNavFilter_LargeAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_LargeAI_C");

	return Clss;
}


// NavFilter_LargeAI_C NavFilter_LargeAI.Default__NavFilter_LargeAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_LargeAI_C* UNavFilter_LargeAI_C::GetDefaultObj()
{
	static class UNavFilter_LargeAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_LargeAI_C*>(UNavFilter_LargeAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


