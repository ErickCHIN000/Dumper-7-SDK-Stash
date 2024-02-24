#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowDefault01.WidowDefault01_C
// (None)

class UClass* UWidowDefault01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowDefault01_C");

	return Clss;
}


// WidowDefault01_C WidowDefault01.Default__WidowDefault01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowDefault01_C* UWidowDefault01_C::GetDefaultObj()
{
	static class UWidowDefault01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowDefault01_C*>(UWidowDefault01_C::StaticClass()->DefaultObject);

	return Default;
}

}


