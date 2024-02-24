#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SelectableEntryInterace.SelectableEntryInterace_C
// (None)

class UClass* ISelectableEntryInterace_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectableEntryInterace_C");

	return Clss;
}


// SelectableEntryInterace_C SelectableEntryInterace.Default__SelectableEntryInterace_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISelectableEntryInterace_C* ISelectableEntryInterace_C::GetDefaultObj()
{
	static class ISelectableEntryInterace_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISelectableEntryInterace_C*>(ISelectableEntryInterace_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SelectableEntryInterace.SelectableEntryInterace_C.DecrementValueReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISelectableEntryInterace_C::DecrementValueReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "DecrementValueReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.IncrementValueRelesed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISelectableEntryInterace_C::IncrementValueRelesed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "IncrementValueRelesed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.DecrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISelectableEntryInterace_C::DecrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "DecrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.IncrementValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISelectableEntryInterace_C::IncrementValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "IncrementValue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.SetEntryIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ISelectableEntryInterace_C::SetEntryIndex(int32 EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "SetEntryIndex");

	Params::ISelectableEntryInterace_C_SetEntryIndex_Params Parms{};

	Parms.EntryIndex = EntryIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.GetEntryIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ISelectableEntryInterace_C::GetEntryIndex(int32* EntryIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "GetEntryIndex");

	Params::ISelectableEntryInterace_C_GetEntryIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (EntryIndex != nullptr)
		*EntryIndex = Parms.EntryIndex;

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.SetSelectableEntryOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ISelectableEntryOwnerInterface_C>Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ISelectableEntryInterace_C::SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "SetSelectableEntryOwner");

	Params::ISelectableEntryInterace_C_SetSelectableEntryOwner_Params Parms{};

	Parms.Owner = Owner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SelectableEntryInterace.SelectableEntryInterace_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ISelectableEntryInterace_C::Select(bool IsSelected, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryInterace_C", "Select");

	Params::ISelectableEntryInterace_C_Select_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


