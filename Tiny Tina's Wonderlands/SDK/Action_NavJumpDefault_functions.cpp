#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_NavJumpDefault.Action_NavJumpDefault_C
// (None)

class UClass* UAction_NavJumpDefault_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_NavJumpDefault_C");

	return Clss;
}


// Action_NavJumpDefault_C Action_NavJumpDefault.Default__Action_NavJumpDefault_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_NavJumpDefault_C* UAction_NavJumpDefault_C::GetDefaultObj()
{
	static class UAction_NavJumpDefault_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_NavJumpDefault_C*>(UAction_NavJumpDefault_C::StaticClass()->DefaultObject);

	return Default;
}

}


