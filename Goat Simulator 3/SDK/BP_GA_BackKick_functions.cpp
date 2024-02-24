#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GA_BackKick.BP_GA_BackKick_C
// (None)

class UClass* UBP_GA_BackKick_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GA_BackKick_C");

	return Clss;
}


// BP_GA_BackKick_C BP_GA_BackKick.Default__BP_GA_BackKick_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GA_BackKick_C* UBP_GA_BackKick_C::GetDefaultObj()
{
	static class UBP_GA_BackKick_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GA_BackKick_C*>(UBP_GA_BackKick_C::StaticClass()->DefaultObject);

	return Default;
}

}


