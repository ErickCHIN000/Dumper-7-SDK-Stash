#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_pose_map02.Msn_pose_map02_C
// (None)

class UClass* UMsn_pose_map02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_pose_map02_C");

	return Clss;
}


// Msn_pose_map02_C Msn_pose_map02.Default__Msn_pose_map02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_pose_map02_C* UMsn_pose_map02_C::GetDefaultObj()
{
	static class UMsn_pose_map02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_pose_map02_C*>(UMsn_pose_map02_C::StaticClass()->DefaultObject);

	return Default;
}

}


