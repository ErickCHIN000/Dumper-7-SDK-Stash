#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C
// (None)

class UClass* UWid_RoomSkillTreeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_RoomSkillTreeButton_C");

	return Clss;
}


// wid_RoomSkillTreeButton_C wid_RoomSkillTreeButton.Default__wid_RoomSkillTreeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_RoomSkillTreeButton_C* UWid_RoomSkillTreeButton_C::GetDefaultObj()
{
	static class UWid_RoomSkillTreeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_RoomSkillTreeButton_C*>(UWid_RoomSkillTreeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeButton_C::SetSelected(bool NewSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeButton_C", "SetSelected");

	Params::UWid_RoomSkillTreeButton_C_SetSelected_Params Parms{};

	Parms.NewSelected = NewSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSkillTreeButton_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeButton_C", "PreConstruct");

	Params::UWid_RoomSkillTreeButton_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_RoomSkillTreeButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_RoomSkillTreeButton.wid_RoomSkillTreeButton_C.ExecuteUbergraph_wid_RoomSkillTreeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetTextFromDictionary_Text                              (None)

void UWid_RoomSkillTreeButton_C::ExecuteUbergraph_wid_RoomSkillTreeButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetTextFromDictionary_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSkillTreeButton_C", "ExecuteUbergraph_wid_RoomSkillTreeButton");

	Params::UWid_RoomSkillTreeButton_C_ExecuteUbergraph_wid_RoomSkillTreeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetTextFromDictionary_Text = CallFunc_GetTextFromDictionary_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}


