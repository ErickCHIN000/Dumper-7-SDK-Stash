#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C
// (None)

class UClass* UUMG_MountInventoryWidgets_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MountInventoryWidgets_C");

	return Clss;
}


// UMG_MountInventoryWidgets_C UMG_MountInventoryWidgets.Default__UMG_MountInventoryWidgets_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MountInventoryWidgets_C* UUMG_MountInventoryWidgets_C::GetDefaultObj()
{
	static class UUMG_MountInventoryWidgets_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MountInventoryWidgets_C*>(UUMG_MountInventoryWidgets_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C.SetLinkedActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountInventoryWidgets_C::SetLinkedActor(class AActor* LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountInventoryWidgets_C", "SetLinkedActor");

	Params::UUMG_MountInventoryWidgets_C_SetLinkedActor_Params Parms{};

	Parms.LinkedActor = LinkedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MountInventoryWidgets_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountInventoryWidgets_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C.BndEvt__UMG_MountInventoryWidgets_Button_MountCargo_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountInventoryWidgets_C::BndEvt__UMG_MountInventoryWidgets_Button_MountCargo_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountInventoryWidgets_C", "BndEvt__UMG_MountInventoryWidgets_Button_MountCargo_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUMG_MountInventoryWidgets_C_BndEvt__UMG_MountInventoryWidgets_Button_MountCargo_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C.BndEvt__UMG_MountInventoryWidgets_Button_Stats_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountInventoryWidgets_C::BndEvt__UMG_MountInventoryWidgets_Button_Stats_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountInventoryWidgets_C", "BndEvt__UMG_MountInventoryWidgets_Button_Stats_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUMG_MountInventoryWidgets_C_BndEvt__UMG_MountInventoryWidgets_Button_Stats_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C.BndEvt__UMG_MountInventoryWidgets_Button_Skills_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUMG_ButtonBase_C*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountInventoryWidgets_C::BndEvt__UMG_MountInventoryWidgets_Button_Skills_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountInventoryWidgets_C", "BndEvt__UMG_MountInventoryWidgets_Button_Skills_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUMG_MountInventoryWidgets_C_BndEvt__UMG_MountInventoryWidgets_Button_Skills_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountInventoryWidgets.UMG_MountInventoryWidgets_C.ExecuteUbergraph_UMG_MountInventoryWidgets
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ButtonBase_C*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountInventoryWidgets_C::ExecuteUbergraph_UMG_MountInventoryWidgets(int32 EntryPoint, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_2, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountInventoryWidgets_C", "ExecuteUbergraph_UMG_MountInventoryWidgets");

	Params::UUMG_MountInventoryWidgets_C_ExecuteUbergraph_UMG_MountInventoryWidgets_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


