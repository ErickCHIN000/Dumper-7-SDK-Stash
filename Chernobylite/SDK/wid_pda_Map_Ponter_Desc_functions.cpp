#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Map_Ponter_Desc.wid_pda_Map_Ponter_Desc_C
// (None)

class UClass* UWid_pda_Map_Ponter_Desc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Map_Ponter_Desc_C");

	return Clss;
}


// wid_pda_Map_Ponter_Desc_C wid_pda_Map_Ponter_Desc.Default__wid_pda_Map_Ponter_Desc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Map_Ponter_Desc_C* UWid_pda_Map_Ponter_Desc_C::GetDefaultObj()
{
	static class UWid_pda_Map_Ponter_Desc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Map_Ponter_Desc_C*>(UWid_pda_Map_Ponter_Desc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Map_Ponter_Desc.wid_pda_Map_Ponter_Desc_C.SetDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_3                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_4                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_pda_Map_Ponter_Desc_C::SetDesc(class FText Text, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, const struct FVector2D& CallFunc_GetPosition_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X_4, float CallFunc_BreakVector2D_Y_4, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Ponter_Desc_C", "SetDesc");

	Params::UWid_pda_Map_Ponter_Desc_C_SetDesc_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = CallFunc_SlotAsCanvasSlot_ReturnValue_1;
	Parms.CallFunc_GetPosition_ReturnValue_1 = CallFunc_GetPosition_ReturnValue_1;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_3 = CallFunc_BreakVector2D_X_3;
	Parms.CallFunc_BreakVector2D_Y_3 = CallFunc_BreakVector2D_Y_3;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = CallFunc_SlotAsCanvasSlot_ReturnValue_2;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_4 = CallFunc_BreakVector2D_X_4;
	Parms.CallFunc_BreakVector2D_Y_4 = CallFunc_BreakVector2D_Y_4;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Ponter_Desc.wid_pda_Map_Ponter_Desc_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Ponter_Desc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Ponter_Desc_C", "PreConstruct");

	Params::UWid_pda_Map_Ponter_Desc_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_Ponter_Desc.wid_pda_Map_Ponter_Desc_C.ExecuteUbergraph_wid_pda_Map_Ponter_Desc
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_Ponter_Desc_C::ExecuteUbergraph_wid_pda_Map_Ponter_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_Ponter_Desc_C", "ExecuteUbergraph_wid_pda_Map_Ponter_Desc");

	Params::UWid_pda_Map_Ponter_Desc_C_ExecuteUbergraph_wid_pda_Map_Ponter_Desc_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


