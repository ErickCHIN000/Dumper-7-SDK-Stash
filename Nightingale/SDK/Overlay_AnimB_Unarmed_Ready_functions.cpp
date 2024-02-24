#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Overlay_AnimB_Unarmed_Ready.Overlay_AnimB_Unarmed_Ready_C
// (None)

class UClass* UOverlay_AnimB_Unarmed_Ready_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Overlay_AnimB_Unarmed_Ready_C");

	return Clss;
}


// Overlay_AnimB_Unarmed_Ready_C Overlay_AnimB_Unarmed_Ready.Default__Overlay_AnimB_Unarmed_Ready_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOverlay_AnimB_Unarmed_Ready_C* UOverlay_AnimB_Unarmed_Ready_C::GetDefaultObj()
{
	static class UOverlay_AnimB_Unarmed_Ready_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlay_AnimB_Unarmed_Ready_C*>(UOverlay_AnimB_Unarmed_Ready_C::StaticClass()->DefaultObject);

	return Default;
}

}


