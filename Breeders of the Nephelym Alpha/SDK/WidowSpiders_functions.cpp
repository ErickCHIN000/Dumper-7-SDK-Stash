#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowSpiders.WidowSpiders_C
// (None)

class UClass* UWidowSpiders_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowSpiders_C");

	return Clss;
}


// WidowSpiders_C WidowSpiders.Default__WidowSpiders_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowSpiders_C* UWidowSpiders_C::GetDefaultObj()
{
	static class UWidowSpiders_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowSpiders_C*>(UWidowSpiders_C::StaticClass()->DefaultObject);

	return Default;
}

}


