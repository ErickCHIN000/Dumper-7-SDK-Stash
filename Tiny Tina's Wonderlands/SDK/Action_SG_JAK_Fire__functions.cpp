#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_SG_JAK_Fire_.Action_SG_JAK_Fire__C
// (None)

class UClass* UAction_SG_JAK_Fire__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_SG_JAK_Fire__C");

	return Clss;
}


// Action_SG_JAK_Fire__C Action_SG_JAK_Fire_.Default__Action_SG_JAK_Fire__C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_SG_JAK_Fire__C* UAction_SG_JAK_Fire__C::GetDefaultObj()
{
	static class UAction_SG_JAK_Fire__C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_SG_JAK_Fire__C*>(UAction_SG_JAK_Fire__C::StaticClass()->DefaultObject);

	return Default;
}

}


