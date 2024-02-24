#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SelectableEntryOwnerInterface.SelectableEntryOwnerInterface_C
// (None)

class UClass* ISelectableEntryOwnerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SelectableEntryOwnerInterface_C");

	return Clss;
}


// SelectableEntryOwnerInterface_C SelectableEntryOwnerInterface.Default__SelectableEntryOwnerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISelectableEntryOwnerInterface_C* ISelectableEntryOwnerInterface_C::GetDefaultObj()
{
	static class ISelectableEntryOwnerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISelectableEntryOwnerInterface_C*>(ISelectableEntryOwnerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SelectableEntryOwnerInterface.SelectableEntryOwnerInterface_C.SelectNewEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EntryIndex                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PostSoundEvent                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ISelectableEntryOwnerInterface_C::SelectNewEntry(int32 EntryIndex, bool PostSoundEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SelectableEntryOwnerInterface_C", "SelectNewEntry");

	Params::ISelectableEntryOwnerInterface_C_SelectNewEntry_Params Parms{};

	Parms.EntryIndex = EntryIndex;
	Parms.PostSoundEvent = PostSoundEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


