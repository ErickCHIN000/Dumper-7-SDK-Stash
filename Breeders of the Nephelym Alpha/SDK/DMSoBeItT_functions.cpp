#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMSoBeItT.DMSoBeItT_C
// (None)

class UClass* UDMSoBeItT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMSoBeItT_C");

	return Clss;
}


// DMSoBeItT_C DMSoBeItT.Default__DMSoBeItT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMSoBeItT_C* UDMSoBeItT_C::GetDefaultObj()
{
	static class UDMSoBeItT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMSoBeItT_C*>(UDMSoBeItT_C::StaticClass()->DefaultObject);

	return Default;
}

}


