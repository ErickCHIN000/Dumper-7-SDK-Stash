#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Audio_NotifyState_Base.Audio_NotifyState_Base_C
// (None)

class UClass* UAudio_NotifyState_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Audio_NotifyState_Base_C");

	return Clss;
}


// Audio_NotifyState_Base_C Audio_NotifyState_Base.Default__Audio_NotifyState_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAudio_NotifyState_Base_C* UAudio_NotifyState_Base_C::GetDefaultObj()
{
	static class UAudio_NotifyState_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudio_NotifyState_Base_C*>(UAudio_NotifyState_Base_C::StaticClass()->DefaultObject);

	return Default;
}

}


