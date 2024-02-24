#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyGliding.GE_ApplyGliding_C
// (None)

class UClass* UGE_ApplyGliding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyGliding_C");

	return Clss;
}


// GE_ApplyGliding_C GE_ApplyGliding.Default__GE_ApplyGliding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyGliding_C* UGE_ApplyGliding_C::GetDefaultObj()
{
	static class UGE_ApplyGliding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyGliding_C*>(UGE_ApplyGliding_C::StaticClass()->DefaultObject);

	return Default;
}

}


