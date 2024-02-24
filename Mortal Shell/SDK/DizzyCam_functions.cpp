#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DizzyCam.DizzyCam_C
// (None)

class UClass* UDizzyCam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DizzyCam_C");

	return Clss;
}


// DizzyCam_C DizzyCam.Default__DizzyCam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDizzyCam_C* UDizzyCam_C::GetDefaultObj()
{
	static class UDizzyCam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDizzyCam_C*>(UDizzyCam_C::StaticClass()->DefaultObject);

	return Default;
}

}


