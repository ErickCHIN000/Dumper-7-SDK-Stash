#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DemonCambionF.DemonCambionF_C
// (None)

class UClass* UDemonCambionF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DemonCambionF_C");

	return Clss;
}


// DemonCambionF_C DemonCambionF.Default__DemonCambionF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDemonCambionF_C* UDemonCambionF_C::GetDefaultObj()
{
	static class UDemonCambionF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDemonCambionF_C*>(UDemonCambionF_C::StaticClass()->DefaultObject);

	return Default;
}

}


