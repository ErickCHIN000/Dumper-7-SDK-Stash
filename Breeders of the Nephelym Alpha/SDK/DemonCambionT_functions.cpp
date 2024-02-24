#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonCambionT.DemonCambionT_C
// (None)

class UClass* UDemonCambionT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonCambionT_C");

	return Clss;
}


// DemonCambionT_C DemonCambionT.Default__DemonCambionT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemonCambionT_C* UDemonCambionT_C::GetDefaultObj()
{
	static class UDemonCambionT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemonCambionT_C*>(UDemonCambionT_C::StaticClass()->DefaultObject);

	return Default;
}

}


