#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_SG_JAK_ReignOfArrows.BPWeap_SG_JAK_ReignOfArrows_C
// (Actor)

class UClass* ABPWeap_SG_JAK_ReignOfArrows_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_SG_JAK_ReignOfArrows_C");

	return Clss;
}


// BPWeap_SG_JAK_ReignOfArrows_C BPWeap_SG_JAK_ReignOfArrows.Default__BPWeap_SG_JAK_ReignOfArrows_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_SG_JAK_ReignOfArrows_C* ABPWeap_SG_JAK_ReignOfArrows_C::GetDefaultObj()
{
	static class ABPWeap_SG_JAK_ReignOfArrows_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_SG_JAK_ReignOfArrows_C*>(ABPWeap_SG_JAK_ReignOfArrows_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_SG_JAK_ReignOfArrows.BPWeap_SG_JAK_ReignOfArrows_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_SG_JAK_ReignOfArrows_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_SG_JAK_ReignOfArrows_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


