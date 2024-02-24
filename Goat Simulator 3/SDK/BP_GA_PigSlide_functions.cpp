#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GA_PigSlide.BP_GA_PigSlide_C
// (None)

class UClass* UBP_GA_PigSlide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GA_PigSlide_C");

	return Clss;
}


// BP_GA_PigSlide_C BP_GA_PigSlide.Default__BP_GA_PigSlide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GA_PigSlide_C* UBP_GA_PigSlide_C::GetDefaultObj()
{
	static class UBP_GA_PigSlide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GA_PigSlide_C*>(UBP_GA_PigSlide_C::StaticClass()->DefaultObject);

	return Default;
}

}


