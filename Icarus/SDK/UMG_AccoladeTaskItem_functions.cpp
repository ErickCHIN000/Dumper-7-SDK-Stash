#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C
// (None)

class UClass* UUMG_AccoladeTaskItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AccoladeTaskItem_C");

	return Clss;
}


// UMG_AccoladeTaskItem_C UMG_AccoladeTaskItem.Default__UMG_AccoladeTaskItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AccoladeTaskItem_C* UUMG_AccoladeTaskItem_C::GetDefaultObj()
{
	static class UUMG_AccoladeTaskItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AccoladeTaskItem_C*>(UUMG_AccoladeTaskItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeTaskItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeTaskItem_C", "PreConstruct");

	Params::UUMG_AccoladeTaskItem_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AccoladeTaskItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeTaskItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C.UpdateState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_AccoladeTaskItem_C::UpdateState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeTaskItem_C", "UpdateState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AccoladeTaskItem.UMG_AccoladeTaskItem_C.ExecuteUbergraph_UMG_AccoladeTaskItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_Select_Default_1                                          (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// struct FSlateColor                 K2Node_Select_Default_2                                          (None)
// struct FSlateColor                 K2Node_Select_Default_3                                          (None)

void UUMG_AccoladeTaskItem_C::ExecuteUbergraph_UMG_AccoladeTaskItem(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, bool K2Node_Event_IsDesignTime, class UTexture2D* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeTaskItem_C", "ExecuteUbergraph_UMG_AccoladeTaskItem");

	Params::UUMG_AccoladeTaskItem_C_ExecuteUbergraph_UMG_AccoladeTaskItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


