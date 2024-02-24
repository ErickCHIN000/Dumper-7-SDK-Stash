#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NavFilter_JuvenileAI.NavFilter_JuvenileAI_C
// (None)

class UClass* UNavFilter_JuvenileAI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavFilter_JuvenileAI_C");

	return Clss;
}


// NavFilter_JuvenileAI_C NavFilter_JuvenileAI.Default__NavFilter_JuvenileAI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNavFilter_JuvenileAI_C* UNavFilter_JuvenileAI_C::GetDefaultObj()
{
	static class UNavFilter_JuvenileAI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavFilter_JuvenileAI_C*>(UNavFilter_JuvenileAI_C::StaticClass()->DefaultObject);

	return Default;
}

}


