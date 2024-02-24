#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Favour_LowGravJump.GE_Favour_LowGravJump_C
// (None)

class UClass* UGE_Favour_LowGravJump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Favour_LowGravJump_C");

	return Clss;
}


// GE_Favour_LowGravJump_C GE_Favour_LowGravJump.Default__GE_Favour_LowGravJump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Favour_LowGravJump_C* UGE_Favour_LowGravJump_C::GetDefaultObj()
{
	static class UGE_Favour_LowGravJump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Favour_LowGravJump_C*>(UGE_Favour_LowGravJump_C::StaticClass()->DefaultObject);

	return Default;
}

}


