#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ballistazooka_Reload_BoltSlam.Ballistazooka_Reload_BoltSlam_C
// (None)

class UClass* UBallistazooka_Reload_BoltSlam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ballistazooka_Reload_BoltSlam_C");

	return Clss;
}


// Ballistazooka_Reload_BoltSlam_C Ballistazooka_Reload_BoltSlam.Default__Ballistazooka_Reload_BoltSlam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBallistazooka_Reload_BoltSlam_C* UBallistazooka_Reload_BoltSlam_C::GetDefaultObj()
{
	static class UBallistazooka_Reload_BoltSlam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBallistazooka_Reload_BoltSlam_C*>(UBallistazooka_Reload_BoltSlam_C::StaticClass()->DefaultObject);

	return Default;
}

}


