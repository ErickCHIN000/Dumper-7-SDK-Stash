#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DamageSource_Slide.DamageSource_Slide_C
// (None)

class UClass* UDamageSource_Slide_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DamageSource_Slide_C");

	return Clss;
}


// DamageSource_Slide_C DamageSource_Slide.Default__DamageSource_Slide_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDamageSource_Slide_C* UDamageSource_Slide_C::GetDefaultObj()
{
	static class UDamageSource_Slide_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDamageSource_Slide_C*>(UDamageSource_Slide_C::StaticClass()->DefaultObject);

	return Default;
}

}


