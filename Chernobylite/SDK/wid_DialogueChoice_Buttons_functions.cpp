#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C
// (None)

class UClass* UWid_DialogueChoice_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueChoice_Buttons_C");

	return Clss;
}


// wid_DialogueChoice_Buttons_C wid_DialogueChoice_Buttons.Default__wid_DialogueChoice_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueChoice_Buttons_C* UWid_DialogueChoice_Buttons_C::GetDefaultObj()
{
	static class UWid_DialogueChoice_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueChoice_Buttons_C*>(UWid_DialogueChoice_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.SetFont
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWid_Inventory_Buttons_Entry_C*Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (UObjectWrapper, HasGetValueTypeHash)

void UWid_DialogueChoice_Buttons_C::SetFont(class UWid_Inventory_Buttons_Entry_C* Widget, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueChoice_Buttons_C", "SetFont");

	Params::UWid_DialogueChoice_Buttons_C_SetFont_Params Parms{};

	Parms.Widget = Widget;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoModify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_DialogueChoice_Buttons_C::Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueChoice_Buttons_C", "Update");

	Params::UWid_DialogueChoice_Buttons_C_Update_Params Parms{};

	Parms.Modify = Modify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_DialogueChoice_Buttons_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueChoice_Buttons_C", "Tick");

	Params::UWid_DialogueChoice_Buttons_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueChoice_Buttons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueChoice_Buttons_C", "PreConstruct");

	Params::UWid_DialogueChoice_Buttons_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_DialogueChoice_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueChoice_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueChoice_Buttons.wid_DialogueChoice_Buttons_C.ExecuteUbergraph_wid_DialogueChoice_Buttons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueChoice_Buttons_C::ExecuteUbergraph_wid_DialogueChoice_Buttons(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueChoice_Buttons_C", "ExecuteUbergraph_wid_DialogueChoice_Buttons");

	Params::UWid_DialogueChoice_Buttons_C_ExecuteUbergraph_wid_DialogueChoice_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


