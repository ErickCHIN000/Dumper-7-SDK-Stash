#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DeathScreen_List.wid_DeathScreen_List_C
// (None)

class UClass* UWid_DeathScreen_List_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DeathScreen_List_C");

	return Clss;
}


// wid_DeathScreen_List_C wid_DeathScreen_List.Default__wid_DeathScreen_List_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DeathScreen_List_C* UWid_DeathScreen_List_C::GetDefaultObj()
{
	static class UWid_DeathScreen_List_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DeathScreen_List_C*>(UWid_DeathScreen_List_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DeathScreen_List.wid_DeathScreen_List_C.AddEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DeathScreen_ListEntry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DeathScreen_List_C::AddEntry(class FName ItemName, float Count, class UWid_DeathScreen_ListEntry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DeathScreen_List_C", "AddEntry");

	Params::UWid_DeathScreen_List_C_AddEntry_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.Count = Count;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


