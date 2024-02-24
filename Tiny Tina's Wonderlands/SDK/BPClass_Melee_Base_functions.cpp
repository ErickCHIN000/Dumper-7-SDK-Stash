#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPClass_Melee_Base.BPClass_Melee_Base_C
// (Actor)

class UClass* ABPClass_Melee_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPClass_Melee_Base_C");

	return Clss;
}


// BPClass_Melee_Base_C BPClass_Melee_Base.Default__BPClass_Melee_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPClass_Melee_Base_C* ABPClass_Melee_Base_C::GetDefaultObj()
{
	static class ABPClass_Melee_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPClass_Melee_Base_C*>(ABPClass_Melee_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPClass_Melee_Base.BPClass_Melee_Base_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPClass_Melee_Base_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPClass_Melee_Base_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


