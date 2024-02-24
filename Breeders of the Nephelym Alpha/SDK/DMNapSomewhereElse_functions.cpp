#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DMNapSomewhereElse.DMNapSomewhereElse_C
// (None)

class UClass* UDMNapSomewhereElse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DMNapSomewhereElse_C");

	return Clss;
}


// DMNapSomewhereElse_C DMNapSomewhereElse.Default__DMNapSomewhereElse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDMNapSomewhereElse_C* UDMNapSomewhereElse_C::GetDefaultObj()
{
	static class UDMNapSomewhereElse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDMNapSomewhereElse_C*>(UDMNapSomewhereElse_C::StaticClass()->DefaultObject);

	return Default;
}

}


