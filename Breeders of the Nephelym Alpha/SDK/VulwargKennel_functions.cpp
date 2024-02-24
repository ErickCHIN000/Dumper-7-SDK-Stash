#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VulwargKennel.VulwargKennel_C
// (None)

class UClass* UVulwargKennel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VulwargKennel_C");

	return Clss;
}


// VulwargKennel_C VulwargKennel.Default__VulwargKennel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVulwargKennel_C* UVulwargKennel_C::GetDefaultObj()
{
	static class UVulwargKennel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVulwargKennel_C*>(UVulwargKennel_C::StaticClass()->DefaultObject);

	return Default;
}

}


