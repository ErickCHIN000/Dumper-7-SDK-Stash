#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPCont_AI.BPCont_AI_C
// (Actor)

class UClass* ABPCont_AI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPCont_AI_C");

	return Clss;
}


// BPCont_AI_C BPCont_AI.Default__BPCont_AI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPCont_AI_C* ABPCont_AI_C::GetDefaultObj()
{
	static class ABPCont_AI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPCont_AI_C*>(ABPCont_AI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPCont_AI.BPCont_AI_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPCont_AI_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPCont_AI_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


