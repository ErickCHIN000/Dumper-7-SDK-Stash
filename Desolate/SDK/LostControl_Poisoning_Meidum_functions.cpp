#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LostControl_Poisoning_Meidum.LostControl_Poisoning_Meidum_C
// (Actor)

class UClass* ALostControl_Poisoning_Meidum_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LostControl_Poisoning_Meidum_C");

	return Clss;
}


// LostControl_Poisoning_Meidum_C LostControl_Poisoning_Meidum.Default__LostControl_Poisoning_Meidum_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALostControl_Poisoning_Meidum_C* ALostControl_Poisoning_Meidum_C::GetDefaultObj()
{
	static class ALostControl_Poisoning_Meidum_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALostControl_Poisoning_Meidum_C*>(ALostControl_Poisoning_Meidum_C::StaticClass()->DefaultObject);

	return Default;
}

}


