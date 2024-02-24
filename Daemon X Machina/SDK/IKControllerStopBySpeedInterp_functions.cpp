#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IKControllerStopBySpeedInterp.IKControllerStopBySpeedInterp_C
// (None)

class UClass* UIKControllerStopBySpeedInterp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IKControllerStopBySpeedInterp_C");

	return Clss;
}


// IKControllerStopBySpeedInterp_C IKControllerStopBySpeedInterp.Default__IKControllerStopBySpeedInterp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIKControllerStopBySpeedInterp_C* UIKControllerStopBySpeedInterp_C::GetDefaultObj()
{
	static class UIKControllerStopBySpeedInterp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIKControllerStopBySpeedInterp_C*>(UIKControllerStopBySpeedInterp_C::StaticClass()->DefaultObject);

	return Default;
}

}


