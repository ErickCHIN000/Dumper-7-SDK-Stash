#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButcherHeart.ButcherHeart_C
// (Actor)

class UClass* AButcherHeart_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButcherHeart_C");

	return Clss;
}


// ButcherHeart_C ButcherHeart.Default__ButcherHeart_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcherHeart_C* AButcherHeart_C::GetDefaultObj()
{
	static class AButcherHeart_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcherHeart_C*>(AButcherHeart_C::StaticClass()->DefaultObject);

	return Default;
}

}


