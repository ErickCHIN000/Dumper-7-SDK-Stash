#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Scout_FromStealth.Scout_FromStealth_C
// (None)

class UClass* UScout_FromStealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Scout_FromStealth_C");

	return Clss;
}


// Scout_FromStealth_C Scout_FromStealth.Default__Scout_FromStealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScout_FromStealth_C* UScout_FromStealth_C::GetDefaultObj()
{
	static class UScout_FromStealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScout_FromStealth_C*>(UScout_FromStealth_C::StaticClass()->DefaultObject);

	return Default;
}

}


