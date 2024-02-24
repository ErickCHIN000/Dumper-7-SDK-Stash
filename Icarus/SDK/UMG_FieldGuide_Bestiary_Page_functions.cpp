#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C
// (None)

class UClass* UUMG_FieldGuide_Bestiary_Page_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuide_Bestiary_Page_C");

	return Clss;
}


// UMG_FieldGuide_Bestiary_Page_C UMG_FieldGuide_Bestiary_Page.Default__UMG_FieldGuide_Bestiary_Page_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuide_Bestiary_Page_C* UUMG_FieldGuide_Bestiary_Page_C::GetDefaultObj()
{
	static class UUMG_FieldGuide_Bestiary_Page_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuide_Bestiary_Page_C*>(UUMG_FieldGuide_Bestiary_Page_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.SetProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_FieldGuide_Tags_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTerrainsRowHandle>  K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FTerrainsRowHandle          CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIcarusTerrain              CallFunc_GetTerrainsStruct_Terrains                              (None)
// enum class EValid                  CallFunc_GetTerrainsStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FAtmospheresRowHandle       CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// struct FIcarusAtmosphere           CallFunc_GetAtmospheresStruct_Atmospheres                        (None)
// enum class EValid                  CallFunc_GetAtmospheresStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_Bestiary_Page_C::SetProgress(class UUMG_FieldGuide_Tags_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, TArray<struct FTerrainsRowHandle>& K2Node_MakeArray_Array, const struct FTerrainsRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FIcarusTerrain& CallFunc_GetTerrainsStruct_Terrains, enum class EValid CallFunc_GetTerrainsStruct_Paths, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, const struct FAtmospheresRowHandle& CallFunc_Array_Get_Item_2, class FText K2Node_Select_Default, const struct FIcarusAtmosphere& CallFunc_GetAtmospheresStruct_Atmospheres, enum class EValid CallFunc_GetAtmospheresStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_Less_IntInt_ReturnValue_2, class FText CallFunc_Format_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Variable_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FLinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "SetProgress");

	Params::UUMG_FieldGuide_Bestiary_Page_C_SetProgress_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTerrainsStruct_Terrains = CallFunc_GetTerrainsStruct_Terrains;
	Parms.CallFunc_GetTerrainsStruct_Paths = CallFunc_GetTerrainsStruct_Paths;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAtmospheresStruct_Atmospheres = CallFunc_GetAtmospheresStruct_Atmospheres;
	Parms.CallFunc_GetAtmospheresStruct_Paths = CallFunc_GetAtmospheresStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.SetNoProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::SetNoProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "SetNoProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.SetNameImagePercentage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UUMG_FieldGuide_Bestiary_Page_C::SetNameImagePercentage(int32 Percent, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "SetNameImagePercentage");

	Params::UUMG_FieldGuide_Bestiary_Page_C_SetNameImagePercentage_Params Parms{};

	Parms.Percent = Percent;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.OnLoaded_B0BD2D9A45680E8E385723813AD88531
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_Bestiary_Page_C::OnLoaded_B0BD2D9A45680E8E385723813AD88531(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "OnLoaded_B0BD2D9A45680E8E385723813AD88531");

	Params::UUMG_FieldGuide_Bestiary_Page_C_OnLoaded_B0BD2D9A45680E8E385723813AD88531_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.OnLoaded_03137AEE43730A1D1EFCD5A1EDF9410F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_Bestiary_Page_C::OnLoaded_03137AEE43730A1D1EFCD5A1EDF9410F(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "OnLoaded_03137AEE43730A1D1EFCD5A1EDF9410F");

	Params::UUMG_FieldGuide_Bestiary_Page_C_OnLoaded_03137AEE43730A1D1EFCD5A1EDF9410F_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "PreConstruct");

	Params::UUMG_FieldGuide_Bestiary_Page_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_20_K2Node_ComponentBoundEvent_2_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_20_K2Node_ComponentBoundEvent_2_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_20_K2Node_ComponentBoundEvent_2_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_20_K2Node_ComponentBoundEvent_2_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_80_K2Node_ComponentBoundEvent_4_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_80_K2Node_ComponentBoundEvent_4_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_80_K2Node_ComponentBoundEvent_4_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_80_K2Node_ComponentBoundEvent_4_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_40_2_K2Node_ComponentBoundEvent_5_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_40_2_K2Node_ComponentBoundEvent_5_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_40_2_K2Node_ComponentBoundEvent_5_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_40_2_K2Node_ComponentBoundEvent_5_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_UMG_Sound_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_UMG_Sound_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_UMG_Sound_Button_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_UMG_Lore_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_UMG_Lore_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_UMG_Lore_Button_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_UMG_Unlocks_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_UMG_Unlocks_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_UMG_Unlocks_Button_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.ShowLore
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::ShowLore()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "ShowLore");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.ShowRewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::ShowRewards()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "ShowRewards");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_20_2_K2Node_ComponentBoundEvent_7_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_20_2_K2Node_ComponentBoundEvent_7_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_20_2_K2Node_ComponentBoundEvent_7_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_20_2_K2Node_ComponentBoundEvent_7_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_40_K2Node_ComponentBoundEvent_8_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_40_K2Node_ComponentBoundEvent_8_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_40_K2Node_ComponentBoundEvent_8_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_40_K2Node_ComponentBoundEvent_8_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_60_K2Node_ComponentBoundEvent_9_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_60_K2Node_ComponentBoundEvent_9_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_60_K2Node_ComponentBoundEvent_9_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_60_K2Node_ComponentBoundEvent_9_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.BndEvt__UMG_Bestiary_Creature_Page_100_K2Node_ComponentBoundEvent_10_HoverUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               Mouse                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuide_Bestiary_Page_C::BndEvt__UMG_Bestiary_Creature_Page_100_K2Node_ComponentBoundEvent_10_HoverUpdated__DelegateSignature(bool Mouse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "BndEvt__UMG_Bestiary_Creature_Page_100_K2Node_ComponentBoundEvent_10_HoverUpdated__DelegateSignature");

	Params::UUMG_FieldGuide_Bestiary_Page_C_BndEvt__UMG_Bestiary_Creature_Page_100_K2Node_ComponentBoundEvent_10_HoverUpdated__DelegateSignature_Params Parms{};

	Parms.Mouse = Mouse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.ExecuteUbergraph_UMG_FieldGuide_Bestiary_Page
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class UUMG_BasicTooltip_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_StatDescriptionBestiary_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BasicTooltip_C*         CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EBiomeImageType         Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FBestiaryData               CallFunc_GetBestiaryDataStruct_BestiaryData                      (None)
// enum class EValid                  CallFunc_GetBestiaryDataStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFMODEvent*                  K2Node_DynamicCast_AsFMODEvent                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Mouse_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               K2Node_ComponentBoundEvent_Mouse_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Mouse_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Mouse_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_Select_Default_3                                          (None)
// bool                               K2Node_ComponentBoundEvent_Mouse_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Mouse_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_ComponentBoundEvent_Mouse                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_4                                             (ConstParm)
// struct FAtmospheresRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FIcarusAtmosphere           CallFunc_GetAtmospheresStruct_Atmospheres                        (None)
// enum class EValid                  CallFunc_GetAtmospheresStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Select_Default_4                                          (UObjectWrapper, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FBaseStatsEnum              CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuide_Bestiary_Page_C::ExecuteUbergraph_UMG_FieldGuide_Bestiary_Page(int32 EntryPoint, class FText Temp_text_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UUMG_StatDescriptionBestiary_C* CallFunc_Create_ReturnValue_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_BasicTooltip_C* CallFunc_Create_ReturnValue_2, enum class EBiomeImageType Temp_byte_Variable_2, class FText Temp_text_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable_3, const struct FBestiaryData& CallFunc_GetBestiaryDataStruct_BestiaryData, enum class EValid CallFunc_GetBestiaryDataStruct_Paths, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool Temp_bool_Variable_4, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_ComponentBoundEvent_Mouse_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_2, class FText K2Node_Select_Default_2, bool K2Node_ComponentBoundEvent_Mouse_5, bool K2Node_ComponentBoundEvent_Mouse_4, class UObject* Temp_object_Variable_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue, bool K2Node_ComponentBoundEvent_Mouse_3, const struct FSlateBrush& K2Node_Select_Default_3, bool K2Node_ComponentBoundEvent_Mouse_2, bool K2Node_ComponentBoundEvent_Mouse_1, bool K2Node_ComponentBoundEvent_Mouse, bool CallFunc_GreaterEqual_IntInt_ReturnValue_3, class UObject* K2Node_CustomEvent_Loaded_1, class FText Temp_text_Variable_4, const struct FAtmospheresRowHandle& CallFunc_Array_Get_Item, const struct FIcarusAtmosphere& CallFunc_GetAtmospheresStruct_Atmospheres, enum class EValid CallFunc_GetAtmospheresStruct_Paths, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FBaseStatsEnum& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_4, int32 CallFunc_Divide_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "ExecuteUbergraph_UMG_FieldGuide_Bestiary_Page");

	Params::UUMG_FieldGuide_Bestiary_Page_C_ExecuteUbergraph_UMG_FieldGuide_Bestiary_Page_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetBestiaryDataStruct_BestiaryData = CallFunc_GetBestiaryDataStruct_BestiaryData;
	Parms.CallFunc_GetBestiaryDataStruct_Paths = CallFunc_GetBestiaryDataStruct_Paths;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_DynamicCast_AsFMODEvent = K2Node_DynamicCast_AsFMODEvent;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Mouse_6 = K2Node_ComponentBoundEvent_Mouse_6;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_2 = CallFunc_GreaterEqual_IntInt_ReturnValue_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_ComponentBoundEvent_Mouse_5 = K2Node_ComponentBoundEvent_Mouse_5;
	Parms.K2Node_ComponentBoundEvent_Mouse_4 = K2Node_ComponentBoundEvent_Mouse_4;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Mouse_3 = K2Node_ComponentBoundEvent_Mouse_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_ComponentBoundEvent_Mouse_2 = K2Node_ComponentBoundEvent_Mouse_2;
	Parms.K2Node_ComponentBoundEvent_Mouse_1 = K2Node_ComponentBoundEvent_Mouse_1;
	Parms.K2Node_ComponentBoundEvent_Mouse = K2Node_ComponentBoundEvent_Mouse;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_3 = CallFunc_GreaterEqual_IntInt_ReturnValue_3;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAtmospheresStruct_Atmospheres = CallFunc_GetAtmospheresStruct_Atmospheres;
	Parms.CallFunc_GetAtmospheresStruct_Paths = CallFunc_GetAtmospheresStruct_Paths;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_4 = CallFunc_GreaterEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuide_Bestiary_Page.UMG_FieldGuide_Bestiary_Page_C.Close__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_FieldGuide_Bestiary_Page_C::Close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuide_Bestiary_Page_C", "Close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


