#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Favour_DamageBuff.GE_Favour_DamageBuff_C
// (None)

class UClass* UGE_Favour_DamageBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Favour_DamageBuff_C");

	return Clss;
}


// GE_Favour_DamageBuff_C GE_Favour_DamageBuff.Default__GE_Favour_DamageBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Favour_DamageBuff_C* UGE_Favour_DamageBuff_C::GetDefaultObj()
{
	static class UGE_Favour_DamageBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Favour_DamageBuff_C*>(UGE_Favour_DamageBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


