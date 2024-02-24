#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraBehavior_DefaultFocusDOF.CameraBehavior_DefaultFocusDOF_C
// (None)

class UClass* UCameraBehavior_DefaultFocusDOF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_DefaultFocusDOF_C");

	return Clss;
}


// CameraBehavior_DefaultFocusDOF_C CameraBehavior_DefaultFocusDOF.Default__CameraBehavior_DefaultFocusDOF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraBehavior_DefaultFocusDOF_C* UCameraBehavior_DefaultFocusDOF_C::GetDefaultObj()
{
	static class UCameraBehavior_DefaultFocusDOF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_DefaultFocusDOF_C*>(UCameraBehavior_DefaultFocusDOF_C::StaticClass()->DefaultObject);

	return Default;
}

}


