#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LoadoutSelection.UMG_LoadoutSelection_C
// (None)

class UClass* UUMG_LoadoutSelection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LoadoutSelection_C");

	return Clss;
}


// UMG_LoadoutSelection_C UMG_LoadoutSelection.Default__UMG_LoadoutSelection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LoadoutSelection_C* UUMG_LoadoutSelection_C::GetDefaultObj()
{
	static class UUMG_LoadoutSelection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LoadoutSelection_C*>(UUMG_LoadoutSelection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadoutSelection_C::BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadoutSelection_C", "BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_LoadoutSelection_C_BndEvt__UMG_LoadoutSelection_UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadoutSelection_C::BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadoutSelection_C", "BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUMG_LoadoutSelection_C_BndEvt__UMG_LoadoutSelection_UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.ExecuteUbergraph_UMG_LoadoutSelection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPlayerLoadoutData          CallFunc_GetPlayerLoadoutData_LoadoutData                        (ContainsInstancedReference)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadoutSelection_C::ExecuteUbergraph_UMG_LoadoutSelection(int32 EntryPoint, const struct FPlayerLoadoutData& CallFunc_GetPlayerLoadoutData_LoadoutData, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadoutSelection_C", "ExecuteUbergraph_UMG_LoadoutSelection");

	Params::UUMG_LoadoutSelection_C_ExecuteUbergraph_UMG_LoadoutSelection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerLoadoutData_LoadoutData = CallFunc_GetPlayerLoadoutData_LoadoutData;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.Back__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_LoadoutSelection_C::Back__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadoutSelection_C", "Back__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LoadoutSelection.UMG_LoadoutSelection_C.ConfirmLoadout__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerLoadoutData          Loadout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_LoadoutSelection_C::ConfirmLoadout__DelegateSignature(const struct FPlayerLoadoutData& Loadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadoutSelection_C", "ConfirmLoadout__DelegateSignature");

	Params::UUMG_LoadoutSelection_C_ConfirmLoadout__DelegateSignature_Params Parms{};

	Parms.Loadout = Loadout;

	UObject::ProcessEvent(Func, &Parms);

}

}


