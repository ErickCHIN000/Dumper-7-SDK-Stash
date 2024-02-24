#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPInvPart_Tediore_Pistol.BPInvPart_Tediore_Pistol_C
// (None)

class UClass* UBPInvPart_Tediore_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPInvPart_Tediore_Pistol_C");

	return Clss;
}


// BPInvPart_Tediore_Pistol_C BPInvPart_Tediore_Pistol.Default__BPInvPart_Tediore_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPInvPart_Tediore_Pistol_C* UBPInvPart_Tediore_Pistol_C::GetDefaultObj()
{
	static class UBPInvPart_Tediore_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPInvPart_Tediore_Pistol_C*>(UBPInvPart_Tediore_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


