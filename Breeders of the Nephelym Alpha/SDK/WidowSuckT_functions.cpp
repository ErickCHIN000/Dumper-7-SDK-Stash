#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowSuckT.WidowSuckT_C
// (None)

class UClass* UWidowSuckT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowSuckT_C");

	return Clss;
}


// WidowSuckT_C WidowSuckT.Default__WidowSuckT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowSuckT_C* UWidowSuckT_C::GetDefaultObj()
{
	static class UWidowSuckT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowSuckT_C*>(UWidowSuckT_C::StaticClass()->DefaultObject);

	return Default;
}

}


