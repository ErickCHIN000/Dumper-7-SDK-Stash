#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EquipmentMenTransitionScreenshake_Consume.EquipmentMenTransitionScreenshake_Consume_C
// (None)

class UClass* UEquipmentMenTransitionScreenshake_Consume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentMenTransitionScreenshake_Consume_C");

	return Clss;
}


// EquipmentMenTransitionScreenshake_Consume_C EquipmentMenTransitionScreenshake_Consume.Default__EquipmentMenTransitionScreenshake_Consume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquipmentMenTransitionScreenshake_Consume_C* UEquipmentMenTransitionScreenshake_Consume_C::GetDefaultObj()
{
	static class UEquipmentMenTransitionScreenshake_Consume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquipmentMenTransitionScreenshake_Consume_C*>(UEquipmentMenTransitionScreenshake_Consume_C::StaticClass()->DefaultObject);

	return Default;
}

}


