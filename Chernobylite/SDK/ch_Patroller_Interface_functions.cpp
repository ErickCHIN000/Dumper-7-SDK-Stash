#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ch_Patroller_Interface.ch_Patroller_Interface_C
// (None)

class UClass* ICh_Patroller_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ch_Patroller_Interface_C");

	return Clss;
}


// ch_Patroller_Interface_C ch_Patroller_Interface.Default__ch_Patroller_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICh_Patroller_Interface_C* ICh_Patroller_Interface_C::GetDefaultObj()
{
	static class ICh_Patroller_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICh_Patroller_Interface_C*>(ICh_Patroller_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.SetHasSeenPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICh_Patroller_Interface_C::SetHasSeenPlayer(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "SetHasSeenPlayer");

	Params::ICh_Patroller_Interface_C_SetHasSeenPlayer_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.SetHasFoughtPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICh_Patroller_Interface_C::SetHasFoughtPlayer(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "SetHasFoughtPlayer");

	Params::ICh_Patroller_Interface_C_SetHasFoughtPlayer_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetHasFoughtPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICh_Patroller_Interface_C::GetHasFoughtPlayer(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "GetHasFoughtPlayer");

	Params::ICh_Patroller_Interface_C_GetHasFoughtPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetHasSeenPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICh_Patroller_Interface_C::GetHasSeenPlayer(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "GetHasSeenPlayer");

	Params::ICh_Patroller_Interface_C_GetHasSeenPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetIndicatorPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             IndicatorPosition                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICh_Patroller_Interface_C::GetIndicatorPosition(class USceneComponent** IndicatorPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "GetIndicatorPosition");

	Params::ICh_Patroller_Interface_C_GetIndicatorPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorPosition != nullptr)
		*IndicatorPosition = Parms.IndicatorPosition;

}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetMapTag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class Abp_MinimapTag_C*            MapTag                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICh_Patroller_Interface_C::GetMapTag(class Abp_MinimapTag_C** MapTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "GetMapTag");

	Params::ICh_Patroller_Interface_C_GetMapTag_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MapTag != nullptr)
		*MapTag = Parms.MapTag;

}


// Function ch_Patroller_Interface.ch_Patroller_Interface_C.GetDialogueComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDialogueComponent*          DialogueComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICh_Patroller_Interface_C::GetDialogueComponent(class UDialogueComponent** DialogueComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ch_Patroller_Interface_C", "GetDialogueComponent");

	Params::ICh_Patroller_Interface_C_GetDialogueComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DialogueComponent != nullptr)
		*DialogueComponent = Parms.DialogueComponent;

}

}


