#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DropItemBackGwidget.DropItemBackGwidget_C
// (None)

class UClass* UDropItemBackGwidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DropItemBackGwidget_C");

	return Clss;
}


// DropItemBackGwidget_C DropItemBackGwidget.Default__DropItemBackGwidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDropItemBackGwidget_C* UDropItemBackGwidget_C::GetDefaultObj()
{
	static class UDropItemBackGwidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDropItemBackGwidget_C*>(UDropItemBackGwidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DropItemBackGwidget.DropItemBackGwidget_C.Show Vendor Amount Selected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ToContainerRef                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDropItemAmountSelector_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UDropItemBackGwidget_C::Show_Vendor_Amount_Selected(class UJSI_Slot_C* ItemRef, class UJSIContainer_C* ToContainerRef, class UDropItemAmountSelector_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "Show Vendor Amount Selected");

	Params::UDropItemBackGwidget_C_Show_Vendor_Amount_Selected_Params Parms{};

	Parms.ItemRef = ItemRef;
	Parms.ToContainerRef = ToContainerRef;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DropItemBackGwidget.DropItemBackGwidget_C.OnDrop
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UDragDropOperation*          Operation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotRef                                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDropItemAmountSelector_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJigSDragOperation_C*        K2Node_DynamicCast_AsJig_SDrag_Operation                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCount_Count                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UDropItemBackGwidget_C::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation, class UJSI_Slot_C* SlotRef, class UDropItemAmountSelector_C* CallFunc_Create_ReturnValue, class UJigSDragOperation_C* K2Node_DynamicCast_AsJig_SDrag_Operation, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCount_Count, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "OnDrop");

	Params::UDropItemBackGwidget_C_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;
	Parms.SlotRef = SlotRef;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsJig_SDrag_Operation = K2Node_DynamicCast_AsJig_SDrag_Operation;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCount_Count = CallFunc_GetCount_Count;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function DropItemBackGwidget.DropItemBackGwidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDropItemBackGwidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropItemBackGwidget.DropItemBackGwidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UDropItemBackGwidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DropItemBackGwidget.DropItemBackGwidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropItemBackGwidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "PreConstruct");

	Params::UDropItemBackGwidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DropItemBackGwidget.DropItemBackGwidget_C.ExecuteUbergraph_DropItemBackGwidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetBlurStrength_InStrength_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDropItemBackGwidget_C::ExecuteUbergraph_DropItemBackGwidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, float CallFunc_SetBlurStrength_InStrength_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "ExecuteUbergraph_DropItemBackGwidget");

	Params::UDropItemBackGwidget_C_ExecuteUbergraph_DropItemBackGwidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_SetBlurStrength_InStrength_ImplicitCast = CallFunc_SetBlurStrength_InStrength_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DropItemBackGwidget.DropItemBackGwidget_C.ItemDropRequest__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UDropItemBackGwidget_C::ItemDropRequest__DelegateSignature(class UJSI_Slot_C* ItemRef, int32 Count, class UJSIContainer_C* Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DropItemBackGwidget_C", "ItemDropRequest__DelegateSignature");

	Params::UDropItemBackGwidget_C_ItemDropRequest__DelegateSignature_Params Parms{};

	Parms.ItemRef = ItemRef;
	Parms.Count = Count;
	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

}

}


