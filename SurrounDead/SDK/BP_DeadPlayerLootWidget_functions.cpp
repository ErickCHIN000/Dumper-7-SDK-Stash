#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C
// (None)

class UClass* UBP_DeadPlayerLootWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DeadPlayerLootWidget_C");

	return Clss;
}


// BP_DeadPlayerLootWidget_C BP_DeadPlayerLootWidget.Default__BP_DeadPlayerLootWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_DeadPlayerLootWidget_C* UBP_DeadPlayerLootWidget_C::GetDefaultObj()
{
	static class UBP_DeadPlayerLootWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_DeadPlayerLootWidget_C*>(UBP_DeadPlayerLootWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.SetActionbarFollower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 JigRef                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Return                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::SetActionbarFollower(class UJSI_Slot_C* JigRef, bool* Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "SetActionbarFollower");

	Params::UBP_DeadPlayerLootWidget_C_SetActionbarFollower_Params Parms{};

	Parms.JigRef = JigRef;

	UObject::ProcessEvent(Func, &Parms);

	if (Return != nullptr)
		*Return = Parms.Return;

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.GetAllAttachments
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                Attachments                                                      (Parm, OutParm)

void UBP_DeadPlayerLootWidget_C::GetAllAttachments(TArray<class FName>* Attachments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "GetAllAttachments");

	Params::UBP_DeadPlayerLootWidget_C_GetAllAttachments_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Attachments != nullptr)
		*Attachments = std::move(Parms.Attachments);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.GetListOfNonAddContainers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>     Containers                                                       (Parm, OutParm, ContainsInstancedReference)

void UBP_DeadPlayerLootWidget_C::GetListOfNonAddContainers(TArray<class UJSIContainer_C*>* Containers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "GetListOfNonAddContainers");

	Params::UBP_DeadPlayerLootWidget_C_GetListOfNonAddContainers_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.GetListOfContainers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UJSIContainer_C*>     Containers                                                       (Parm, OutParm, ContainsInstancedReference)
// TArray<class UJSIContainer_C*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UBP_DeadPlayerLootWidget_C::GetListOfContainers(TArray<class UJSIContainer_C*>* Containers, TArray<class UJSIContainer_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "GetListOfContainers");

	Params::UBP_DeadPlayerLootWidget_C_GetListOfContainers_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Containers != nullptr)
		*Containers = std::move(Parms.Containers);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.GetContainerByAttachmentType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAttachmentType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             JigContainer                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ContainerIndex                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::GetContainerByAttachmentType(enum class EAttachmentType Type, class UJSIContainer_C** JigContainer, int32* ContainerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "GetContainerByAttachmentType");

	Params::UBP_DeadPlayerLootWidget_C_GetContainerByAttachmentType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

	if (JigContainer != nullptr)
		*JigContainer = Parms.JigContainer;

	if (ContainerIndex != nullptr)
		*ContainerIndex = Parms.ContainerIndex;

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.GetDropWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDropItemBackGwidget_C*      DropWRef                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::GetDropWidget(class UDropItemBackGwidget_C** DropWRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "GetDropWidget");

	Params::UBP_DeadPlayerLootWidget_C_GetDropWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (DropWRef != nullptr)
		*DropWRef = Parms.DropWRef;

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.GetJSIContainerByPlayerSlots
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlayerSlots            Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             Container                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 EquippedItem                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsPending_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::GetJSIContainerByPlayerSlots(enum class EPlayerSlots Slot, class UJSIContainer_C** Container, class UJSI_Slot_C** EquippedItem, bool* IsPending_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "GetJSIContainerByPlayerSlots");

	Params::UBP_DeadPlayerLootWidget_C_GetJSIContainerByPlayerSlots_Params Parms{};

	Parms.Slot = Slot;

	UObject::ProcessEvent(Func, &Parms);

	if (Container != nullptr)
		*Container = Parms.Container;

	if (EquippedItem != nullptr)
		*EquippedItem = Parms.EquippedItem;

	if (IsPending_ != nullptr)
		*IsPending_ = Parms.IsPending_;

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.AddContentToPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Content                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_4                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_5                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::AddContentToPanel(class UUserWidget* Content, class UJSIContainer_C* ToContainer, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "AddContentToPanel");

	Params::UBP_DeadPlayerLootWidget_C_AddContentToPanel_Params Parms{};

	Parms.Content = Content;
	Parms.ToContainer = ToContainer;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue_4 = CallFunc_AddChild_ReturnValue_4;
	Parms.CallFunc_AddChild_ReturnValue_5 = CallFunc_AddChild_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.SetItemReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSI_Slot_C*                 ItemRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::SetItemReference(class UJSI_Slot_C* ItemRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "SetItemReference");

	Params::UBP_DeadPlayerLootWidget_C_SetItemReference_Params Parms{};

	Parms.ItemRef = ItemRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.SetActorOwner
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ActorRef                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::SetActorOwner(class AActor* ActorRef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "SetActorOwner");

	Params::UBP_DeadPlayerLootWidget_C_SetActorOwner_Params Parms{};

	Parms.ActorRef = ActorRef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.JSICheckStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_DeadPlayerLootWidget_C::JSICheckStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "JSICheckStatus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.JSIOnWeightUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             NewWeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::JSIOnWeightUpdated(double NewWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "JSIOnWeightUpdated");

	Params::UBP_DeadPlayerLootWidget_C_JSIOnWeightUpdated_Params Parms{};

	Parms.NewWeight = NewWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBP_DeadPlayerLootWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.DropInfo_OnItemEquippedChange_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UJSIContainer_C*             FromContainer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             ToContainer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 SlotRef                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Equipped_                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::DropInfo_OnItemEquippedChange_Event(class UJSIContainer_C* FromContainer, class UJSIContainer_C* ToContainer, class UJSI_Slot_C* SlotRef, bool Equipped_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "DropInfo_OnItemEquippedChange_Event");

	Params::UBP_DeadPlayerLootWidget_C_DropInfo_OnItemEquippedChange_Event_Params Parms{};

	Parms.FromContainer = FromContainer;
	Parms.ToContainer = ToContainer;
	Parms.SlotRef = SlotRef;
	Parms.Equipped_ = Equipped_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_DeadPlayerLootWidget.BP_DeadPlayerLootWidget_C.ExecuteUbergraph_BP_DeadPlayerLootWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_Event_ItemRef                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_ActorRef                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_NewWeight                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UJSIContainer_C*>     CallFunc_GetListOfContainers_Containers                          (ReferenceParm, ContainsInstancedReference)
