#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AN_Footstep_Stomp_Heavy.AN_Footstep_Stomp_Heavy_C
// (None)

class UClass* UAN_Footstep_Stomp_Heavy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AN_Footstep_Stomp_Heavy_C");

	return Clss;
}


// AN_Footstep_Stomp_Heavy_C AN_Footstep_Stomp_Heavy.Default__AN_Footstep_Stomp_Heavy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAN_Footstep_Stomp_Heavy_C* UAN_Footstep_Stomp_Heavy_C::GetDefaultObj()
{
	static class UAN_Footstep_Stomp_Heavy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAN_Footstep_Stomp_Heavy_C*>(UAN_Footstep_Stomp_Heavy_C::StaticClass()->DefaultObject);

	return Default;
}

}


