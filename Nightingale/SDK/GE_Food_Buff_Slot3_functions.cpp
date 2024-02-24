#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Food_Buff_Slot3.GE_Food_Buff_Slot3_C
// (None)

class UClass* UGE_Food_Buff_Slot3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Food_Buff_Slot3_C");

	return Clss;
}


// GE_Food_Buff_Slot3_C GE_Food_Buff_Slot3.Default__GE_Food_Buff_Slot3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Food_Buff_Slot3_C* UGE_Food_Buff_Slot3_C::GetDefaultObj()
{
	static class UGE_Food_Buff_Slot3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Food_Buff_Slot3_C*>(UGE_Food_Buff_Slot3_C::StaticClass()->DefaultObject);

	return Default;
}

}


