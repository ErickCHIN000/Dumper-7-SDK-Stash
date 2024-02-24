#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterRagdollInterface.CharacterRagdollInterface_C
// (None)

class UClass* ICharacterRagdollInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterRagdollInterface_C");

	return Clss;
}


// CharacterRagdollInterface_C CharacterRagdollInterface.Default__CharacterRagdollInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICharacterRagdollInterface_C* ICharacterRagdollInterface_C::GetDefaultObj()
{
	static class ICharacterRagdollInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICharacterRagdollInterface_C*>(ICharacterRagdollInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterRagdollInterface.CharacterRagdollInterface_C.EndNullState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterRagdollInterface_C::EndNullState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterRagdollInterface_C", "EndNullState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterRagdollInterface.CharacterRagdollInterface_C.BeginNullState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterRagdollInterface_C::BeginNullState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterRagdollInterface_C", "BeginNullState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterRagdollInterface.CharacterRagdollInterface_C.ReviveMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterRagdollInterface_C::ReviveMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterRagdollInterface_C", "ReviveMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterRagdollInterface.CharacterRagdollInterface_C.StopMesh
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICharacterRagdollInterface_C::StopMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterRagdollInterface_C", "StopMesh");



	UObject::ProcessEvent(Func, nullptr);

}

}


