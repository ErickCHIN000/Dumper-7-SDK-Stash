#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Food_Buff.GE_Food_Buff_C
// (None)

class UClass* UGE_Food_Buff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Food_Buff_C");

	return Clss;
}


// GE_Food_Buff_C GE_Food_Buff.Default__GE_Food_Buff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Food_Buff_C* UGE_Food_Buff_C::GetDefaultObj()
{
	static class UGE_Food_Buff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Food_Buff_C*>(UGE_Food_Buff_C::StaticClass()->DefaultObject);

	return Default;
}

}


