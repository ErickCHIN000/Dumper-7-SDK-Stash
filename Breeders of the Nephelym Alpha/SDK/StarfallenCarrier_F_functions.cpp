#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass StarfallenCarrier_F.StarfallenCarrier_F_C
// (None)

class UClass* UStarfallenCarrier_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StarfallenCarrier_F_C");

	return Clss;
}


// StarfallenCarrier_F_C StarfallenCarrier_F.Default__StarfallenCarrier_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStarfallenCarrier_F_C* UStarfallenCarrier_F_C::GetDefaultObj()
{
	static class UStarfallenCarrier_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStarfallenCarrier_F_C*>(UStarfallenCarrier_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


