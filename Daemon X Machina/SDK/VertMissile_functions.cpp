#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VertMissile.VertMissile_C
// (Actor)

class UClass* AVertMissile_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VertMissile_C");

	return Clss;
}


// VertMissile_C VertMissile.Default__VertMissile_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVertMissile_C* AVertMissile_C::GetDefaultObj()
{
	static class AVertMissile_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVertMissile_C*>(AVertMissile_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VertMissile.VertMissile_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AVertMissile_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VertMissile_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


