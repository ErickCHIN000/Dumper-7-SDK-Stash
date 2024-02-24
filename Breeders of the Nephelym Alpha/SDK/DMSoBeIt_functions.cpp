#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMSoBeIt.DMSoBeIt_C
// (None)

class UClass* UDMSoBeIt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMSoBeIt_C");

	return Clss;
}


// DMSoBeIt_C DMSoBeIt.Default__DMSoBeIt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMSoBeIt_C* UDMSoBeIt_C::GetDefaultObj()
{
	static class UDMSoBeIt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMSoBeIt_C*>(UDMSoBeIt_C::StaticClass()->DefaultObject);

	return Default;
}

}


