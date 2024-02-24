#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpawnerInterface.SpawnerInterface_C
// (None)

class UClass* ISpawnerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpawnerInterface_C");

	return Clss;
}


// SpawnerInterface_C SpawnerInterface.Default__SpawnerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISpawnerInterface_C* ISpawnerInterface_C::GetDefaultObj()
{
	static class ISpawnerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISpawnerInterface_C*>(ISpawnerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpawnerInterface.SpawnerInterface_C.Spawner_DeAggroEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISpawnerInterface_C::Spawner_DeAggroEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerInterface_C", "Spawner_DeAggroEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnerInterface.SpawnerInterface_C.Spawner_ReEnableEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISpawnerInterface_C::Spawner_ReEnableEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerInterface_C", "Spawner_ReEnableEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpawnerInterface.SpawnerInterface_C.SetEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ISpawnerInterface_C::SetEnabled(bool Enable_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpawnerInterface_C", "SetEnabled");

	Params::ISpawnerInterface_C_SetEnabled_Params Parms{};

	Parms.Enable_ = Enable_;

	UObject::ProcessEvent(Func, &Parms);

}

}


