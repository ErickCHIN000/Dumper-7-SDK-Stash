#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ControlledMoved_GunMage_PolymorphEnd_Flying.ControlledMoved_GunMage_PolymorphEnd_Flying_C
// (None)

class UClass* UControlledMoved_GunMage_PolymorphEnd_Flying_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControlledMoved_GunMage_PolymorphEnd_Flying_C");

	return Clss;
}


// ControlledMoved_GunMage_PolymorphEnd_Flying_C ControlledMoved_GunMage_PolymorphEnd_Flying.Default__ControlledMoved_GunMage_PolymorphEnd_Flying_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControlledMoved_GunMage_PolymorphEnd_Flying_C* UControlledMoved_GunMage_PolymorphEnd_Flying_C::GetDefaultObj()
{
	static class UControlledMoved_GunMage_PolymorphEnd_Flying_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControlledMoved_GunMage_PolymorphEnd_Flying_C*>(UControlledMoved_GunMage_PolymorphEnd_Flying_C::StaticClass()->DefaultObject);

	return Default;
}

}


