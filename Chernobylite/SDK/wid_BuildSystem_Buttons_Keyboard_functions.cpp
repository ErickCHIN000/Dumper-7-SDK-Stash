#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C
// (None)

class UClass* UWid_BuildSystem_Buttons_Keyboard_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Buttons_Keyboard_C");

	return Clss;
}


// wid_BuildSystem_Buttons_Keyboard_C wid_BuildSystem_Buttons_Keyboard.Default__wid_BuildSystem_Buttons_Keyboard_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Buttons_Keyboard_C* UWid_BuildSystem_Buttons_Keyboard_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Buttons_Keyboard_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Buttons_Keyboard_C*>(UWid_BuildSystem_Buttons_Keyboard_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C.SetRotationBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Buttons_Keyboard_C::SetRotationBtn(bool Enable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Buttons_Keyboard_C", "SetRotationBtn");

	Params::UWid_BuildSystem_Buttons_Keyboard_C_SetRotationBtn_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoModify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_BuildSystem_Buttons_Keyboard_C::Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Buttons_Keyboard_C", "Update");

	Params::UWid_BuildSystem_Buttons_Keyboard_C_Update_Params Parms{};

	Parms.Modify = Modify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Buttons_Keyboard_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Buttons_Keyboard_C", "Tick");

	Params::UWid_BuildSystem_Buttons_Keyboard_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Buttons_Keyboard_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Buttons_Keyboard_C", "PreConstruct");

	Params::UWid_BuildSystem_Buttons_Keyboard_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Buttons_Keyboard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Buttons_Keyboard_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Buttons_Keyboard.wid_BuildSystem_Buttons_Keyboard_C.ExecuteUbergraph_wid_BuildSystem_Buttons_Keyboard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Buttons_Keyboard_C::ExecuteUbergraph_wid_BuildSystem_Buttons_Keyboard(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Buttons_Keyboard_C", "ExecuteUbergraph_wid_BuildSystem_Buttons_Keyboard");

	Params::UWid_BuildSystem_Buttons_Keyboard_C_ExecuteUbergraph_wid_BuildSystem_Buttons_Keyboard_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


