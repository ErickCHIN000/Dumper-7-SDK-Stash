#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Wiskey.Wiskey_C
// (Actor)

class UClass* AWiskey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wiskey_C");

	return Clss;
}


// Wiskey_C Wiskey.Default__Wiskey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWiskey_C* AWiskey_C::GetDefaultObj()
{
	static class AWiskey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWiskey_C*>(AWiskey_C::StaticClass()->DefaultObject);

	return Default;
}

}


