#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Overlay_AnimB_Unarmed.Overlay_AnimB_Unarmed_C
// (None)

class UClass* UOverlay_AnimB_Unarmed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Overlay_AnimB_Unarmed_C");

	return Clss;
}


// Overlay_AnimB_Unarmed_C Overlay_AnimB_Unarmed.Default__Overlay_AnimB_Unarmed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOverlay_AnimB_Unarmed_C* UOverlay_AnimB_Unarmed_C::GetDefaultObj()
{
	static class UOverlay_AnimB_Unarmed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOverlay_AnimB_Unarmed_C*>(UOverlay_AnimB_Unarmed_C::StaticClass()->DefaultObject);

	return Default;
}

}


