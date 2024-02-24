#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WidowSuckF.WidowSuckF_C
// (None)

class UClass* UWidowSuckF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WidowSuckF_C");

	return Clss;
}


// WidowSuckF_C WidowSuckF.Default__WidowSuckF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWidowSuckF_C* UWidowSuckF_C::GetDefaultObj()
{
	static class UWidowSuckF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWidowSuckF_C*>(UWidowSuckF_C::StaticClass()->DefaultObject);

	return Default;
}

}


