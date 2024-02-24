#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CanNotCommunicateOnlinePopUp.CanNotCommunicateOnlinePopUp_C
// (Actor)

class UClass* ACanNotCommunicateOnlinePopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CanNotCommunicateOnlinePopUp_C");

	return Clss;
}


// CanNotCommunicateOnlinePopUp_C CanNotCommunicateOnlinePopUp.Default__CanNotCommunicateOnlinePopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACanNotCommunicateOnlinePopUp_C* ACanNotCommunicateOnlinePopUp_C::GetDefaultObj()
{
	static class ACanNotCommunicateOnlinePopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACanNotCommunicateOnlinePopUp_C*>(ACanNotCommunicateOnlinePopUp_C::StaticClass()->DefaultObject);

	return Default;
}

}


