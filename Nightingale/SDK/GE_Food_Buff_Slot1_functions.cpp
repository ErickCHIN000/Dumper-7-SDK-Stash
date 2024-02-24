#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Food_Buff_Slot1.GE_Food_Buff_Slot1_C
// (None)

class UClass* UGE_Food_Buff_Slot1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Food_Buff_Slot1_C");

	return Clss;
}


// GE_Food_Buff_Slot1_C GE_Food_Buff_Slot1.Default__GE_Food_Buff_Slot1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Food_Buff_Slot1_C* UGE_Food_Buff_Slot1_C::GetDefaultObj()
{
	static class UGE_Food_Buff_Slot1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Food_Buff_Slot1_C*>(UGE_Food_Buff_Slot1_C::StaticClass()->DefaultObject);

	return Default;
}

}


