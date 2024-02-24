#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C
// (None)

class UClass* UUI_ShellUpgradeMenu_TopNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ShellUpgradeMenu_TopNav_C");

	return Clss;
}


// UI_ShellUpgradeMenu_TopNav_C UI_ShellUpgradeMenu_TopNav.Default__UI_ShellUpgradeMenu_TopNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ShellUpgradeMenu_TopNav_C* UUI_ShellUpgradeMenu_TopNav_C::GetDefaultObj()
{
	static class UUI_ShellUpgradeMenu_TopNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ShellUpgradeMenu_TopNav_C*>(UUI_ShellUpgradeMenu_TopNav_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.SetTopNavVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        TopNav                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        FastTravel                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Abilities                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::SetTopNavVisibility(enum class ESlateVisibility TopNav, enum class ESlateVisibility FastTravel, enum class ESlateVisibility Abilities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "SetTopNavVisibility");

	Params::UUI_ShellUpgradeMenu_TopNav_C_SetTopNavVisibility_Params Parms{};

	Parms.TopNav = TopNav;
	Parms.FastTravel = FastTravel;
	Parms.Abilities = Abilities;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::GetButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "GetButtons");

	Params::UUI_ShellUpgradeMenu_TopNav_C_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.UpdateTopNav
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexTab                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UCheckBox*>           K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCheckBox*                   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_ShellUpgradeMenu_TopNav_C::UpdateTopNav(int32 Index, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UCheckBox*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UCheckBox* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "UpdateTopNav");

	Params::UUI_ShellUpgradeMenu_TopNav_C_UpdateTopNav_Params Parms{};

	Parms.Index = Index;
	Parms.Local_IndexTab = Local_IndexTab;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_BndEvt__UI_Button_Shells_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_BndEvt__UI_Button_Inventory_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.ExecuteUbergraph_UI_ShellUpgradeMenu_TopNav
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::ExecuteUbergraph_UI_ShellUpgradeMenu_TopNav(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "ExecuteUbergraph_UI_ShellUpgradeMenu_TopNav");

	Params::UUI_ShellUpgradeMenu_TopNav_C_ExecuteUbergraph_UI_ShellUpgradeMenu_TopNav_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.OnTopNavButtonUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_ShellUpgradeMenu_TopNav_C::OnTopNavButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "OnTopNavButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.OnTopNavButtonHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::OnTopNavButtonHovered__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "OnTopNavButtonHovered__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_OnTopNavButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_ShellUpgradeMenu_TopNav.UI_ShellUpgradeMenu_TopNav_C.OnTopNavButtonPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_ShellUpgradeMenu_TopNav_C::OnTopNavButtonPressed__DelegateSignature(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_ShellUpgradeMenu_TopNav_C", "OnTopNavButtonPressed__DelegateSignature");

	Params::UUI_ShellUpgradeMenu_TopNav_C_OnTopNavButtonPressed__DelegateSignature_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}

}


