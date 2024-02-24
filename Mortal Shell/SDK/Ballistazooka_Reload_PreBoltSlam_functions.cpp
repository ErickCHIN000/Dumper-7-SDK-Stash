#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ballistazooka_Reload_PreBoltSlam.Ballistazooka_Reload_PreBoltSlam_C
// (None)

class UClass* UBallistazooka_Reload_PreBoltSlam_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ballistazooka_Reload_PreBoltSlam_C");

	return Clss;
}


// Ballistazooka_Reload_PreBoltSlam_C Ballistazooka_Reload_PreBoltSlam.Default__Ballistazooka_Reload_PreBoltSlam_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBallistazooka_Reload_PreBoltSlam_C* UBallistazooka_Reload_PreBoltSlam_C::GetDefaultObj()
{
	static class UBallistazooka_Reload_PreBoltSlam_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBallistazooka_Reload_PreBoltSlam_C*>(UBallistazooka_Reload_PreBoltSlam_C::StaticClass()->DefaultObject);

	return Default;
}

}


