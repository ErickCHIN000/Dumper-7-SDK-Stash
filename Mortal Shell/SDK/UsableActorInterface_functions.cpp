#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UsableActorInterface.UsableActorInterface_C
// (None)

class UClass* IUsableActorInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UsableActorInterface_C");

	return Clss;
}


// UsableActorInterface_C UsableActorInterface.Default__UsableActorInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IUsableActorInterface_C* IUsableActorInterface_C::GetDefaultObj()
{
	static class IUsableActorInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IUsableActorInterface_C*>(IUsableActorInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UsableActorInterface.UsableActorInterface_C.GetInteractionWidgetLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WidgetLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUsableActorInterface_C::GetInteractionWidgetLocation(struct FVector* WidgetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "GetInteractionWidgetLocation");

	Params::IUsableActorInterface_C_GetInteractionWidgetLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (WidgetLocation != nullptr)
		*WidgetLocation = std::move(Parms.WidgetLocation);

}


// Function UsableActorInterface.UsableActorInterface_C.GetUnidentifiedText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        UnidentifiedText                                                 (Parm, OutParm)

void IUsableActorInterface_C::GetUnidentifiedText(class FText* UnidentifiedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "GetUnidentifiedText");

	Params::IUsableActorInterface_C_GetUnidentifiedText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (UnidentifiedText != nullptr)
		*UnidentifiedText = Parms.UnidentifiedText;

}


// Function UsableActorInterface.UsableActorInterface_C.GetID
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IUsableActorInterface_C::GetID(class FName* ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "GetID");

	Params::IUsableActorInterface_C_GetID_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ID != nullptr)
		*ID = Parms.ID;

}


// Function UsableActorInterface.UsableActorInterface_C.GetUseActionText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (Parm, OutParm)

void IUsableActorInterface_C::GetUseActionText(class FText* ActionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "GetUseActionText");

	Params::IUsableActorInterface_C_GetUseActionText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ActionText != nullptr)
		*ActionText = Parms.ActionText;

}


// Function UsableActorInterface.UsableActorInterface_C.GetIsActorUsable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsUsable                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUsableActorInterface_C::GetIsActorUsable(bool* IsUsable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "GetIsActorUsable");

	Params::IUsableActorInterface_C_GetIsActorUsable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUsable != nullptr)
		*IsUsable = Parms.IsUsable;

}


// Function UsableActorInterface.UsableActorInterface_C.EndOutlineFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUsableActorInterface_C::EndOutlineFocus(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "EndOutlineFocus");

	Params::IUsableActorInterface_C_EndOutlineFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UsableActorInterface.UsableActorInterface_C.BeginOutlineFocus
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUsableActorInterface_C::BeginOutlineFocus(bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "BeginOutlineFocus");

	Params::IUsableActorInterface_C_BeginOutlineFocus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UsableActorInterface.UsableActorInterface_C.OnActorUsed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IUsableActorInterface_C::OnActorUsed(class APlayerController* Controller, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UsableActorInterface_C", "OnActorUsed");

	Params::IUsableActorInterface_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}

}


