#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Hyperion_Shotgun.BPInvPart_Hyperion_Shotgun_C
// (None)

class UClass* UBPInvPart_Hyperion_Shotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Hyperion_Shotgun_C");

	return Clss;
}


// BPInvPart_Hyperion_Shotgun_C BPInvPart_Hyperion_Shotgun.Default__BPInvPart_Hyperion_Shotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Hyperion_Shotgun_C* UBPInvPart_Hyperion_Shotgun_C::GetDefaultObj()
{
	static class UBPInvPart_Hyperion_Shotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Hyperion_Shotgun_C*>(UBPInvPart_Hyperion_Shotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


