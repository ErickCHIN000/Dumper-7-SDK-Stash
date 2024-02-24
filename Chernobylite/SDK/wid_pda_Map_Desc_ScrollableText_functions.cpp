#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C
// (None)

class UClass* UWid_pda_Map_Desc_ScrollableText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Map_Desc_ScrollableText_C");

	return Clss;
}


// wid_pda_Map_Desc_ScrollableText_C wid_pda_Map_Desc_ScrollableText.Default__wid_pda_Map_Desc_ScrollableText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Map_Desc_ScrollableText_C* UWid_pda_Map_Desc_ScrollableText_C::GetDefaultObj()
{
	static class UWid_pda_Map_Desc_ScrollableText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Map_Desc_ScrollableText_C*>(UWid_pda_Map_Desc_ScrollableText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_pda_Map_Desc_ScrollableText_C::Update(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_ScrollableText_C", "Update");

	Params::UWid_pda_Map_Desc_ScrollableText_C_Update_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C.Scroll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Desc_ScrollableText_C::Scroll(float Delta, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_ScrollableText_C", "Scroll");

	Params::UWid_pda_Map_Desc_ScrollableText_C_Scroll_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Desc_ScrollableText_C::Init(const struct FVector2D& Size, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, bool CallFunc_Less_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_ScrollableText_C", "Init");

	Params::UWid_pda_Map_Desc_ScrollableText_C_Init_Params Parms{};

	Parms.Size = Size;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C.ScrollUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Map_Desc_ScrollableText_C::ScrollUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_ScrollableText_C", "ScrollUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C.ScrollDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_pda_Map_Desc_ScrollableText_C::ScrollDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_ScrollableText_C", "ScrollDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_pda_Map_Desc_ScrollableText.wid_pda_Map_Desc_ScrollableText_C.ExecuteUbergraph_wid_pda_Map_Desc_ScrollableText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Map_Desc_ScrollableText_C::ExecuteUbergraph_wid_pda_Map_Desc_ScrollableText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Desc_ScrollableText_C", "ExecuteUbergraph_wid_pda_Map_Desc_ScrollableText");

	Params::UWid_pda_Map_Desc_ScrollableText_C_ExecuteUbergraph_wid_pda_Map_Desc_ScrollableText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


