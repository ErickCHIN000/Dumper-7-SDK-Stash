#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LoadingScreenInterface.LoadingScreenInterface_C
// (None)

class UClass* ILoadingScreenInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LoadingScreenInterface_C");

	return Clss;
}


// LoadingScreenInterface_C LoadingScreenInterface.Default__LoadingScreenInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ILoadingScreenInterface_C* ILoadingScreenInterface_C::GetDefaultObj()
{
	static class ILoadingScreenInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ILoadingScreenInterface_C*>(ILoadingScreenInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_ShouldLoadItemFromSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Load_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ILoadingScreenInterface_C::LoadingScreen_ShouldLoadItemFromSave(bool Load_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenInterface_C", "LoadingScreen_ShouldLoadItemFromSave");

	Params::ILoadingScreenInterface_C_LoadingScreen_ShouldLoadItemFromSave_Params Parms{};

	Parms.Load_ = Load_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_FastTravelCurrentLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ILoadingScreenInterface_C::LoadingScreen_FastTravelCurrentLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenInterface_C", "LoadingScreen_FastTravelCurrentLevel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_OnBeginPlay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ILoadingScreenInterface_C::LoadingScreen_OnBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenInterface_C", "LoadingScreen_OnBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_HandleLevelChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Set_Travel_Destination                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Travel_Destination                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Map_To_Load                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ILoadingScreenInterface_C::LoadingScreen_HandleLevelChange(bool Set_Travel_Destination, class FName Travel_Destination, class FName Map_To_Load)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenInterface_C", "LoadingScreen_HandleLevelChange");

	Params::ILoadingScreenInterface_C_LoadingScreen_HandleLevelChange_Params Parms{};

	Parms.Set_Travel_Destination = Set_Travel_Destination;
	Parms.Travel_Destination = Travel_Destination;
	Parms.Map_To_Load = Map_To_Load;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_FadeOutAndDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ILoadingScreenInterface_C::LoadingScreen_FadeOutAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenInterface_C", "LoadingScreen_FadeOutAndDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LoadingScreenInterface.LoadingScreenInterface_C.LoadingScreen_FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ILoadingScreenInterface_C::LoadingScreen_FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadingScreenInterface_C", "LoadingScreen_FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}

}


