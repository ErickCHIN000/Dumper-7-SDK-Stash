#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass YasminePearls.YasminePearls_C
// (None)

class UClass* UYasminePearls_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("YasminePearls_C");

	return Clss;
}


// YasminePearls_C YasminePearls.Default__YasminePearls_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UYasminePearls_C* UYasminePearls_C::GetDefaultObj()
{
	static class UYasminePearls_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UYasminePearls_C*>(UYasminePearls_C::StaticClass()->DefaultObject);

	return Default;
}

}


