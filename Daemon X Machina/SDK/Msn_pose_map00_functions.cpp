#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_pose_map00.Msn_pose_map00_C
// (None)

class UClass* UMsn_pose_map00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_pose_map00_C");

	return Clss;
}


// Msn_pose_map00_C Msn_pose_map00.Default__Msn_pose_map00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_pose_map00_C* UMsn_pose_map00_C::GetDefaultObj()
{
	static class UMsn_pose_map00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_pose_map00_C*>(UMsn_pose_map00_C::StaticClass()->DefaultObject);

	return Default;
}

}


