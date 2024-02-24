#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowScary.WidowScary_C
// (None)

class UClass* UWidowScary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowScary_C");

	return Clss;
}


// WidowScary_C WidowScary.Default__WidowScary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowScary_C* UWidowScary_C::GetDefaultObj()
{
	static class UWidowScary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowScary_C*>(UWidowScary_C::StaticClass()->DefaultObject);

	return Default;
}

}


