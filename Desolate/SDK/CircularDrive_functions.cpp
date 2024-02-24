#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CircularDrive.CircularDrive_C
// (Actor)

class UClass* ACircularDrive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CircularDrive_C");

	return Clss;
}


// CircularDrive_C CircularDrive.Default__CircularDrive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACircularDrive_C* ACircularDrive_C::GetDefaultObj()
{
	static class ACircularDrive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACircularDrive_C*>(ACircularDrive_C::StaticClass()->DefaultObject);

	return Default;
}

}