// class UJSIContainer_C*             K2Node_CustomEvent_FromContainer                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSIContainer_C*             K2Node_CustomEvent_ToContainer                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UJSI_Slot_C*                 K2Node_CustomEvent_SlotRef                                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Equipped_                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetContainerOneRef_ContainerRef                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DeadPlayerLootWidget_C::ExecuteUbergraph_BP_DeadPlayerLootWidget(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UJSIContainer_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UJSI_Slot_C* K2Node_Event_ItemRef, class AActor* K2Node_Event_ActorRef, double K2Node_Event_NewWeight, TArray<class UJSIContainer_C*>& CallFunc_GetListOfContainers_Containers, class UJSIContainer_C* K2Node_CustomEvent_FromContainer, class UJSIContainer_C* K2Node_CustomEvent_ToContainer, class UJSI_Slot_C* K2Node_CustomEvent_SlotRef, bool K2Node_CustomEvent_Equipped_, class UUserWidget* CallFunc_GetContainerOneRef_ContainerRef, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_DeadPlayerLootWidget_C", "ExecuteUbergraph_BP_DeadPlayerLootWidget");

	Params::UBP_DeadPlayerLootWidget_C_ExecuteUbergraph_BP_DeadPlayerLootWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_ItemRef = K2Node_Event_ItemRef;
	Parms.K2Node_Event_ActorRef = K2Node_Event_ActorRef;
	Parms.K2Node_Event_NewWeight = K2Node_Event_NewWeight;
	Parms.CallFunc_GetListOfContainers_Containers = CallFunc_GetListOfContainers_Containers;
	Parms.K2Node_CustomEvent_FromContainer = K2Node_CustomEvent_FromContainer;
	Parms.K2Node_CustomEvent_ToContainer = K2Node_CustomEvent_ToContainer;
	Parms.K2Node_CustomEvent_SlotRef = K2Node_CustomEvent_SlotRef;
	Parms.K2Node_CustomEvent_Equipped_ = K2Node_CustomEvent_Equipped_;
	Parms.CallFunc_GetContainerOneRef_ContainerRef = CallFunc_GetContainerOneRef_ContainerRef;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


