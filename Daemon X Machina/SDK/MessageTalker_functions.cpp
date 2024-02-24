#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MessageTalker.MessageTalker_C
// (Actor)

class UClass* AMessageTalker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MessageTalker_C");

	return Clss;
}


// MessageTalker_C MessageTalker.Default__MessageTalker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMessageTalker_C* AMessageTalker_C::GetDefaultObj()
{
	static class AMessageTalker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMessageTalker_C*>(AMessageTalker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MessageTalker.MessageTalker_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AMessageTalker_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MessageTalker_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


