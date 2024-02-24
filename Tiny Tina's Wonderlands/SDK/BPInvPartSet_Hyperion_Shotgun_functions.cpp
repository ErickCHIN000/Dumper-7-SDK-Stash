#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPartSet_Hyperion_Shotgun.BPInvPartSet_Hyperion_Shotgun_C
// (None)

class UClass* UBPInvPartSet_Hyperion_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPartSet_Hyperion_Shotgun_C");

	return Clss;
}


// BPInvPartSet_Hyperion_Shotgun_C BPInvPartSet_Hyperion_Shotgun.Default__BPInvPartSet_Hyperion_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPartSet_Hyperion_Shotgun_C* UBPInvPartSet_Hyperion_Shotgun_C::GetDefaultObj()
{
	static class UBPInvPartSet_Hyperion_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPartSet_Hyperion_Shotgun_C*>(UBPInvPartSet_Hyperion_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


