#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleAnyMeans.KybeleAnyMeans_C
// (None)

class UClass* UKybeleAnyMeans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleAnyMeans_C");

	return Clss;
}


// KybeleAnyMeans_C KybeleAnyMeans.Default__KybeleAnyMeans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleAnyMeans_C* UKybeleAnyMeans_C::GetDefaultObj()
{
	static class UKybeleAnyMeans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleAnyMeans_C*>(UKybeleAnyMeans_C::StaticClass()->DefaultObject);

	return Default;
}

}


